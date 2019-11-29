//
// Created by 신지영 on 2019/11/29.
// 299. Bulls and Cows
//
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        // 0부터 9까지 갯수 세기
        // bull: 위치 같은 갯수
        // cow: 공통된 갯수 - 위치 같은 갯수

        int bull = 0;
        int arr_secret[10] = {0,};
        int arr_guess[10] = {0,};

        for(int i = 0; i < secret.size(); i++)  {
            if(secret[i] == guess[i]) bull++;
            arr_secret[secret[i]-'0']++;
            arr_guess[guess[i]-'0']++;
        }

        int cow = 0;
        for(int i = 0; i <= 9; i++) {
            if(arr_secret[i] >= 0 && arr_guess[i] >= 0) {
                cow += min(arr_secret[i], arr_guess[i]);
            }
        }

        cow -= bull;

        string answer = to_string(bull) + "A" + to_string(cow) + "B";

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

int main() {
    string line;
    while (getline(cin, line)) {
        string secret = stringToString(line);
        getline(cin, line);
        string guess = stringToString(line);

        string ret = Solution().getHint(secret, guess);

        string out = (ret);
        cout << out << endl;
    }
    return 0;
}