#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll x,y,z,a;cin>>x>>y>>z>>a;
        if((x<y) and (z<a) and (x<z) and (y<a)) yes

        else if((x<y) and (z<a) and (x>z) and (y>a)) yes

        else if((x>y)and (z>a) and (x<z) and (y<a)) yes

        else if((x>y) and (z>a) and (x>z) and (y>a)) yes

        else  no

    }

}
