#include <iostream>
#include <queue>
using namespace std;
int arr[100005], dir[4]={1,2,5,7};
queue<int> q;
void BFS() {
    fill(&arr[0],&arr[100004],-1);
    arr[0]=0;
    for (int i=0;i<4;i++){
        arr[dir[i]]=1;
        q.push(dir[i]);
    }
    while (!q.empty()){
        int x=q.front();
        q.pop();
        for (int i=0;i<4;i++){
            int ax=x+dir[i];
            if (ax>100000 || arr[ax]!=-1)
                continue;
            arr[ax]=arr[x]+1;
            q.push(ax);
        }
    }
}
int main () {
    int N;
    cin >> N;
    BFS();
    cout << arr[N];
    return 0;
}