#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,x,y,d,ca;
        cin>>a>>b>>c>>x>>y;
        if(x<=a&&y<=b)
                cout<<"YES"<<endl;
        else if(x<=a&&b<y)
        {
            if(y-b<=c)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(y<=b&&a<x)
        {
            if(x-a<=c)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(a<x&&b<y)
        {
            if(a+b+c>=x+y)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
