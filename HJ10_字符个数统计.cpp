//#include <iostream>
//#include <unordered_map>
//#include <string>
//using namespace std;
//
//int main() {
//    string str;
//    cin >> str; // 因为题目要求输入的是一行没有空格的字符串，所以可以使用cin >> ，而如果所输入的字符串中有前导或者嵌入空格，则需要使用getlint(cin, str)
//    unordered_map<char, int> myUmap;
//    for (auto s : str) {
//        if (0 <= s <= 127) {
//            ++myUmap[s];
//        }
//    }
//    cout << myUmap.size() << endl;
//}
//// 64 位输出请用 printf("%lld")