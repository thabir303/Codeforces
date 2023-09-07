#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;


int main()
{
    ll n;
    cin>>n;
    ll x;
    vector<ll>a;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    ll xy;
    cin>>xy;
    a.erase(a.begin()+xy-1);

    ll ac,b;
    cin>>ac>>b;
    a.erase(a.begin()+ac-1,a.begin()+b-1);
    cout<<a.size()<<endl;
    for(auto b:a)
        cout<<b<<" ";

}
