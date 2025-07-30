#include <iostream>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll cnt=0;
    int a, b, c, N;
    cin >> a >> b >> c >> N;
    cnt+=a*3600+b*60+c;
    for (int i=0;i<N;i++){
        int x;
        cin >> x;
        if (x==1){
            int y;
            cin >> y;
            cnt+=y;
        }
        else if (x==2){
            int y;
            cin >> y;
            cnt-=y;
        }
        else
            cout << cnt/3600 << " " << (cnt%3600)/60 << " " << cnt%60 << "\n";
        while (cnt>=3600*24)
            cnt-=3600*24;
        while (cnt<0)
            cnt+=3600*24;
    }
    
    return 0;
}