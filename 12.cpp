#include <iostream>
#include <vector>
using namespace std;

// 約数の列挙O(√n)
vector<int> divisor(int n) {
	vector<int> res;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			res.emplace_back(i);
			if (i != n / i) res.emplace_back(n / i);
		}
	}
	return res;
}

int main(){
	long long n=0,tmp,kosuu;
	for(int i=1;;i++){
		n+=i;
		if(divisor(n).size()>500){
			cout<< n << endl;
			break;
		}
	}
}