#include <iostream>
#include <vector>
using namespace std;
int main(){
	long long tmp,count;
	pair<long long,long long> ans;
	ans=make_pair(0,0);

	for(int i=2;i<1000000;i++){
		tmp=i;count=0;
		while(tmp!=1){
			if(tmp%2==1){
				tmp=tmp*3+1;
			}else{
				tmp/=2;
			}
			count++;
		}
		if(count>ans.first){
			ans.first=count;
			ans.second=i;
		}
	}
	cout << ans.second << endl;
}