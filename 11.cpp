#include <iostream>
using namespace std;

int main(){
	long long n[20][20];
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			cin>>n[i][j];
		}
	}
	long long max=0,sum=0;
	for(int i=0;i<20;i++){
		for(int j=0;j<17;j++){
			sum=1;
			for(int k=0;k<4;k++){
				sum*=n[i][j+k];
			}
			if(sum>max) max=sum;
		}
	}
	for(int i=0;i<17;i++){
		for(int j=0;j<20;j++){
			sum=1;
			for(int k=0;k<4;k++){
				sum*=n[i+k][j];
			}
			if(sum>max) max=sum;
		}
	}
	for(int i=0;i<17;i++){
		for(int j=0;j<17;j++){
			sum=1;
			for(int k=0;k<4;k++){
				sum*=n[i+k][j+k];
			}
			if(sum>max) max=sum;
		}
	}
	for(int i=3;i<20;i++){
		for(int j=0;j<17;j++){
			sum=1;
			for(int k=0;k<4;k++){
				sum*=n[i-k][j+k];
			}
			if(sum>max) max=sum;
		}
	}
	cout << max << endl;

}