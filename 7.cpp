#include<iostream>
using namespace std;
/* 素数判定*/
int isPrime(int x) {
	int i;
	if ( x < 2 ) return 0;
	else if ( x == 2 ) return 1; /* 2 は素数*/
	if ( x % 2 == 0 ) return 0; /* 偶数は素数ではない*/
	for ( i = 3; i*i <= x; i+=2 ) { /* i が x の平方根以下の間*/
	if ( x % i == 0 ) return 0;
	}
	return 1;
}

int main() {
	int cnt=0;
	for(long long i=1;cnt <10001;i++){
		if(isPrime(i)) cnt++;
		if(cnt==10001) cout << i << endl;
	}
}