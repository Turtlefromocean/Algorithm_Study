//
// Created by 신지영 on 2019/11/27.
//
#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;

        while(n>0)  {
            if(n==1)    return true;
            if(n%3 != 0)    return false;
            n/=3;
        }

        return true;
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string line;
    while (getline(cin, line)) {
        int n = stringToInteger(line);

        bool ret = Solution().isPowerOfThree(n);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}