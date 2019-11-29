//
// Created by 신지영 on 2019/11/29.
// 482. License Key Formatting
//

#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        /**
            string str = "";
            int counter = 0;
            for (int i = S.size()-1; i >= 0; --i) {
                if (S[i] == '-') continue;

                str += string(1,toupper(S[i]));

                if (++counter == K) {
                    str += "-";
                    counter = 0;
                }
            }

            if (str[str.size()-1] == '-') str.erase(str.size()-1);
            reverse(str.begin(),str.end());

            return str;
        */
        vector<char> vec;

        for(int i = 0; i < S.length(); i++) {
            if(S[i] != '-') {
                vec.push_back(S[i]);
            }
        }


        stack<char> stack;
        int cnt = 0;
        bool flag = false;
        for(int i = S.length() - 1; i >= 0; i--)    {
            if(S[i] != '-') {
                if(flag == true) {
                    stack.push('-');
                    flag = false;
                }
                if(S[i] >= 97)   {
                    stack.push(S[i] - 32);
                }
                else stack.push(S[i]);

                cnt++;
                if(cnt == K) {
                    cnt = 0;
                    if(i != 0) flag = true;
                }
            }

        }

        string answer = "";
        while(!stack.empty())   {
            answer += stack.top();
            stack.pop();
        }
        return answer;
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

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        string S = stringToString(line);
        getline(cin, line);
        int K = stringToInteger(line);

        string ret = Solution().licenseKeyFormatting(S, K);

        string out = (ret);
        cout << out << endl;
    }
    return 0;
}

