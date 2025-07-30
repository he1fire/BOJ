#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> v1, v2;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    if (N%3==0){
        for (int i=0;i<N;i++){
            if (i%3==0 || i%3==1)
                v1.push_back(i+1);
            else
                v2.push_back(i+1);
        }
    }
    else if (N%3==2){
        v1.push_back(1);
        v2.push_back(2);
        for (int i=2;i<N;i++){
            if (i%3==0 || i%3==2)
                v1.push_back(i+1);
            else
                v2.push_back(i+1);
        }
    }
    else{
        for (int i=1;i<N;i++){
            if (i%3==1 || i%3==2)
                v1.push_back(i+1);
            else
                v2.push_back(i+1);
        }
    }
    cout << v1.size() << "\n";
    for (auto x:v1)
        cout << x << " ";
    cout << "\n" << v2.size() << "\n";
    for (auto x:v2)
        cout << x << " ";
    return 0;
}