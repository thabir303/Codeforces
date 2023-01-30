#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{

    string s,s1,s2;
    cin>>s;
    s1=s;
    s2=s;
    ///s[0]=s[0]+32;
    ///cout<<s[0];
    ll cnt=0;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    if(s==s1)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=s[i]+32;
        }
        cout<<s<<endl;
    }
    else if(s[0]>=65 and s[0]<=90)
        cout<<s<<endl;
    else if(s[0]>=97 and s[0]<=122)
    {
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]>=65 and s[i]<=97)
            {
                s[i]=s[i]+32;
                cnt++;
            }
        }
        //cout<<cnt<<endl;
        if(cnt==s.size()-1)
        {
            s[0]=s[0]-32;
            cout<<s<<endl;
        }
        else cout<<s2<<endl;
    }
    else cout<<s2<<endl;
}
