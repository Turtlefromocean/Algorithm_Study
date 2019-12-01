//
// Created by 신지영 on 2019/12/01.
// 459. Repeated Substring Pattern
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length() == 0) return false;

        string str_1 = "", str_2 = "";

        for(int i = 1;i <= s.length() / 2; i++)  {
            bool flag = true;
            str_1.clear();
            str_1 = s.substr(0,i);

            for(int j = i; j < s.length(); j+=i)    {
                if(s.length() % (i) != 0)     {
                    flag = false;
                    continue;
                }

                str_2.clear();
                str_2 = s.substr(j,i);

                if(str_2 != str_1)  {
                    flag = false;
                    break;
                }

            }
            if(flag == true) return true;
        }

        return false;
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
        string s = stringToString(line);

        bool ret = Solution().repeatedSubstringPattern(s);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}