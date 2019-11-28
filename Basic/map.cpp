//
// Created by 신지영 on 2019/11/28.
//

#include <iostream>
#include <map>

using namespace std;

int main()  {
    map<string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;

    for (auto x : m)    {
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}