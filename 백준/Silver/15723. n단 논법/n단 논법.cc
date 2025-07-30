#include <bits/stdc++.h>
#define ll long long
#define INF (1e9)+7
using namespace std;
ll N, M, arr[30][30];
void FloydWarshall(){
    for (int i=0;i<30;i++){
        for (int j=0;j<30;j++){
            if (i!=j && !arr[i][j])
                arr[i][j]=INF;
        }
    }
    for (int k=0;k<30;k++){
        for (int i=0;i<30;i++){
            for (int j=0;j<30;j++){
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        char a, b;
        string is;
        cin >> a >> is >> b;
        arr[a-'a'][b-'a']=1;
    }
    FloydWarshall();
    cin >> M;
    for (int i=0;i<M;i++){
        char a, b;
        string is;
        cin >> a >> is >> b;
        (arr[a-'a'][b-'a']!=INF) ? (cout << "T\n") : (cout << "F\n");
    }
    return 0;
}