#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    set<char>s;
    int i,j;
    for(i=0;i<s1.size();i++)
    {
        s.insert(s1[i]);

    }
    j=s.size();

    if(j%2==0)
        cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";





}
