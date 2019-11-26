//
// Created by 신지영 on 2019/11/26.
//

#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x);
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int x = stringToInteger(line);

        int ret = Solution().mySqrt(x);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}