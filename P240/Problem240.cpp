#include <bits/stdc++.h>

using namespace std;
long long min_number;
long long n,d,m,s;

void print_vector(vector<long long> a){
    if(a.empty())
        return;
    cout<<a[0];
    for (int i=1; i<a.size(); i++){
        cout<<" "<<a[i];
    }
    cout<<"\n";
}
void sum_crashing (long long sum, vector<long long> numbers,long long max_number){
    //print_vector(numbers);
    if(sum < 0 || numbers.size() > m)
        return ;
    else if (sum == 0)
        print_vector(numbers);
    for(int i = max_number; i >= int(sum/(m - numbers.size())); i--){
        numbers.push_back(i);
        sum_crashing(sum-i,numbers,i);
        numbers.pop_back();
    }

}

int main() { //5 6 3 15
    cin>>n>>d>>m>>s;
    min_number = s/m;
    vector<long long> a;
    sum_crashing(s ,a , d);
    return 0;
}