#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<string,int>reg;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(reg[s]==0)
            cout<<"OK"<<endl;
        else cout<<s<<reg[s]<<endl;

        reg[s]++;
    }
}
