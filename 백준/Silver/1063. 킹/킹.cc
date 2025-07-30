#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{ll x, y; string s;};
xy K, S;
ll N;
void f(xy *x, ll tmp){
    if (tmp){
        x->x=x->s[0]-'A'+1;
        x->y=x->s[1]-'0';
    }
    else{
        x->s[0]=x->x+'A'-1;
        x->s[1]=x->y+'0';
    }
}
ll smove(string mv){
    ll dx=0, dy=0;
    for (auto i:mv){
        if (i=='L')
            dx--;
        else if (i=='R')
            dx++;
        else if (i=='B')
            dy--;
        else if (i=='T')
            dy++;
    }
    if (1<=S.x+dx && S.x+dx<=8 && 1<=S.y+dy && S.y+dy<=8){
        S.x+=dx;
        S.y+=dy;
        return 1;
    }
    return 0;
}
void kmove(string mv){
    ll dx=0, dy=0;
    for (auto i:mv){
        if (i=='L')
            dx--;
        else if (i=='R')
            dx++;
        else if (i=='B')
            dy--;
        else if (i=='T')
            dy++;
    }
    if (K.x+dx==S.x && K.y+dy==S.y){
        if (smove(mv)){
            K.x+=dx;
            K.y+=dy;
        }
    }
    else if (1<=K.x+dx && K.x+dx<=8 && 1<=K.y+dy && K.y+dy<=8){
        K.x+=dx;
        K.y+=dy;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> K.s >> S.s >> N;
    f(&K, 1);
    f(&S, 1);
    while (N--){
        string s;
        cin >> s;
        kmove(s);
    }
    f(&K, 0);
    f(&S, 0);
    cout << K.s << "\n" << S.s;
    return 0;
}