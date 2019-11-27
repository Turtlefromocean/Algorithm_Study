//
// Created by 신지영 on 2019/11/28.
//

#include <cstdio>
#include <algorithm>

using namespace std;

int main()  {
    int array[8] = {1,3,8,2,9,2,5,6};

    for(int i = 0; i < 8; i++)  {
        for(int j = 0; j < 7 ; j++)   {
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