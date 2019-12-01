//
// Created by 신지영 on 2019/12/01.
// 686. Repeated String Match
//
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int count = 1;
        string str = A;
        while(str.size() <= B.size()+A.size()) // 중요!
        {
            if(str.find(B) != -1)
                return count;
            str += A;
            count++;
        }

        return str.find(B) != -1 ? count: -1; // str.find(B) 가 -1 이 아니라면 count 리턴, 아니면 -1 리턴
    }
};

string stringToString(string input) {
    assert(input.length() >= 2);
    string result;
    for (int i = 1; i < input.length() -1; i++) {
        char currentChar = input[i];
        if (input[i] == '\\') {
            char nextChar = input[i+1];
            switch (nextChar) {
                case '\"': result.push_back('\"'); break;
                case '/' : result.push_back('/'); break;
                case '\\': result.push_back('\\'); break;
                case 'b' : result.push_back('\b'); break;
                case 'f' : result.push_back('\f'); break;
                case 'r' : result.push_back('\r'); break;
                case 'n' : result.push_back('\n'); break;
                case 't' : result.push_back('\t'); break;
                default: break;
            }
            i++;
        } else {
            result.push_back(currentChar);
        }
    }
    return result;
}

int main() {
    string line;
    while (getline(cin, line)) {
        string A = stringToString(line);
        getline(cin, line);
        string B = stringToString(line);

        int ret = Solution().repeatedStringMatch(A, B);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}