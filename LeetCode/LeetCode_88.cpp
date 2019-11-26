//
// Created by 신지영 on 2019/11/26.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx_1 = 0;
        int idx_2 = 0;
        vector<int> answer;
        while(idx_1 < m && idx_2 < n)   {
            if(nums1[idx_1] <= nums2[idx_2])    {
                answer.push_back(nums1[idx_1]);
                idx_1++;
            }
            else    {
                answer.push_back(nums2[idx_2]);
                idx_2++;
            }
        }
        if(idx_1 < m)   {
            for(int i=idx_1;i<m;i++)    {
                answer.push_back(nums1[i]);
            }
        }
        else if(idx_2 < n)   {
            for(int i=idx_2;i<n;i++)    {
                answer.push_back(nums2[i]);
            }
        }
        nums1.clear();
        nums1.assign(answer.begin(), answer.end() );

    }
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

int stringToInteger(string input) {
    return stoi(input);
}

string integerVectorToString(vector<int> list, int length = -1) {
    if (length == -1) {
        length = list.size();
    }

    if (length == 0) {
        return "[]";
    }

    string result;
    for(int index = 0; index < length; index++) {
        int number = list[index];
        result += to_string(number) + ", ";
    }
    return "[" + result.substr(0, result.length() - 2) + "]";
}

int main() {
    string line;
    while (getline(cin, line)) {
        vector<int> nums1 = stringToIntegerVector(line);
        getline(cin, line);
        int m = stringToInteger(line);
        getline(cin, line);
        vector<int> nums2 = stringToIntegerVector(line);
        getline(cin, line);
        int n = stringToInteger(line);

        Solution().merge(nums1, m, nums2, n);

        string out = integerVectorToString(nums1);
        cout << out << endl;
    }
    return 0;
}