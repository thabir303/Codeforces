#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    for(i=0;i<t;i++){
        int h,m,x,h1=0,m1=0,p=0,eh=0,dh=0,em=0,dm=0;
        char cc;
        cin>>h>>cc>>m>>x;
            for(j=0;h1!=h&&m1!=m;j++){
                h1=h+(x/60);
                m1=m1+(x%60);
                eh=h1%10;dh=h1/10;
                em=m1%10;dm=m1/10;
                if(dh==em&&eh==dm){
                    p++;
                }
            }
            cout<<p<<"\n";
    }

}

