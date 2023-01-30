#include<bits/stdc++.h>
using namespace std;

int main()
{
   int m;
      int n;
      cin>>n;
      int a[n];
      vector<int>v,v1;

      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          v.push_back(a[i]);
      }
      m=*min_element(a,a+n);
      int p,q,m1;
      for(int i=0;i<n;i++)
      {
          if(a[i]==m)
            p=i+1;
      }
      for(int i=0;i<n;i++)
      {
          if(i==p-1)
          {
             v.push_back(a[i+1]);
          }
          else v.push_back(a[i]);
      }
      m1=*min_element(v.begin(),v.end());
      for(int i=0;i<n;i++)
      {
          if(a[i]==m1)
            q=i+1;
      }
      cout<<p<<" "<<q;
}
