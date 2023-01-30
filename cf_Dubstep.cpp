#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[210];
    int i;
    gets(s);
    for(i=0;s[i];i++)
    {
       if(s[i]=='W'&&s[i+1]=='U'&&s[i]=='B')
         {
           continue;
           printf(" ");
         }
       else printf(" %c ",s[i]);
    }
}
