#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum1=0,sum2,i=0;
    cin>>n;
    sum1=(n*(n+1))/2;
    long long int a[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        sum2=sum2+a[i];
    }
    cout<<sum1-sum2;
}
