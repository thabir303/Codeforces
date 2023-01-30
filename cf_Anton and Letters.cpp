#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<char>e;
    int i,count=0;
    string s,s1;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        e.insert(s[i]);

    }
    /*for(i=0;i<s.size();i++)
    {
        s1.insert(e[i]);

    }*/

    for(i=0;i<s.size();i++)
    {
        if(s[i] == ',')
            count++;

    }
    if(count>=1)
        cout<<e.size()-1-2;
    else if(e.size()>2)
        cout<<e.size()-2;
    else if(e.size()<=2)
        cout<<"0";
    cout<<e.size()<<count;





    /*if(e.size()>2)
      {
        cout<<e.size()-2;
      }
    else if (e.size()<=2) cout<<"0";
    cout<<e.size();*/
}
