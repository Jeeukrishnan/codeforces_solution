#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=0,c=0,i,item;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>item;
		a+=item;
	}
    for(i=1;i<=n-1;i++)
	{
		cin>>item;
		b+=item;
	}
	for(i=1;i<=n-2;i++)
	{
		cin>>item;
		c+=item;
	}
	cout<<a-b<<"\n"<<b-c<<endl;
	return 0;
}