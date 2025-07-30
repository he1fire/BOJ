#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cin >> N;
    for (int i=N;i>=0;i--){
        if (i==0) {
            if(N==1)
                    cout << "No more bottles of beer on the wall, no more bottles of beer.\n" << "Go to the store and buy some more, " << N << " bottle of beer on the wall.\n";
            else
                    cout << "No more bottles of beer on the wall, no more bottles of beer.\n" << "Go to the store and buy some more, " << N << " bottles of beer on the wall.\n";
            }
        else if (i==1)
            cout << "1 bottle of beer on the wall, 1 bottle of beer.\nTake one down and pass it around, no more bottles of beer on the wall.\n";
        else if (i==2)
            cout << "2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it around, 1 bottle of beer on the wall.\n";
        else
            cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n" << "Take one down and pass it around, " << i-1 << " bottles of beer on the wall.\n";
        cout << "\n";
    }
    return 0;
}