#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<1001;i++){
		for(int j=i+1;j<1001;j++){
			int k=1000-i-j;
			if(i*i+j*j==k*k){
				cout << i*j*k << endl;
				return 0;
			}
		}
	}
	return 0;
}