#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
long long int prime[50000000];
vector<ll>primes;

void sieve(ll n){

     for(int i=0;i<n;i++)
     {
         if(prime[i]==0)
         {
             for(int j=i*i;j<n;j+=i)
             {
                 prime[j]=1;
             }
         }
         if(!prime[i]) primes.push_back(i);
     }
     for(auto it:primes)
        cout<<it<<" ";

}

int main()
{
    ll n; cin>>n;
    sieve(n);
}
