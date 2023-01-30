#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,h1,h2,h3;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%3==0)
        {
            h2=n/3;
            h1=int(n/3)+1;
            h3=int(n/3)-1;
            cout<<h2<<" "<<h1<<" "<<h3<<endl;
        }
        else if(n%3==1)
        {
            h2=(n/3);
            h1=int(n/3)+2;
            h3=int(n/3)-1;
            cout<<h2<<" "<<h1<<" "<<h3<<endl;
        }
        else {

            h2=int(n/3)+1;
            h1=int(n/3)+2;
            h3=(n/3)-1;
            cout<<h2<<" "<<h1<<" "<<h3<<endl;

        }

    }

}
