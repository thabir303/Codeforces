#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,k;
    cin>>n>>k;
    int i;
    vector<int>v1,v2,v;
    if(n%2==0)
    {
        for(i=1;i<n;i=i+2)
        {
            v1.push_back(i); //1 3 5 7 9 2 4 6 8 10
        }
        for(i=2;i<=n;i=i+2)
        {
            v1.push_back(i);
        }

    }
    else {
        for(i=1;i<=n;i=i+2)
        {
            v1.push_back(i);
        }
        for(i=2;i<n;i=i+2)
        {
            v1.push_back(i);
        }
    }
    cout<<v1[k-1];







}
