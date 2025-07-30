#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, x, y, mn=1e9+7;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            ll a;
            cin >> a;
            if ((i+j)%2 && a<mn){
                mn=a;
                x=i, y=j;
            }
        }
    }
    if (N%2){
        for (int i=0;i<N;i++){
            for (int j=0;j<M-1;j++){
                if (i%2)
                    cout << "L";
                else
                    cout << "R";
            }
            if (i!=N-1)
                cout << "D";
        }
    }
    else if (M%2){
        for (int i=0;i<M;i++){
            for (int j=0;j<N-1;j++){
                if (i%2)
                    cout << "U";
                else
                    cout << "D";
            }
            if (i!=M-1)
                cout << "R";
        }
    }
    else{
        for (int i=0;i<(x/2)*2;i++){
            for (int j=0;j<M-1;j++){
                if (i%2)
                    cout << "L";
                else
                    cout << "R";
            }
            cout << "D";
        }
        ll dx=(x/2)*2, dy=0;
        while (1){
            if (dx==(x/2)*2+1 && dy==M-1)
                break;
            if (dx==(x/2)*2 && (dx+1!=x || dy!=y)){
                cout << "D";
                dx++;
            }
            if (dy<M-1 && (dx!=x || dy!=y)){
                cout << "R";
                dy++;
            }
            if (dx==(x/2)*2+1 && dy==M-1)
                break;
            if (dx==(x/2)*2+1 && (dx-1!=x || dy!=y)){
                cout << "U";
                dx--;
                if (dy<M-1 && (dx!=x || dy!=y)){
                    cout << "R";
                    dy++;
                }
            }
        }
        for (int i=(x/2+1)*2;i<N;i++){
            cout << "D";
            for (int j=0;j<M-1;j++){
                if (i%2)
                    cout << "R";
                else
                    cout << "L";
            }
        }
    }
    return 0;
}