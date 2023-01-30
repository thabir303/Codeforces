#include<bits/stdc++.h>
using namespace std;

int main()
{
     int count=0,i;
     string str;
     cin>>str;

     for(i=0; i< str.size(); i++)
     {
        if(str[i]==str[i+1])
            count++;
        else count=0;
        if(count==6)
                break;
     }
     if(count>=6)
        cout<<"YES";
     else cout<<"NO";

}
