#include<iostream>
using namespace std;


int main() {
	string s;
	while (cin >> s) {
		int ans(0);
		for (int i = 2; i < s.size(); i++) {
			if (isdigit(s[i])) {
				ans = ans * 16 + s[i] - '0';
			}
			else {
				ans = ans * 16 + 10 + s[i] - 'A';
			}
		}
		cout << ans << endl;
	}
	return 0;
}