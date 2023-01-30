#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];

        ll mi=*min_element(a,a+n);
        ll sum=0;
        for(int i=0;i<n;i++)
            sum+=mi-a[i];

        cout<<abs(sum)<<endl;

    }





}
