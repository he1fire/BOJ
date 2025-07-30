#include <iostream>
#define ll long long
using namespace std;
int main () {
    ll N;
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b*c<a+b*d)
            cout << "do not parallelize\n";
        else if (b*c>a+b*d)
            cout << "parallelize\n";
        else
            cout << "does not matter\n";
    }
    return 0;
}