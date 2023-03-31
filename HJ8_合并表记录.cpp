#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    multimap<int, int> multi_map;
    map<int, int> myMap;
    int key;
    int value;
    while (cin >> key >> value) {
        multi_map.insert(make_pair(key, value));
    }
    for (auto it = multi_map.begin(); it != multi_map.end();) {
        auto range = multi_map.equal_range(it->first);
        int value_mul = 0;
        for (auto i = range.first; i != range.second; ++i) {
            value_mul += i->second;
        }
        myMap.insert({ it->first, value_mul });
        it = range.second;
    }

    for (auto it = myMap.begin(); it != myMap.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")