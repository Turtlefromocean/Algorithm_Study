//
// Created by 신지영 on 2019/11/25.
//

#include <iostream>

//#define INT_MAX 2147483647 --> 이미 선언되어 있음

using namespace std;

int reverse(int x) {
    long long int temp=0;
    while(x!=0)
    {
        temp = temp*10 + x%10;
        x = x/10;
        if(abs(temp) > INT_MAX)
            return 0;
    }
    return temp;
}

int main()  {
    int x;
    std::cin>>x;

    int answer = reverse(x);

    std::cout<<answer<<endl;

    return 0;

}