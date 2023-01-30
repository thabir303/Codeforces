#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n, sum = 0;
        cin>>a>>b>>c>>n;
        int m=max(a,max(b,c));
        sum += (m-a)+(m-b)+(m-c);
        n -= sum;
        if (n%3==0 && n >= 0)
               cout<<"YES"<< endl;
        else cout<<"NO"<<endl;
    }
}
