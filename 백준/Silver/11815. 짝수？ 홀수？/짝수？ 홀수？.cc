#include <iostream>
using namespace std;
#define ll long long
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        ll x, lo=0, hi=1000000000;
        cin >> x;
        for (int i=0;i<100;i++){
            ll mid=(hi+lo)/2;
            if (mid*mid>=x)
                hi=mid;
            else
                lo=mid;
        }
        if (hi*hi==x)
            cout << "1" << " ";
        else
            cout << "0" << " ";
    }
    return 0;
}