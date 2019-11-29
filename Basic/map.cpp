//
// Created by 신지영 on 2019/11/28.
// map 딕셔너리 자료구조 / 원소 삽입과 삭제, 탐색 등의 연산은 O(logn)을 보장
//

#include <iostream>
#include <map>
using namespace std;
int main(){
    //int 자료형을 key로 int 자료형을 데이터로 저장하는 딕셔너리 자료구조 생성
    map<int, int> m;

    //(4, 5)원소 삽입
    m.insert(make_pair(4, 5));

    //또는
    m[5]=6;

    //key와 연관된 원소를 pair<키 자료형, 데이터 자료형> 형태로 리턴함
    cout << m.find(4) -> second << "\n";

    //key와 연관된 원소의 개수를 리턴함
    cout << m.count(4) << "\n";

    //저장된 원소의 수를 리턴함
    cout << m.size() << "\n";

    //해당 주소의 원소 삭제
    m.erase(++m.begin());

    //모든 원소 삭제
    m.clear();

    return 0;
}