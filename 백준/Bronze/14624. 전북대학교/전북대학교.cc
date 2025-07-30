#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    if (N%2==0)
        cout << "I LOVE CBNU";
    else {
        for (int i=0;i<N;i++)
            cout << "*";
        cout << "\n";
        for (int i=0;i<N/2;i++)
            cout << " ";
        cout << "*\n";
        int a=N/2-1, b=1;
        for (int i=0;i<N/2;i++){
            for (int j=0;j<a;j++)
                cout << " ";
            cout << "*";
            for (int j=0;j<b*2-1;j++)
                cout << " ";
            cout << "*";
            cout << "\n";
            a--;
            b++;
        }
    }
    return 0;
}