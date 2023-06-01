#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n, k, l;
	    cin>>n>>k>>l;
	    vector<vector<int>> plst(n, vector<int>(2));
	    int i = 0;
	    while(i<n){
	        cin>>plst[i][0]>>plst[i][1];
	        i++;
	    }
	    int length = -1;
	    vector<int> frnd;
	    for (auto it = plst.begin(); it < plst.end(); it++) {
	        auto data = *it;
	        if(data[1] == l){
	            frnd.push_back(data[0]);
	        }
	    }
	    
	    sort(frnd.begin(), frnd.end());
	    int cnt = 1;
	    for (int i = frnd.size()-1; i >= 0 && frnd.size() >= k && cnt <= k; i--) {
	        length += frnd[i];
	        cnt++;
	    }
	    if(length!=-1){
	        length += 1;
	    }
	    cout<<length<<endl;
	}
	return 0;
}
