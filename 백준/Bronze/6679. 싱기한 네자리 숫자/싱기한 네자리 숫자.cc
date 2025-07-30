#include <iostream>
using namespace std;
int main() {
    for (int i=1000;i<10000;i++){
        int x=i, y=i, z=i;
        int a=0, b=0, c=0;
        while (x>0){
            a+=x%10;
            x/=10;
            }
        while (y>0){
            b+=y%12;
            y/=12;
            }
        while (z>0){
            c+=z%16;
            z/=16;
            }
        if (a==b && b==c)
        cout << i << "\n";
        }
    return 0;
    }