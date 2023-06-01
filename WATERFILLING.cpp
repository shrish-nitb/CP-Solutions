#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int b1, b2, b3;
	    cin>>b1>>b2>>b3;
	    int sum = b1 + b2 + b3;
	    if(sum<2){
	        cout<<"Water filling time"<<endl;;
	    } else {
	        cout<<"Not now"<<endl;
	    }
	}
	return 0;
}
