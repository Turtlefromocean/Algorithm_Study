//
// Created by 신지영 on 2019/11/25.
// Roman to Integer
//

#include <iostream>

using namespace std;

int getNum(char symbol)   {
    if(symbol == 'I')   {
        return 1;
    }
    if(symbol == 'V')   {
        return 5;
    }
    if(symbol == 'X')   {
        return 10;
    }
    if(symbol == 'L')   {
        return 50;
    }
    if(symbol == 'C')   {
        return 100;
    }
    if(symbol == 'D')   {
        return 500;
    }
    if(symbol == 'M')   {
        return 1000;
    }
    return 0;
}

int main()  {
    string s = "";
    std::cin>>s;
    int answer = 0;
    for(int i=0;i<s.length();i++)   {
        if(i<s.length()-1)  {
            if(s[i] == 'I')   {
                if(s[i+1] == 'V')   {
                    answer += 4;
                    i++;
                }
                else if(s[i+1] == 'X')   {
                    answer += 9;
                    i++;
                }
                else    {
                    answer += getNum(s[i]);
                }
            }
            else if(s[i] == 'X')    {
                if(s[i+1] == 'L')   {
                    answer += 40;
                    i++;
                }
                else if(s[i+1] == 'C')   {
                    answer += 90;
                    i++;
                }
                else    {
                    answer += getNum(s[i]);
                }
            }
            else if(s[i] == 'C')    {
                if(s[i+1] == 'D')   {
                    answer += 400;
                    i++;
                }
                else if(s[i+1] == 'M')   {
                    answer += 900;
                    i++;
                }
                else    {
                    answer += getNum(s[i]);
                }
            }
            else    {
                answer += getNum(s[i]);
            }
        }
        else    {
            answer += getNum(s[i]);
        }
    }
    std::cout<<answer<<endl;

    return 0;
}