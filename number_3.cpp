//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string input;
//    getline(cin, input);
//    int len = input.size();
//    // ��0
//    if (len % 8 != 0) {
//        int count = 8 - len % 8;
//        input.append(count, '0');
//    }
//
//    // ����ʽ���
//    int newLen = input.size();
//    for (int i = 0; i < newLen; i += 8) {
//        cout << input.substr(i, 8) << endl;
//    }
//    return 0;
//}
//// 64 λ������� printf("%lld")