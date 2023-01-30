#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[1010];
    gets(ch);
    //cin>>ch;
    set<char>s;
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]>=97&& ch[i]<=122)
          {
              s.insert(ch[i]);
          }
    }
    cout<<s.size();

}
