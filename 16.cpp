#include <iostream>
#include <vector>
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main(){
    cpp_int x=1,ans;
    for(int i=0;i<1000;i++){
    	x*=2;
    }
    while(x!=0){
    	ans+=x%10;
    	x/=10;
    }
    cout << ans << endl;
}