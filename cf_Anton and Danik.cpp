#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,count1=0,i,j;
    cin>>n;
    char g[n];
    for(i=0;i<n;i++)
    {
        cin>>g[i];
    }
    for(i=0;i<n;i++)
    {
        if(g[i]=='A')
        {
            count++;
        }
        else if(g[i]=='D')
        { count1++; }
    }
    if(count>count1)
        cout<<"Anton";
    else if(count<count1)
        cout<<"Danik";
    else if(count==count1&&count>0&&count1>0)
        cout<<"Friendship";
}
