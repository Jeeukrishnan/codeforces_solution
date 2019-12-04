#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,sum=0,minOdd = INT_MAX,number;
	cin >> n;
	while(n--){
		cin >> number;
		if(number%2==1 && number < minOdd)
			minOdd = number;	
		sum += number;	
	}
	if(sum%2==1)
		sum -= minOdd;
	cout << sum;	
}