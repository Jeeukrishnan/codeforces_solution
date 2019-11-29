#include<bits/stdc++.h>
using namespace std;
void jeeu()
{
long long j,k;
cin>>j;
long long ar[j];
for(long long t=0;t<n;t++)
{cin>>ar[t];}

cin>>k;
long long a[k];
for(long long p=0;p<k;p++)
{cin>>a[p];}
long long e=0;
long long o=0;

//long long ar[n];
//long long a[k];
//for(long long t=0;t<n;t++)
//{cin>>ar[t];}
for(long long p=0;p<k;p++)
{if(ar[p]%2==0)
     {e++;}
 else 
     {o++;}
      } 

for(long long y=0;y<j;y++)
{if(a[y]%2==0)
     {e++;}
 else 
     {o++;} } 

     long long a=0;
 long long n = 0, h = 0; 
  while (n < j && h < k) h
  { 
    if (a[n] < ar[h]) 
       n++; 
    else if (ar[h] < a[n]) 
       h++; 
    else /* if arr1[i] == arr2[j] */
    { 
       a++; 
       n++; 
       h++; 
    } 
  } 
  //long long n=j+k;
  cout<<e/2+o/2+a<<endl;

}

int main()
{ int t;
while(t--)

{   jeeu();}


}
