#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,c=0,f=0;
        cin>>n;
        long long int a[n],p[n+1];
        p[0]=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            p[i+1]=p[i]+a[i];

        }
        for(int i=0; i<n; i++)
        {
            if(p[n]==a[i])
            f=1;
        }
        for(int i=0; i<n; i++)
            {
                if(a[i]==0) c++;
            }
        if(c==n) cout<<n<<endl;
        else if(f) cout<<c+1<<endl;
        else if(!f&&n%2!=0) cout<<c<<endl;
        else if(!f&&n%2==0) cout<<2*c<<endl;

    }

}
/*else if(c%2==0&&n%2!=0)
    cout<<c+1<<endl;
else if(c%2==0&&n%2==0)
    cout<<c*2<<endl;
else if(c%2!=0)
    cout<<c<<endl;
*/
