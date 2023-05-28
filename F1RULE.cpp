#include <iostream>
using namespace std;

int main() {
    float i, t, X, Y;
    i = 0;
    cin >> t;
    while(i < t){
        cin >> X;
        cin >> Y;
        float a = X * 1.07;
        if(Y <= a){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        i = i + 1;
    }
	return 0;
}
