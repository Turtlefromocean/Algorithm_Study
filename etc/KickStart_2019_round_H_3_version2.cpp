#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
int testcase;
int digit;
vector<int> num;

int cal()   {

    long res = num[0];
    for(int s=1;s<num.size();s++)   {
        if(s%2==1)  {
            res -= num[s];
        }
        else    {
            res += num[s];
        }
    }
    if(res == 0) return 0;
    else return res%11;
}

int main()  {
    scanf("%d", &testcase);

    for(int t=1;t<=testcase;t++)    {
        num.clear();

        for(int i=1;i<=9;i++)   {
            int k;
            scanf("%d", &k);
            int temp;
            if(k % 2 == 0){
                temp = min(k, 10);
            }else{
                temp = min(k, 11);
            }

            for(int j=0;j<temp;j++) {
                num.push_back(i);
            }
        }
        bool flag = false;

        do{
            if(cal()==0) {
                printf("Case #%d: YES\n", t);
                flag = true;
                break;
            }
        }while(next_permutation(num.begin(), num.end()));

        if (flag == false)  {
            printf("Case #%d: NO\n", t);
        }
    }
    return 0;
}