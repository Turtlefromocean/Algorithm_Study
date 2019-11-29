//
// Created by 신지영 on 2019/11/29.
// 큐 자료구조
//

#include <iostream>
#include <queue>

using namespace std;
int main(){
    //int자료형을 저장하는 큐 생성
    queue<int> q;

    //원소(4) 삽입
    q.push(4);

    //맨 앞 원소 팝
    q.pop();

    //맨 앞 원소 값 출력
    cout << q.front() << '\n';

    //큐가 비어있다면 1 아니면 0
    cout << q.empty() << '\n';

    //큐에 저장되어 있는 원소의 수 출력
    cout << q.size() << '\n';

    return 0;
}
