//
// Created by 신지영 on 2019/11/27.
//
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

vector<int> answer;
int main() {
    int testcase, n, score, x;
    scanf("%d", &testcase);
    for (int t = 1; t <= testcase; t++) {
        scanf("%d", &n);
        answer.clear();
        score = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            pq.push(x);
            while (true) {
                while (!pq.empty() && pq.top() <= score) pq.pop();
                if (pq.size() >= score + 1) score++;
                else break;
            }
            answer.push_back(score);
        }
        printf("Case #%d: ", t);
        for (int v : answer) printf("%d ", v);
        printf("\n");
    }

    return 0;
}

/*
 * 5점짜리 풀이

int main()
{
    int testcase;
    scanf("%d", &testcase);
    for(int t=1;t<=testcase;t++)    {
        int n;
        scanf("%d", &n);
        vector<int> cite;
        vector<int> ans;
        for(int i=0;i<n;i++)    {
            int cnt;
            scanf("%d", &cnt);
            cite.push_back(cnt);
            sort(cite.begin(), cite.end(), greater<int>());  // 이거때문에 TLE 발생 -> 우선순위큐로 해결
            int idx = 0;
            while(idx < cite.size())    {
                if(cite[idx] <= idx) break;
                idx++;
            }
            ans.push_back(idx);
        }
        printf("Case #%d: ", t);
        for(int i=0;i<ans.size();i++)   {
            printf("%d ", ans[i]);
        }
        printf("\n");
    }

    return 0;
}
 */