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
string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0) return "";

    string prefix = strs[0];

    for(int i=1;i<strs.size();i++)  {
        int size = compare(prefix.size(), strs[i].size());
        string answer = "";
        for(int j=0;j<size;j++) {
            if(prefix[j] == strs[i][j]) {
                answer = strs[i].substr(0, j+1);
            }
            else {
                break;
            }

            if(prefix.size() == 0) return "";
        }
        prefix = answer;
    }
    return prefix;
}
int main()  {

    vector<string> arrStr = {"flower", "flour", "flut"};
    // vector<string> 입력받는 부분은 생략
    string answer = longestCommonPrefix(arrStr);
    std::cout<<answer<<endl;
    return 0;
}
