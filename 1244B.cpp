
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
int N;
cin>>N;
 
while(N--)
{
int n;
cin>>n;
char A[n];
cin>>A;
int key=0;
for(int i=0;i<=n/2;i++)
{
if(A[i]=='1'||A[n-i-1]=='1')
{
cout<<(2*max(i+1,n-i))<<endl;
key=1;
break;
}
}
if(key==0)
cout<<n<<endl;
}
 
return 0;
}