#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else if(a[0]==b[1]&&a[1]==b[0]) cout<<1<<endl;
        else if((a[0]==a[1]&&b[0]!=b[1])||(b[0]==b[1]&&a[0]!=a[1])) cout<<2<<endl;
        else if(a[0]!=a[1]&&a[0]!=b[0]&&a[0]!=b[1]&&a[1]!=b[0]&&a[1]!=b[1]) cout<<3<<endl;
        else if(a[0]==a[1]&&b[0]==b[1]) cout<<1<<endl;
        else if((a[0]==a[1]&&b[0]==a[0])||(a[0]==a[1]&&b[1]==a[0]))cout<<1<<endl;
        else if((b[0]==b[1]&&a[0]==b[0])||(b[0]==b[1]&&a[1]==b[0]))cout<<1<<endl;
        else if((a[0]!=a[1]&&a[0]==b[1])||(a[0]!=a[1]&&a[0]==b[0])||(a[1]!=a[0]&&a[1]==b[1])||(a[1]!=a[0]&&a[1]==b[0])) cout<<2<<endl;
        else if((b[0]!=b[1]&&b[0]==a[1])||(b[0]!=b[1]&&b[0]==a[0])||(b[1]!=b[0]&&b[1]==a[1])||(b[1]!=b[0]&&b[1]==a[0])) cout<<2<<endl;

    }
}
