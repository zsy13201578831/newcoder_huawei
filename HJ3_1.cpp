#include<iostream>
using namespace std;

// ��������Ľӿ�
int RankedArray(int n) {
	int random_num; // ���������
	// ��ʼ��һ�����飬���ڱ�ʾ����������е�Ԫ�أ�ĳ��0~1000֮���������������������
	int a[1001] = { 0 };
	// ��������n���������
	while (n--) {
		cin >> random_num;
		// ������±�������������������±��Ӧ��Ԫ��Ϊ1��ʾ�������������
		a[random_num] = 1;
	}
	// ����С�����˳�����������������ϣ����飩���������ĵ��������
	for (int i = 0; i < 1001; i++) {
		if (a[i] == 1) {
			cout << i << endl;
		}
	}
	
	return 0;
}

// ������
int main() {
	int n; // ����������ĸ���
	while (cin >> n) {
		if (cin.get() == 'over') break;
		RankedArray(n); // ������������Ľӿ�
	}
	return 0;
}