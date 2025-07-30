#include <iostream>
using namespace std;
int main () {
    int x, y, N=0;
    int month[11]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    cin >> x >> y;
    for (int i=0;i<x-1;i++)
    N+=month[i];
    N+=y-1;
    cout << week[N%7];
    return 0;
    }