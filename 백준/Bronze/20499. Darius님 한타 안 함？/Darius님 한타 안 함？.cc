#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll K, D, A;
int main(){
    scanf("%d/%d/%d", &K, &D, &A);
    cout << ((D==0 || K+A<D) ? "hasu" : "gosu");
    return 0;
}