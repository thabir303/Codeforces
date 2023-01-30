#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j=0;
    string s;
    cin>>s;
    string s1="hello";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s1[j])
        {
            j++;
        }
    }
    if(j==5) cout<<"YES";
    else cout<<"NO";
}
