#include <iostream>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		string s="YES";
		for(int i=1;i<n;i++)
			    if(a[i]%a[0]!=0)
				s="NO";
		cout<<s<<endl;
	}
}
