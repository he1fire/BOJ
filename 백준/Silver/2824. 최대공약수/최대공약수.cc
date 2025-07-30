#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ull unsigned long long
int prime[2][32000];
vector<int> spec[2];
void primeCut(int N, int type)
    {
    int div = 2;
    while (N > 1 && div < 32000)
        {
        if (N%div == 0)
            {
            N /= div;
            prime[type][div]++;
            }
        else if (div == 2)
        div++;
        else
        div += 2;
        }
    if (N > 1)
    spec[type].push_back(N);
    }
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, check = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
        {
        int t;
        cin >> t;    
        primeCut(t, 0);
        }
    cin >> M;
    for (int i = 0; i < M; i++)
        {
        int t;
        cin >> t;
        primeCut(t, 1);
        }
    ull res = 1;
    for (int i = 2; i < 32000; i++)
        {
        int cnt = min(prime[0][i], prime[1][i]);
        while (cnt--)
            {
            res *= i;
            if (res >= 1000000000)
                {
                res %= 1000000000;
                check = 1;
                }
            }
        }
    sort(spec[0].begin(), spec[0].end());
    sort(spec[1].begin(), spec[1].end());
    int a = 0, b = 0;
    while (a < spec[0].size() && b < spec[1].size())
        {
        if (spec[0][a] == spec[1][b])
            {
            res *= spec[0][a];
            if (res >= 1000000000)
                {
                res %= 1000000000;
                check = 1;
                }
            a++; b++;
            }
        else if (spec[0][a] < spec[1][b])
        a++;
        else
        b++;
        }
    if (check)
        {
        int tmp = res, len = 0, cmp = 1;
        while (tmp >= cmp)
            {
            len++;
            cmp *= 10;
            }
        for (int i = 0; i < 9 - len; i++)
        cout << '0';
        }
    if (res)
    cout << res % 1000000000;
    return 0;
    }