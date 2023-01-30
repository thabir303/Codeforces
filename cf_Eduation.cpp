#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,e,f;
    cin>>a>>b>>c;
    double d;
    d=b*b-4*a*c;
    if(a==0 and b==0 and c==0) cout<<-1<<endl;
    else if(a==0 and b!=0 and c!=0)
    {
        cout<<1<<endl;
        printf("%.7lf\n",-c/b);

    }
    else if(a==0 and c==0 and b!=0)
    {
        cout<<1<<endl;
        cout<<0.00000<<endl;
    }
    else if(a==0 and b==0 and c!=0)
    {
        cout<<0<<endl;
    }
    else if(d>=0)
    {

        if(d==0)
        {
            cout<<1<<endl;
            cout<<-b/(2*a)<<setprecision(5)<<endl;;
            printf("%.7lf\n",-b/(2*a));

        }
        else if(d>0)
        {

            e=(-b+sqrt(d))/(2*a);
            f=(-b-sqrt(d))/(2*a);
            if(e>f)
            {
                cout<<2<<endl;
                cout<<f<<setprecision(5);
                printf("%.7lf\n",f);
                printf("%.7lf\n",e);
            }
            else if(e<f)
            {
                cout<<2<<endl;
                printf("%.7lf\n",e);
                printf("%.7lf\n",f);
            }
        }
    }
    else cout<<0<<endl;
}
