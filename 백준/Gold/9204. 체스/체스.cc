#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{
    char x;
    ll y;
};
ll N;
void f(vector<xy> v){
    cout << v.size()-1 << " ";
    for (auto x:v)
        cout << x.x << " " << x.y << " ";
    cout << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        xy a, b;
        cin >> a.x >> a.y >> b.x >> b.y;
        if ((abs(a.x-b.x)+abs(a.y-b.y))%2)
            cout << "Impossible\n";
        else if (a.x==b.x && a.y==b.y)
            f({a});
        else if (abs(a.x-b.x)==abs(a.y-b.y)){
            f({a,b});
        }
        else{
            xy tmp={'A',1};
            while (1){
                if (abs(a.x-tmp.x)==abs(a.y-tmp.y) && abs(tmp.x-b.x)==abs(tmp.y-b.y))
                    break;
                if (tmp.y!=8)
                    tmp.y++;
                else{
                    tmp.x++;
                    tmp.y=1;
                }
            }
            f({a,tmp,b});
        }
    }
    return 0;
}