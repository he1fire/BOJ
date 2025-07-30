#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll x, y;
string ans[10], arr[3]={".###.#.#.#","#.###.####","##.##.##.."};
int main(){
    for (int i=0;i<10;i++)
        ans[i]="..........";
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            int a;
            cin >> a;
            if (a==100)
                x=i,y=j;
        }
    }
    for (int i=0,j=(y+1)%2;i<3;i++,j++)
        ans[(x+i*2)%10]=arr[j%3];
    for (int i=0;i<10;i++)
        cout << ans[i] << "\n";
    return 0;
}