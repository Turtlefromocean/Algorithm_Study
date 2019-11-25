//
// Created by 신지영 on 2019/11/25.
// Palindrome Number
//

#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    bool answer = false;

    if(x < 0)   {
        return answer;
    }
    else    {
        int temp = x;
        long reverse = 0;
        while(temp > 0) {
            if(reverse == 0)    {
                reverse += temp %10;
            }
            else    {
                reverse *= 10;
                if(reverse >= INT_MAX)  {
                    return answer;
                }
                reverse += temp % 10;
            }
            temp /= 10;
        }

        if(reverse == x)    {
            answer = true;
        }
    }

    return answer;
}

int main()  {

    int x;
    std::cin>>x;
    bool getResult = isPalindrome(x);

    std::cout<<getResult<<endl;
    return 0;
}