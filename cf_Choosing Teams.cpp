#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int y[n];
    for(int i=0;i<n;i++)
    {
      cin>>y[i];
    }
    for(int i=0;i<n;i++)
    {
       if(y[i]+k<=5)
            count++;
    }
    if(count>=3)
        cout<<count/3;
    else cout<<0;
}
