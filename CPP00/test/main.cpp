#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swap(int &a, int &b) {
	
	int tmp = a;
	a = b;
	b = tmp;
	
}

void	Reverse(vector<int>& v) {
	int start = 0;
	int end = v.size() - 1;
//	int tmp;
	
	for (int i = 0; i <= v.size() / 2; i++) {
		swap(v[start], v[end]);
		start++;
		end--;
	}
}

int main() {
	vector<int> num = {1, 2, 3, 4};
	Reverse(num);
	for (auto i : num) {
		cout << num[i];
	}
	return (0);
}

