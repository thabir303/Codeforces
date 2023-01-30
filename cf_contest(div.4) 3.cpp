#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int i,j,p,q;
        char a[8][8];
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<8;i++)
         {
            for(j=0;j<8;j++)
            {
               if(a[i][j]=='#' && a[i][j+2]=='#')
               {
                   p=i;
                   q=j;
               }
            }
         }
        cout<<p<<" "<<q+2<<endl;
    }
}
