#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n,m; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string s,sum; cin>>s;

        if(s[0]=='9')
        {
            ///reverse(sum.begin(),sum.end());
            ll ans=0;
            for(int i=s.size()-1;i>=0;i--)
            {
                ll s1=s[i] - '0';
                s1+=ans;
                if(s1==1 || s1==0)
                {
                    ans=0;
                    ll s2=1-s1;
                    sum+=s2+'0';
                }
                else if(s1>=2)
                {
                    ll s2=11-s1;
                    ans=1;
                    sum+=s2+'0';
                }

            }
            reverse(sum.begin(),sum.end());
            ///cout<<sum<<endl;

        }
        else if(s[0] != '9')
        {
            for(int i=0;i<s.size();i++)
            {
                ll s1=s[i]-'0';
                ll s2=9-s1;
                sum+=s2+'0';
            }
        }
        cout<<sum<<endl;
    }
}
