#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{
     ll t; cin>>t;
     while(t--)
     {
        ll n,cnt=0; cin>>n;
        ll a[n];
        map<ll ,ll >mp;
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
                mp[a[i]]++;
            }
            if(n%2==1)
            {
                cout<<n<<endl;
            }
            else {
            for(auto it: mp)
            {
                if(it.second==n/2)
                {
                    cnt++;
                }
            }
            if(cnt==2) cout<<(n/2)+1<<endl;
            else cout<<n<<endl;
            }
     }
}
