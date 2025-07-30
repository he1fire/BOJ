#include <bits/stdc++.h>
using namespace std;
int arr[2][3], ans;
int main(){
    scanf("%d:%d:%d", &arr[0][0], &arr[0][1], &arr[0][2]);
    scanf("%d:%d:%d", &arr[1][0], &arr[1][1], &arr[1][2]);
    for (int i=0;i<2;i++){
        int tmp=0;
        for (int j=0;j<3;j++)
            tmp=tmp*60+arr[i][j];
        if (i)
            ans+=tmp;
        else
            ans-=tmp;
    }
    if (ans<0)
        ans+=24*3600;
    printf("%02d:%02d:%02d", (ans/3600)%24, (ans%3600)/60, (ans%3600)%60);
    return 0;
}