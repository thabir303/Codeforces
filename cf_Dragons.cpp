#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n,st,count=0;
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        int x,y,j;
        cin>>x>>y;
        int a[n][2];
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
        if(s>a[0][0])
        {
         st=s+a[0][1];
         if(st>a[1][0])
         {
             count++;
         }
        }
        else count=0;
    }
    if(count>0)
        cout<<"YES";
    else if(count==0)
        cout<<"NO";
}



