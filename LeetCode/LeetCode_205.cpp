//
// Created by 신지영 on 2019/11/29.
// 205. Isomorphic Strings
//

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:

    bool isIsomorphic(string s, string t) {

        unordered_map<char,int> um_s, um_t;

        int idx_s = 0, idx_t = 0;
        vector<int> new_s, new_t;

        for(int i=0;i<s.size();i++)   {
            if(um_s.count(s[i])){
                new_s.push_back(um_s[s[i]]);
            }
            else    {
                um_s[s[i]] = idx_s++;
                new_s.push_back(um_s[s[i]]);
            }

            if(um_t.count(t[i])){
                new_t.push_back(um_t[t[i]]);
            }
            else    {
                um_t[t[i]] = idx_t++;
                new_t.push_back(um_t[t[i]]);
            }
        }

        for(int i = 0; i < new_s.size(); i++)   {
            if(new_s[i] != new_t[i]) return false;
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
        string s = stringToString(line);
        getline(cin, line);
        string t = stringToString(line);

        bool ret = Solution().isIsomorphic(s, t);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}