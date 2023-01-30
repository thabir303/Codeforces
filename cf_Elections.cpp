#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,x;
        cin>>a>>b>>c;
        x=max(a,max(b,c));
        if(x==a&&x!=0&&x!=b&&x!=c)
        {
        cout<<(x-a)<<" "<<(x-b)+1<<" "<<(x-c)+1<<endl;
        }
        else if(x==b&&x!=0&&x!=a&&x!=c)
        {
            cout<<(x-a)+1<<" "<<(x-b)<<" "<<(x-c)+1<<endl;
        }
        else if(x==c&&x!=0&&x!=b&&x!=a)
        {
            cout<<(x-a)+1<<" "<<(x-b)+1<<" "<<(x-c)<<endl;
        }
        else if(x==0)
        {
            cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
        }
        else if(x==a&&x==b)
        {
            cout<<1<<" "<<1<<" "<<(x-c)+1<<endl;
        }
        else if(x==b&&x==c)
        {
            cout<<(x-a)+1<<" "<<1<<" "<<1<<endl;
        }
        else if(x==c&&x==a)
        {
            cout<<1<<" "<<(x-b)+1<<" "<<1<<endl;
        }

    }
}
