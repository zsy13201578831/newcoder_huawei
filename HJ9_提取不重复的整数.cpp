#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int result = 0;
    unordered_map<int, int> myUmap;
    vector<int> myVector;
    int num;
    cin >> num;
    int tmp2 = num % 10;
    while (num != 0) {
        if (myUmap.find(tmp2) == myUmap.end()) {
            myVector.push_back(tmp2);
            ++myUmap[tmp2];
        }
        num = num / 10;
        tmp2 = num % 10;
    }

    for (int i = 0; i < myVector.size(); i++) {
        result = result * 10 + myVector[i];
    }
    cout << result << endl;
    return 0;
}