#include<bits/stdc++.h>
using namespace std;
void jeeu()
{
long long j,k;
cin>>j;
long long ar[j];
for(long long t=0;t<j;t++)
{cin>>ar[t];}

cin>>k;
long long a[k];
for(long long p=0;p<k;p++)
{cin>>a[p];}

long long e=0;
long long o=0;
for(long long p=0;p<j;p++)
{if(ar[p]%2==0)
     {e++;}
 else 
     {o++;}
} 
long long e1=0;
long long o1=0;
for(long long y1=0;y1<k;y1++)
{if(a[y1]%2==0)
     {e1++;}
 else 
     {o1++;} } 

     cout<<e1*e+o1*o<<endl;

}

int main()
{ int t;
while(t--)
{   jeeu();}

}
