//
// Created by 신지영 on 2019/11/26.
//
#include <iostream>

using namespace std;

class Solution {
public:

    int climbStairs(int n) {
        /**F[N] = F[N-1] + F[N-2] */
        int ways = 1;
        int prev1 = 1;
        int prev2 = 1;
        for(int i = 2; i <= n; i++)
        {
            ways = prev1 + prev2;
            prev2 = prev1;
            prev1 = ways;
        }
        return ways;
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int n = stringToInteger(line);

        int ret = Solution().climbStairs(n);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}