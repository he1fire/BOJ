#include <iostream>
using namespace std;
int main () {
    int a, ax, b, bx, c, cx;
    cin >> a >> ax >> b >> bx >> c >> cx;
    for (int i=0;i<100;i++){
        if (i%3==0){
            bx+=ax;
            if (bx>b){
                ax=bx-b;
                bx=b;
            }
            else
                ax=0;
        }
        if (i%3==1){
            cx+=bx;
            if (cx>c){
                bx=cx-c;
                cx=c;
            }
            else
                bx=0;
        }
        if (i%3==2){
            ax+=cx;
            if (ax>a){
                cx=ax-a;
                ax=a;
            }
            else
                cx=0;
        }
    }
    cout << ax << "\n" << bx << "\n" << cx;
    return 0;
}