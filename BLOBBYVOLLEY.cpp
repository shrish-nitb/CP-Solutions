#include <iostream>
#include <map>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int len;
        string str;
        cin>>len>>str;
        char srv = 'A';
        map<char, int> scr;
        scr['A'] = 0;
        scr['B'] = 0;
        for(int i = 0; i < len; i++){
            if(str[i] == srv){
                scr[srv] += 1;
            } else {
                (srv == 'A') ? srv = 'B' : srv = 'A';
            }
        }
        cout<<scr['A']<<" "<<scr['B']<<endl;
    }
	return 0;
}
