#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    int a, b, c;
    string x;
    ABC() {}
    ABC(int a, int b, int c, string x) : a(a), b(b), c(c), x(x) {}
};
bool operator<(ABC a, ABC b){
    if (a.a!=b.a)
        return a.a < b.a;
    else if (a.b!=b.b)
        return a.b < b.b;
    else if (a.c!=b.c)
        return a.c < b.c;
}
vector<ABC> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        string a;
        int b, c, d;
        cin >> a >> b >> c >> d;
        v.push_back(ABC(d,c,b,a));
    }
    sort(v.begin(),v.end());
    cout << v[v.size()-1].x << "\n" << v[0].x;
    return 0;
}