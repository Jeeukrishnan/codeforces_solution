#include<bits/stdc++.h>
using namespace std;

main()
{
    int y,w;
    cin>>y>>w;
    int p=7-max(y,w);
    int m=__gcd(p,6);
    cout<<p/m<<"/"<<6/m;
}
 