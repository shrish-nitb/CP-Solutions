#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int gcdOfArray(std::vector<int> arr, int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
    }
    return result;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    std::vector<int> arr;
	    for (int i = n; i > 0; i -= 2) {
	        arr.push_back(i);
	    }
	    if(gcdOfArray(arr, arr.size())==1){
	        cout<<-1<<endl;
	    } else {
	        for (int j = n; j > 0; j--) {
	            cout<<j<<" ";
	        }
	        cout<<endl;
	    };
	}
	return 0;
}
