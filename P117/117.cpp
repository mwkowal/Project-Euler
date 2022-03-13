#include <bits/stdc++.h>

using namespace std;

const long long B= 1000000007;
const long long C= 1000000000001; //12
vector<long long> result{1,1,2,4};

void counting(long long n){
	long long a=1, b=1,c=2,d=4,e;
	for( long long i=4; i<=n; i++){
		e=d;
		d=(a+b+c+d);
		a=b; b=c; c=e; 
		// result.push_back((result[i-1]%B+result[i-2]%B+result[i-3]%B+result[i-4]%B)%B);
		// if (i % 10000000 == 0) // 7
		// 	cout<<i<<" "<<result[i]<<"\n";
	}
	cout<<d<<"\n";
		
}

int main(){
//	for(auto a : result)
//
//		cout<<a<<" ";
	int q; long long n;
	cin >> q;
	while(q--){
		cin>>n;
		counting(n);
		// cout<<result[n]<<"\n";
	}
}

