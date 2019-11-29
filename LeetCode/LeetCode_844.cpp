//
// Created by 신지영 on 2019/11/29.
// 844. Backspace String Compare
//
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {

        stack<char> stack_S, stack_T;

        for(int i = 0; i < S.length(); i++) {
            if(S[i] == '#') {
                if(!stack_S.empty())    {
                    stack_S.pop();
                }
            }
            else    {
                stack_S.push(S[i]);
            }
        }

        for(int i = 0; i < T.length(); i++) {
            if(T[i] == '#') {
                if(!stack_T.empty())    {
                    stack_T.pop();
                }
            }
            else    {
                stack_T.push(T[i]);
            }
        }

        if(stack_S.size() != stack_T.size()) return false;

        for(int i = 0; i < stack_S.size(); i++) {
            if(stack_S.top() != stack_T.top()) return false;
            stack_S.pop();
            stack_T.pop();
        }

        return true;
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

string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string line;
    while (getline(cin, line)) {
        string S = stringToString(line);
        getline(cin, line);
        string T = stringToString(line);

        bool ret = Solution().backspaceCompare(S, T);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}