/*#include<bits/stdc++.h>
using namespace std;
void jeeu()
{   
int n,k;
cin>>n>>k;
vector<int>a(n);
for(int i=0;i<n;i++)
{cin>>a[i];}
sort(a.begin(), a.end());
//a.erase(unique(ar.begin(),ar.end()),ar.end());
a.erase( unique( a.begin(), a.end() ), a.end() );
int count=0;
for(int i=n-1;i>=0;i--)
		{
			//if(ar[i-1]==ar[i])
				//continue;
			if((a[i]-(k*count))>0)
				count++;
		}
		cout<<max(1,count)<<endl;
}
int main()
{    int t;
cin>>t;
while(t--)
    {   jeeu();}}*/
    
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	int n,r,count;
	int ar[100003];
	cin>>q;
	while(q--)
	{
		count =0;
		cin>>n>>r;
		for(int i=0;i<n;i++)
			cin>>ar[i];
		sort(ar,ar+n);
		for(int i=n-1;i>=0;i--)
		{
			if(ar[i-1]==ar[i])
				continue;
			if((ar[i]-(r*count))>0)
				count++;
		}
		cout<<max(1,count)<<endl;
	}
}