#include <iostream>
#include <vector>
#define ll long long
using namespace std;
ll arr[7500005];
vector<ll> v;
void f(){
    fill(&arr[0],&arr[7500004],1);
    arr[0]=0;
    arr[1]=0;
    for (ll i=2;i<=7500000;i++){
        if (arr[i]){
            for (ll j=i*i;j<=7500000;j+=i)
                arr[j]=0;
        }
    }
}
int main() {
    f();
    int N;
    cin >> N;
    for (ll i=2;i<=7500000;i++){
        if (arr[i])
            v.push_back(i);
    }
    cout << v[N-1];
    return 0;
}