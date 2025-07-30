#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        int M;
        cin >> M;
        int a=1;
        for (int j=0;a<=M;j++,a*=2){
            if (M&a)
                cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}