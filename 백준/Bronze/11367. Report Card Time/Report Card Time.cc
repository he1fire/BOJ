#include <iostream>
#include <string>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        string a;
        int b;
        cin >> a >> b;
        cout << a << " ";
        if (b<60)
            cout << "F\n";
        else if (b<67)
            cout << "D\n";
        else if (b<70)
            cout << "D+\n";
        else if (b<77)
            cout << "C\n";
        else if (b<80)
            cout << "C+\n";
        else if (b<87)
            cout << "B\n";
        else if (b<90)
            cout << "B+\n";
        else if (b<97)
            cout << "A\n";
        else
            cout << "A+\n";
    }
    return 0;
}