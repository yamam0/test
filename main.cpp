#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int a[50];
ll gcd(ll a,ll b)
{
    return (b==0 ? a : gcd(b,a%b));
}
ll lcm(ll a,ll b)
{
    return(a*(b/gcd(a,b)));
}

ll rec(int i,int index,ll lcm_all){
if(i==n)
{
    if(index==10)
        return lcm_all;
    else
        return 0;
}

ll pick=0,leave=0;

pick=rec(i+1,index+1,lcm(lcm_all,a[i]));
leave=rec(i+1,index,lcm_all);
return max(pick,leave);


}

int main()
{

    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];

        cout<<rec(0,0,1);



}
