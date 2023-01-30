#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,x=0;
   cin>>n;
   while(n--)
   {
       string s;
       cin>>s;
       if(s=="Tetrahedron")
          x=x+4;
       else if(s=="Cube")
          x=x+6;
       else if(s=="Octahedron")
         x=x+8;
       else if(s=="Dodecahedron")
          x=x+12;
       else if(s=="Icosahedron")
          x=x+20;

   } cout<<x;

}


