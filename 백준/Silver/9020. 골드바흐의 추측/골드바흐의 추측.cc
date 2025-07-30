#include <iostream>
using namespace std;
int x[10001];
void f () {
    x[0]=0;
    x[1]=0;    	
    for (int i=2;i*i<=10000;i++){
        if (x[i]){
            for (int j=i;i*j<=10000;j++)
                x[i*j]=0;
        }
    }
}
int main () {
    fill_n(x, 10000, 1);
    f();
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        int N;
        cin >> N;
        for (int a=N/2;a>0;a--){
            int b=N-a;
            if (x[a] && x[b]){
                cout << a << " " << b <<"\n";
                break;
            }
        }
    }
    return 0;
}