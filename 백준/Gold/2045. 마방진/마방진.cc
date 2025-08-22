#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[10], ans;
ll dir[8][3]={{1,2,3},{4,5,6},{7,8,9},{1,4,7},{2,5,8},{3,6,9},{1,5,9},{3,5,7}};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=1;i<=9;i++)
        cin >> arr[i];
    for (int i=0;i<8;i++){
        ll a=arr[dir[i][0]], b=arr[dir[i][1]], c=arr[dir[i][2]];
        if (a && b && c)
            ans=a+b+c;
    }
    if (!ans){
        for (int i=0;i<8;i++){
            ll a=arr[dir[i][0]], b=arr[dir[i][1]], c=arr[dir[i][2]];
            if (a==0 && b && c)
                ans=(b+c)/2*3;
            else if (a && b==0 && c)
                ans=(a+c)/2*3;
            else if (a && b && c==0)
                ans=(a+b)/2*3;
        }
    }
    while (1){
        ll cnt=0;
        for (int i=1;i<=9;i++)
            cnt+=(arr[i]!=0);
        if (cnt==9)
            break;
        for (int i=0;i<8;i++){
            ll a=arr[dir[i][0]], b=arr[dir[i][1]], c=arr[dir[i][2]];
            if (a==0 && b && c)
                arr[dir[i][0]]=ans-(b+c);
            else if (a && b==0 && c)
                arr[dir[i][1]]=ans-(a+c);
            else if (a && b && c==0)
                arr[dir[i][2]]=ans-(a+b);
        }
    }
    for (int i=1;i<=9;i++){
        cout << arr[i] << " ";
        if (i%3==0)
            cout << "\n";
    }
    return 0;
}