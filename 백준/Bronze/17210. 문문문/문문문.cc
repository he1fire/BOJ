#include <iostream>
#define ll long long
using namespace std;
int main () {
    ll N, M;
    cin >> N >> M;
    if (N>5)
        cout << "Love is open door";
    else {
        if (M==0){
            for (ll i=1;i<N;i++)
                cout << i%2 << "\n";
        }
        else {
            for (ll i=1;i<N;i++)
                cout << (i+1)%2 << "\n";
        }
    }
    return 0;
}