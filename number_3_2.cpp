#include<iostream>
#include<string>
using namespace std;

int main() {
	string input;
	
	while (getline(cin, input)) {
		while (input.size() > 8) {
			cout << input.substr(0, 8) << endl; // 从位置0开始，截取8个数字
			input = input.substr(8, input.size() - 8); // 将剩余的数组重新放入到字符串中
		}
		int len = input.size(); // 获取剩下字符串个数
		if (len == 8) {
			cout << input << endl;
		}
		else {
			for (int i = len; i < 8; i++) {
				input += '0';
			}
			cout << input << endl;
		}
	}
	return 0;
}