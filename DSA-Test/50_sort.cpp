// Sort the sorted array (check)

#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<int> ans;
	
	ans.push_back(-2);
	ans.push_back(0);
	ans.push_back(1);
	ans.push_back(1);
	ans.push_back(2);
	for(int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	sort(ans.begin(), ans.end());
	for(int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	
	
}
