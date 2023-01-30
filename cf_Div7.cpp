#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,d;cin>>n;
        if(n%7==0) cout<<n<<endl;
        else
        {
            ll d=n/10;
            ll a=n+7-(n%7),c=a/10;
            ll b=n-(n%7),e=b/10;
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
            if(d==c)cout<<a<<endl;
            else if(d==e)cout<<b<<endl;
        }
    }
}
