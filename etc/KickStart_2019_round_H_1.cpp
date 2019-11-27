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