//
// Created by 신지영 on 2019/11/29.
// 2개의 데이터를 저장할 수 있는 변수 / 비교 연산시 1순위 first 2순위 second로 판별
//

#include <iostream>
#include <utility>
using namespace std;
int main(){
    //int, int 자료형을 저장하는 변수 선언
    pair<int, int> p;

    //(4, 5)를 p에 저장
    p = make_pair(4, 5);

    //c++11부터 가능
    p = {4, 5};
    return 0;
}