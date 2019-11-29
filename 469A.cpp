#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int k;
cin>>k;
vector<int>x(k);
for(int i=0;i<k;i++)
{cin>>x[i];}
int h;
cin>>h;
vector<int>y(h);
for(int i=0;i<h;i++)
{cin>>y[i];}
//cout<<"P";
vector<int>v;
vector<int>::iterator ip;
//cout<<"y";
 v.insert(v.begin(),x.begin(),x.end());
v.insert(v.end(),y.begin(),y.end());
// 
// // 
// for(auto i : v)
// {cout<<v[i];}
//  sort(x.begin(), x.end()); 
//     sort(y.begin(), y.end()); 
//     cout<<"z";
  
//     // using merge() to merge the initial containers 
//     merge(x.begin(), x.end(), y.begin(), y.end(), v.begin());
//     cout<<"n";
// cout<<endl;

  ip=unique(v.begin(),v.end()); 
  //v.resize(std::distance(v.begin(), ip)); 

int p=v.size();
cout<<p<<endl;

if(p==n)
{cout<<"I become the guy.";}
else
{
cout<<"Oh, my keyboard!";
}


}