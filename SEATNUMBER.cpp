#include <iostream>
using namespace std;

int main() {
	int T, N;
	cin>>T;
	while(T--){
	    cin>>N;
	    if(N<=10){
	        cout<<"Lower Double"<<endl;
	    } else if(N<=15){
	        cout<<"Lower Single"<<endl;   
	    } else if(N<=25){
	        cout<<"Upper Double"<<endl;
	    } else {
	        cout<<"Upper Single"<<endl;
	    }
	}
	return 0;
}
