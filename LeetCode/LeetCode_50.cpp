//
// Created by 신지영 on 2019/12/01.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()  {
    double x, answer;
    int n;
    cin>> x>> n;

    answer = pow(x, n/1.0);
    cout<<answer<<"\n";
    return 0;
}