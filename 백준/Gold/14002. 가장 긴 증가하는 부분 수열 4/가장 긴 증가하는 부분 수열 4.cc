#include <iostream>
#include <algorithm>
using namespace std;
int N, arr[1005], visit[1005], back[1005], ans, cnt;
void f (int x){
    if (back[x]!=-1)
        f(back[x]);
    cout << arr[x] << " ";
}
int main () {
    fill(&back[0],&back[1004],-1);
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++){
        for (int j=0;j<i;j++){
            if (arr[j]<arr[i]){
                if (visit[i]<visit[j]+1){
                    visit[i]=visit[j]+1;
                    back[i]=j;
                }
            }
        }
    }
    for (int i=0;i<N;i++){
        if (ans<visit[i]){
            ans=visit[i];
            cnt=i;
        }
    }
    cout << ans+1 << "\n";
    f(cnt);
    return 0;
    }