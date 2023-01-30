#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,m;
    cin>>a>>b>>c;
    int ab[8];
    ab[0]=a+b+c;
    ab[1]=a+b*c;
    ab[2]=a*b+c;
    ab[3]=(a+b)*c;
    ab[4]=a+(b*c);
    ab[5]=a*(b+c);
    ab[6]=a*b*c;
    ab[7]=(a*b)+c;
    m=*max_element(ab,ab+8);
    cout<<m;

}
