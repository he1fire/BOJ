#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N[10][10], x, y, M=-1;
int main(){
    for (int i=1;i<=9;i++){
        for (int j=1;j<=9;j++){
            cin >> N[i][j];
            if (M<N[i][j]){
                M=N[i][j];
                x=i;
                y=j;
        	}
        }
    }
    cout << M << "\n" << x << " " << y;
    return 0;
}