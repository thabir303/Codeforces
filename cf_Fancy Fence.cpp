#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a;
        double ans;
        ans=360/(180.00-a);
        b=(int)ans;
        //cout<<ans<<endl;
        if(ans-b==0.00) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
