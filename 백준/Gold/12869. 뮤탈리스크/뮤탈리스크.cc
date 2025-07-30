#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int N, arr[3], ans = 987654321;
int dir[6][3] = {{1,3,9},{1,9,3},{3,1,9},{3,9,1},{9,1,3},{9,3,1}};
int visit[61][61][61][20];
struct ABC { 
	int a, b, c, x;
	ABC() {}
	ABC(int a, int b, int c, int x) : a(a), b(b), c(c), x(x) {}
};
void BFS(){
    queue<ABC> q;
	q.push(ABC(arr[0], arr[1], arr[2], 0));
	visit[arr[0]][arr[1]][arr[2]][0] = 1;
	while (!q.empty()) {
		ABC now=q.front();
		q.pop();
		if (now.a==0 && now.b==0 && now.c==0)
            ans=min(ans,now.x);
		for (int i=0;i<6;i++) {
			int a=now.a-dir[i][0];
            int b=now.b-dir[i][1];
            int c=now.c-dir[i][2];
            int x=now.x+1;
			if (a<0)
                a=0;
            if (b<0)
                b=0;
            if (c<0)
                c=0;
			if (visit[a][b][c][x]==0) {
				visit[a][b][c][x]=1;
				q.push(ABC(a, b, c, x));
			}
		}
	}
	cout << ans;
}
int main() {
	cin >> N;
	for (int i=0;i<N;i++)
        cin >> arr[i];
	BFS();
	return 0;
}