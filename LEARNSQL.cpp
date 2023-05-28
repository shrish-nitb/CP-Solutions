#include <iostream>
using namespace std;

int main() {
	int Rows = 0;
	int Cols = 0;
	int extRows = 0;
	cin>>Rows>>Cols>>extRows;
	int result = (Rows * Cols) + (Cols * extRows);
	cout<<result;
	return 0;
}
