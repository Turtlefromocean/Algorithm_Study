// 백준 10828 스택

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin>>n;
    stack<int> stack;

    for(int i=0;i<n;i++)    {
        string s;
        cin>>s;
        if(s == "push") {
            int push_number;
            cin>>push_number;
            stack.push(push_number);
        }
        else if(s == "top")   {
            if(stack.empty())   cout<<-1<<'\n';
            else cout<<stack.top()<<'\n';
        }
        else if(s == "size")    {
            cout<<stack.size()<<'\n';
        }
        else if(s == "empty")   {
            if(stack.empty()) cout<<1<<'\n';
            else cout<<0<<'\n';
        }
        else if(s == "pop") {
            if(stack.empty())   cout<<-1<<'\n';
            else {
                cout<<stack.top()<<'\n';
                stack.pop();
            }
        }
    }
    return 0;
}