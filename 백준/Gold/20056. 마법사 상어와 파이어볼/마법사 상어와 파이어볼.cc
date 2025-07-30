#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    ll R, C, M, S, D, now;// 파이어볼 개수 체크
    ABC() {}
    ABC(ll R, ll C, ll M, ll S, ll D, ll now): R(R), C(C), M(M), S(S), D(D), now(now) {}
};
ll N, M, K, ans, dir[8][2]={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
ABC arr[55][55];
queue<ABC> q;
void f(){
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (arr[i][j].now)
                q.push(arr[i][j]);
            arr[i][j]=ABC(0,0,0,0,0,0);
        }
    }
    while (!q.empty()){
        ABC x=q.front();
        q.pop();
        if (x.M==0)
            continue;
        if (x.now>1){// 합쳐진것 예외처리
            ll chk=x.D;
            x.M/=5;
            x.S/=x.now;
            x.now=1;
            for (int i=0;i<4;i++){
                if (chk==-1)
                    x.D=i*2+1;
                else
                    x.D=i*2;
                q.push(x);
            }
            continue;
        }
        ll dr=(x.R+dir[x.D][0]*x.S)%N, dc=(x.C+dir[x.D][1]*x.S)%N;// 위치 재설정
        while (dr<0)
            dr+=N;
        while (dc<0)
            dc+=N;
        if (arr[dr][dc].now==0)
            arr[dr][dc]=ABC(dr,dc,x.M,x.S,x.D,1);
        else{
            arr[dr][dc].M+=x.M;
            arr[dr][dc].S+=x.S;
            if (arr[dr][dc].D%2!=x.D%2)
                arr[dr][dc].D=-1;
            arr[dr][dc].now++;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<M;i++){
        ll r, c, m, s, d;
        cin >> r >> c >> m >> s >> d;
        arr[r-1][c-1]=ABC(r-1,c-1,m,s,d,1);
    }
    while (K--)
        f();
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (arr[i][j].now==1)
                ans+=arr[i][j].M;
            else
                ans+=arr[i][j].M/5*4;
        }
    }
    cout << ans;
    return 0;
}