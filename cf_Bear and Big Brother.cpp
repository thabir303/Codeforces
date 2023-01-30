#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,count=0,i;

    cin>>a;
    cin>>b;
    do{
        a=a*3;
        b=b*2;
        count++;

    }while(!(a>b));
    cout<<count;



}
