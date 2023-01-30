#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,a; cin>>n>>k;
    if(n%2==0)  a=n/2;
    else  a=n/2+1;
    if(k<=a)  cout<<2*k-1;
    else  cout<<2*(k-a);
}
