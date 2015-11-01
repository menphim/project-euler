#include <iostream>
using namespace std;
int main(){
	long long a=1;
	for(int i=0;i<20;i++){
		a*=40-i;
		a/=i+1;
		cout << a << endl;
	}
	cout << a<< endl;
}