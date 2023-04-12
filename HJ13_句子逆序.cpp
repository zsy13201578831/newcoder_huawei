//#include <iostream>
//#include <string>
//#include <stack>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    string s;
//    while (getline(cin, s))
//    {
//        vector<string> words;
//        string word;
//        for (auto c : s)
//        {
//            if (c == ' ')
//            {
//                words.push_back(word);
//                word = "";
//            }
//            else
//            {
//                word += c;
//            }
//        }
//        words.push_back(word);
//        reverse(words.begin(), words.end());
//        for (int i = 0; i < words.size(); i++)
//        {
//            if (i != 0)
//            {
//                cout << " ";
//            }
//            cout << words[i];
//        }
//        cout << endl;
//    }
//    return 0;
//}