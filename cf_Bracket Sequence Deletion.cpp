#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>>t;
    while(t--)
    {
    int n;
    string s;
    cin>>n>>s;

    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            if(i+1<n)
            {
                i++;
                a++;
            }
            else
            {
                b++;
                break;
            }
        }
        else
        {
            char ch=s[i];
            int j=i+1;
            if(j==n)
            {
                b++;
                break;
            }
             while(j<n&&s[j]!=ch)
                j++;
             if(j==n&&s[j-1]!=ch)
             {
                 b=b+(j-i);
                 break;
             }
             else {

                a++;
                i=j;
             }

           }
       }
       cout<<a<<" "<<b<<endl;
    }
}

