#include <iostream>
#include <vector>
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main(){
    cpp_int x=0,y;
	for(int i;i<100;i++){
		cin >> y;
		x+=y;
	}
	cout << x << endl;
}