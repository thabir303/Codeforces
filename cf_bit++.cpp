#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   int x=0;
   cin>>n;
   while(n--)
   {
       string str;

       cin>>str;
       if(str=="++X")
        {
            x=++x;

        }

       if(str=="X++")
        {
            x=x+1;


        }
      if(str=="X--")

         {
             x=x-1;

         }
     if(str=="--X")
        {
           x=--x;

        }


   }


cout<<x;
}
