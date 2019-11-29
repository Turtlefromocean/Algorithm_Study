//
// Created by 신지영 on 2019/11/29.
// 백준 10845 큐
//

#include <iostream>
#include <queue>

using namespace std;

int main()  {
    int n;
    cin>> n;
    queue<int> queue;

    for(int i = 0;i < n;i++)    {
        string s;
        cin>>s;
        if(s == "push")   {
            int num;
            cin>>num;
            queue.push(num);
        }
        else if(s == "front")   {
            if(queue.empty()) cout << -1 << '\n';
            else cout << queue.front() << '\n';
        }
        else if(s == "back")    {
            if(queue.empty()) cout << -1 << '\n';
            else cout << queue.back() << '\n';
        }
        else if(s == "size"){
            cout << queue.size() << '\n';
        }
        else if(s == "empty") {
            if (queue.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(s == "pop") {
            if(queue.empty()) cout << -1 << '\n';
            else {
                cout << queue.front() << '\n';
                queue.pop();
            }
        }
    }
    return 0;
}