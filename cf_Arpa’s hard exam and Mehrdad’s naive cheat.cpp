#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,ans=1,base=8; cin>> n;
    while(n)
    {
        if(n%2==1)
        {
            ans=(ans*base)%10;
            n--;
        }
        else
        {
            base=(base*base)%10;
            n/=2;
        }
    }
    cout<<ans<<endl;
}
