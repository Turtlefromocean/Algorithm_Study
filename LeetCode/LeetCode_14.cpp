//
// Created by 신지영 on 2019/11/26.
// 14. Longest Common Prefix
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int compare(int x, int y)   {
    if(x <= y)  return x;
    else return y;
}
string longestCommonPrefix(vector<string>& vector) {
    if(vector.size() == 0) return "";

    string prefix = vector[0];

    for(int i=1; i < vector.size(); i++)  {
        int size = compare(prefix.size(), vector[i].size());
        string answer = "";
        for(int j=0;j<size;j++) {
            if(prefix[j] == vector[i][j]) {
                answer = vector[i].substr(0, j + 1);
            }
            else {
                break;
            }

            if(prefix.empty()) return "";
        }
        prefix = answer;
    }
    return prefix;
}
int main()  {

    vector<string> arrStr = {"flower", "flour", "flat"};
    // vector<string> 입력받는 부분은 생략
    string answer = longestCommonPrefix(arrStr);
    std::cout<<answer<<endl;
    return 0;
}
