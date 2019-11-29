/*#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int  n,k;
cin>>n>>k;
long long int  x;
cin>>x;
long long t;
long long int  i=0;
vector<long long int >v(n);

while(x!=0)
{   //cout<<"l";
  t=x%10;
   // cout<<t;
      v[i]=t;
       i++;
       x=x/10; }


 if(n==1 && k>=1)
  {cout<<"0";
     return 0;}
 if(n==1 && k==0) 
   {cout<<"n"; 
        return 0; } 

 //reverse(v.begin(),v.end());
 //cout<<"g";
 if(v[0]!='1' & k>0 & 1!=n)
{v[0]='1';k--;}
 /*v[0]=1;
 if(k!=n-1)
{ for(long long int j=1;j<k;j++)
 {  if(v[j]==0)
     { j--; 
        //cout<<j;
       continue; }
   else
    {v[j]=0; }  } }
  
else
{for(long long int j=1;j<=k;j++)
 { //cout<<j<<" ";
   if(v[j]==0)
     { j--; 
       // cout<<j;
       }
  else 
   {v[j]=0;} }
}
  

cout<<endl;*/
/*for(int i=1;i<n & k>0;i++)
{
if(v[i]!='0')
{v[i]='0';k--;} }

for(long long g=0;g<v.size();g++)
{ cout<<v[g];  }
 return 0;  }*/
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
string s;
cin>>n>>k;
cin>>s;
if(n==1 & k>0)
s[0]='0';
else if(s[0]!='1' & k>0 & 1!=n)
{s[0]='1';k--;}
for(int i=1;i<n & k>0;i++)
{
if(s[i]!='0')
{s[i]='0';k--;}
}
cout<<s;
}