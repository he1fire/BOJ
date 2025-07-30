#include <iostream>
using namespace std;
int arr[105];
int f(int x){
    int y=0;
    while (x){
        y*=10;
        y+=x%10;
        x/=10;
    }
    return y;
}
int main() {
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        a+=f(a);
        a==f(a) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}