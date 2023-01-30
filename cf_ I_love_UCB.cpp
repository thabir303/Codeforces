#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=0,count1=0;
    cin>>n;
    int m[n];
    for(i=0;i<n;i++)
    {
        cin>>m[i];
    }
    int max=m[0],min=m[0];
    for(i=1;i<n;i++)
    {
        if(m[i]>max)
        {
            max=m[i];
            count++;
        }
        else if(m[i]<min)
        {
            min=m[i];
            count1++;
        }
    }
    cout<<count+count1<<endl;
}
