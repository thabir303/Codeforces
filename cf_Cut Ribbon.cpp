#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,count=0;
    cin>>n>>a>>b>>c;
    if(a+b+c==n)
        count=3;
    else if(a+b==n||a+c==n||b+c==n)
        count=2;
    else if(n==a||n==b||n==c)
        count=1;
    else count=n;
    cout<<count;
}
