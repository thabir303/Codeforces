#include<bits/stdc++.h>
using namespace std;

int main()
{
    string g;
    cin>>g;
    int i,count=0;
    //i=g.size();
    sort(g.begin(),g.end());
    for(i=0;i<g.size();i++)
    {
        if(g[i]==g[i+1])
            count++;

    }
    i=(g.size()-count);
    if(i%2==0)
        cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";


}

