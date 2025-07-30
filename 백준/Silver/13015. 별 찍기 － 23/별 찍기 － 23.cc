#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
void fl(){
    for (int i=0;i<N;i++)
        cout << "*";
}
void et(){
     cout << "*";
    for (int i=0;i<N-2;i++)
        cout << " ";
    cout << "*";
}
void f(ll x){
    if (x==0 || x==2*N-2){
        fl();
        for (int i=0;i<2*(N-x)-3;i++)
            cout << " ";
        fl();
    }
    else if (x<N-1){
        for (int i=0;i<x;i++)
            cout << " ";
        et();
        for (int i=0;i<2*(N-x)-3;i++)
            cout << " ";
        et();
    }
    else{
        for (int i=0;i<x;i++)
            cout << " ";
        et();
        for (int i=0;i<N-2;i++)
            cout << " ";
        cout << "*";
    }
    cout << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<2*N-1;i++){
        if (i<N)
            f(i);
        else
            f(2*N-2-i);
    }
    return 0;
}