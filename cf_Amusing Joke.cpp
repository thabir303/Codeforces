#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3,s;
    cin>>s1>>s2>>s3;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    s=s1+s2;
    sort(s.begin(),s.end());
    if(s==s3)
        cout<<"YES";
    else cout<<"NO";

}
