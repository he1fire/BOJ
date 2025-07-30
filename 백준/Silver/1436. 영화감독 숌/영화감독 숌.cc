#include <iostream>
#include <vector>
using namespace std;
int f(int x) {
    int cnt=0;
    while (x!=0){
        if (x%10==6 && (x/10)%10==6 && (x/100)%10==6)
            cnt++;
        x/=10;
    }
    return cnt;
}
int main () {
    vector<int> v;
    int N, cnt=0, i=0;
    cin >> N;
    while (cnt<10000){
        i++;
        if (f(i)){
            v.push_back(i);
            cnt++;
        }
    }
    cout << v[N-1];
    return 0;
}