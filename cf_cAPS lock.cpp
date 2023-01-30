#include<bits/stdc++.h>
using namespace std;

int main()
{    int count=0;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if((s[0]>=65&&s[0]<=90)&&s[i+1]>=65&&s[i+1]<=90)
             count++;


    }
    if(count>0)
        cout<<s;


}
