//
// Created by 신지영 on 2019/11/28.
// 버블정렬 -> O(n^2)
//

#include <cstdio>
#include <algorithm>

using namespace std;

int main()  {
    int array[8] = {1,3,8,2,9,2,5,6};

    for(int i = 0; i < 8; i++)  {
        for(int j = 0; j < 7 ; j++)   { // 아래 if문에서 j+1 이랑 비교하니까 8-1 - 7
            if(array[j] > array[j+1])   {
                swap(array[j], array[j+1]);
            }
        }
    }

    for(int i = 0; i < 8; i++)  {
        printf("%d ", array[i]);
    }
    return 0;
}