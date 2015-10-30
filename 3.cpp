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
	long long tmp=0;
	long long a=600851475143;
	for (long long i = 2; i <= a/i; i++ ) {
		if(a%i==0){
			cout << i << endl;
			cout << a/i << endl;
			if ( isPrime(i) ){
				if(tmp<i) tmp=i; 
			}
			if(isPrime(a/i)){
				if(tmp>a/i) tmp=a/i;
			}
		}
	}
	cout << tmp << endl;
	return 0;
}