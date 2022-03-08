#include <bits/stdc++.h>

using namespace std;

const long long B= 1000000007;
const long long C= 100000001;
vector<long long> result{1,1,2,4};

void counting(){
	for( long long i=4; i<C; i++){
		result.push_back((result[i-1]%B+result[i-2]%B+result[i-3]%B+result[i-4]%B)%B);
	}
		
}

int main(){
//	for(auto a : result)
//
//		cout<<a<<" ";
	counting();
	cout<<result[5]<<"\n";
}

