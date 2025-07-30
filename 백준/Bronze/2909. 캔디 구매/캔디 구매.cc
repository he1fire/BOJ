#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, cnt=1;
int main () {
	cin >> N >> M;
	for (int i=0;i<M;i++)
		cnt*=10;
    if (!M)
        cout << N;
    else
        cout << (cnt/2<=N%cnt ? (N/cnt)*cnt+cnt : (N/cnt)*cnt);
   return 0;
}