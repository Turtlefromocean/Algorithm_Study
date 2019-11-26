//
// Created by 신지영 on 2019/11/26.
//

/**

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;

        for(int i=1;i<=n;i++)   {
            if(i%3 != 0 && i%5 != 0)    {
                answer.push_back(to_string(i));
            }
            else    {
                if(i%5 != 0)    {
                    answer.push_back("Fizz");
                }

                if(i%3 != 0)   {
                    answer.push_back("Buzz");
                }
                if(i%5 == 0 && i%3 == 0)   {
                    answer.push_back("FizzBuzz");
                }
            }
        }
        return answer;
    }
};

 */