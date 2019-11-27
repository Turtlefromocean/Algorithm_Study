//
// Created by 신지영 on 2019/11/27.
//
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

vector<int> vec;
int main() {
    int t, n, score, x;
    scanf("%d", &t);
    for (int tt = 1; tt <= t; tt++) {
        scanf("%d", &n);
        vec.clear();
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
            vec.push_back(score);
        }
        printf("Case #%d: ", tt);
        for (int v : vec) printf("%d ", v);
        printf("\n");
    }

    return 0;
}