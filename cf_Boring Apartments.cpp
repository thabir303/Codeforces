#include<bits/stdc++.h>
using namespace std;

int main(){

  int t; cin >> t;
  while(t--)
    {
    string s; cin >> s;
    int n = s.size();
    cout << (s[0]-'1')*10+n*(n+1)/2 << endl;
    }
}
