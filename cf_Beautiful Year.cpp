#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,a,b,c,d,e,f;
    cin>>y;
    int i=y+1;
    for(;;i++)
    {      //1987
        a=i%10;//a=7
        b=i/10;//y=198
        c=b%10;//b=8
        d=b/10;//y=19
        e=d%10;//c=9
        f=d/10;//d=1
        if(a!=c&&a!=e&&a!=f&&e!=c&&f!=e&&c!=f)
        {
            break;
        }
    }
    cout<<i;
}
