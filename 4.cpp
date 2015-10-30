#include <iostream>
#include <string>
using namespace std;

int main(){
	int k=0;
	int ans=0;
	for(int i=100;i<1000;i++){
		for(int j=i;j<1000;j++){
			string s = to_string(i*j);
			for(k=0;k<s.size();k++){
				if(s[k]!=s[s.size()-k-1]){
					k=0;
					break;
				}
			}
			if(k!=0&&ans<i*j) ans = i*j;
		}
	}
	cout << ans << endl;
	return 0;
}