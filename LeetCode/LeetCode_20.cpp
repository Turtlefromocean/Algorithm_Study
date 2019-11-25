//
// Created by 신지영 on 2019/11/26.
//

#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> stack;

    if(s.length() == 0) {
        return true;
    }

    if(s.length() % 2 == 1) {
        return false;
    }

    for(int i=0;i<s.length();i++)   {
        char c = s[i];
        if(c == '}' || c == ')' || c == ']') {
            if(stack.size() == 0) return false;
            if(c == '}' && stack.top() != '{') return false;
            if(c == ')' && stack.top() != '(') return false;
            if(c == ']' && stack.top() != '[') return false;
            stack.pop();
        }
        else    {
            stack.push(c);
        }
    }
    if(stack.size() == 0) return true;
    return false;
}

int main()  {
    string str;
    std::cin>>str;

    bool answer = isValid(str);

    std::cout<<answer<<endl;
    return 0;
}