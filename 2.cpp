#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	unsigned long long F[50],ans=0;
 	F[0] = F[1] = 1;
	for ( int i = 2; i <= n; i++ ){
		F[i] = F[i - 1] + F[i - 2];
		if(F[i]>4000000) break;
		else if(F[i]%2==0) ans+=F[i];
	}
	cout << ans << endl;
	return 0;
}