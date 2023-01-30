#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    string s; cin>>s;
    int a; cin>>a;

    if(s=="front" and a==1)  cout<<"L"<<endl;
    else if(s=="front" and a==2)  cout<<"R"<<endl;
    else if(s=="back" and a==1)  cout<<"R"<<endl;
    else  if(s=="back" and a==2)  cout<<"L"<<endl;
}
