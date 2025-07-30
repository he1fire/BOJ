#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[55], cut[7]={5,15,30,35,45,48,50};
string grade[7]={"A+","A0","B+","B0","C+","C0","F"};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<50;i++)
        cin >> arr[i];
    cin >> N;
    for (int i=0;i<50;i++){
        if (N==arr[i]){
            ll a=0;
            for (int j=0;j<7;j++){
                if (i<cut[j]){
                    a=j;
                    break;
                }
            }
            cout << grade[a];
        }
    }
    return 0;
}