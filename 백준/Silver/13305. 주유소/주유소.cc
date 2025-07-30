#include <iostream>
#include <vector>
using namespace std;
int main () {
    long long N, cnt=1234567890, sum=0;
    vector<long long> road, oil;
    cin >> N;
    for (int i=0;i<N-1;i++)
        {
        int a;
        cin >> a;
        road.push_back(a);
        }
    for (int i=0;i<N;i++)
        {
        int b;
        cin >> b;
        oil.push_back(b);
        }
    for (int i=0;i<N-1;i++)
        {
        if (cnt>oil[i])
        cnt=oil[i];
        sum+=cnt*road[i];
        }
    cout << sum;
    return 0;
    }