#include <iostream>
#include <string>
using namespace std;
int main() {
    string x, y;
    int a=0, b=0;
    cin >> x >> y;
    for (int i=0;i<x.size();i++){
        int cnt=0;
        for (int j=0;j<y.size();j++){
            if (x[i]==y[j]){
                a=i;
                b=j;
                cnt=1;
                break;
            }
        }
        if (cnt==1)
            break;
    }
     for (int i=0;i<y.size();i++){
        for (int j=0;j<x.size();j++){
            if (i==b)
                cout << x[j];
            else if (j==a)
                cout << y[i];
            else
                cout << ".";
        }
         cout << "\n";
     }
	return 0;
}