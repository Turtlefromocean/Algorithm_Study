//
// Created by 신지영 on 2019/11/27.
//

#include <cstdio>
#include<vector>
#include<algorithm>

using namespace std;

bool getResult(vector<int>& A, int sum, int cnt, int total){
    if(cnt == 0){
        if((total-2*sum) % 11 == 0){
            return true;
        }else{
            return false;
        }
    }
    if(cnt < 0){return false;}
    for(int i=0;i<9;i++){
        if(A[i] > 0){
            A[i]--;
            if(getResult(A, sum+(i+1), cnt-1, total)){
                return true;
            }
            A[i]++;
        }
    }
    return false;
}

int main(){
    int testcase;
    scanf("%d", &testcase);

    for(int t=1;t<=testcase;t++){
        printf("Case #%d: ", t);
        vector<int> A(9);
        int sum=0;
        int cnt=0;
        for(int i=0;i<9;i++){
            int a=0;
            scanf("%d", &a);

            if(a % 2 == 0){
                A[i] = min(a, 10);
            }else{
                A[i] = min(a, 11);
            }

            sum += (i+1)*A[i];
            cnt += A[i];
        }

        if(getResult(A, 0,cnt/2, sum)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }
    return 0;
}
