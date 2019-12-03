//
// Created by 신지영 on 2019/12/04.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()  {
    int n;
    vector<int> number;
    cin >> n;
    for(int i = 0; i < n; i++)  {
        int input;
        cin >> input;
        number.push_back(input);
    }

    sort(number.begin(), number.end());

    for(auto u : number)  {
        cout << u << '\n';
    }

    return 0;
}