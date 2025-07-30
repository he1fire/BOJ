#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[5];
int main(){
    for (int i=0;i<5;i++)
        cin >> arr[i];
    for (int i=1;1;i++){
        int cnt=0;
        for (int j=0;j<5;j++){
            if (i%arr[j]==0)
                cnt++;
        }
        if (cnt>=3){
            cout << i;
            break;
        }
    }
    return 0;
}