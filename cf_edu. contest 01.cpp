#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
     {

        int n,m,j;
        cin>>n>>m;
        int a[n];
        int sum=0;
        for(j=0;j<n;j++)
        {
           cin>>a[j];
           sum=sum+a[j];
        }
    if(sum>m)
        cout<<sum-m<<endl;
    else cout<<0;


      }


 }
