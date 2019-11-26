//
// Created by 신지영 on 2019/11/26.
// 344. Reversed String
//
/**

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};

*/