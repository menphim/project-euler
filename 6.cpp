#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long sum=0, square=0;
	sum= (101*100/2)*(101*100/2);
	for(int i=1;i<101;i++) square+=i*i;
	cout << sum-square <<endl;
	return 0;
}