#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        set<int>s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        if(n%2==0)
            cout<<s.size()<<endl;
        else cout<<s.size()-1<<endl;
    }

}
