#include<iostream>
#include<string>
using namespace std;

int main() {
	string input;
	
	while (getline(cin, input)) {
		while (input.size() > 8) {
			cout << input.substr(0, 8) << endl; // ��λ��0��ʼ����ȡ8������
			input = input.substr(8, input.size() - 8); // ��ʣ����������·��뵽�ַ�����
		}
		int len = input.size(); // ��ȡʣ���ַ�������
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