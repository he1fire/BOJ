#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
double x, y;
int main(){
    int N;
    cin >> x >> y >> N;
    for (int i=0;i<N;i++){
        double a, b;
        cin >> a >> b;
        if (x/y>a/b){
            x=a;
            y=b;
        }
    }
    printf("%.3f",(x/y)*1000);
    return 0;
}