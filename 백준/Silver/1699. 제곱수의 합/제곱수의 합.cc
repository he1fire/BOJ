#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int arr[100005];
vector<int> v;
queue<int> q;
int main () {
    fill(&arr[0],&arr[100004],-1);
    int N;
    cin >> N;
    for (int i=1;i*i<=100000;i++){
        arr[i*i]=1;
        v.push_back(i*i);
        q.push(i*i);
    }
    while (!q.empty()){
        int x=q.front();
        q.pop();
        for (int i=0;i<v.size();i++){
            int dx=x+v[i];
            if (dx>100000 || arr[dx]!=-1)
                continue;
            arr[dx]=arr[x]+1;
            q.push(dx);
        }
    }
    cout << arr[N];
    return 0;
}