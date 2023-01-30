#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long int t; cin>>t;
     while(t--)
     {
         long long int n,r,b;
         cin>>n>>r>>b;

         for(int i=1;i<=b;i++)
         {
             for(int j=1;j<=(r/(b+1));j++)
             {
                 cout<<"R";
             }
             if((r%(b+1))>=i) cout<<"R";
             cout<<"B";
         }
         for(int j=1; j<=(r/(b+1));j++)
         {
          cout<<"R";
         }
         cout<<endl;
         }
}
