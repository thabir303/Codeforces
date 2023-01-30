#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    int i,j;
    cin>>n>>q;
    int p[n];

    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    sort(p,p+n);
    for(j=0;j<q;j++)
     {
       int x,y,k;
       cin>>x>>y;

       int sum=0;
       for(k=n-y;k>=x-1;k--)
       {
           sum+=p[k];
       }
       cout<<sum<<endl;
     }
}
