#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    float sum=0.000000000000;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int p;
        scanf("%d",&p);
        sum+=p;

    }
    printf("%f",sum/n);



}
