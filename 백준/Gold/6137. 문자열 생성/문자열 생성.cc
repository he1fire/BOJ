#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ptr1, ptr2;
string A, B;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        char a;
        cin >> a;
        A+=a;
    }
    ptr2=N-1;
    while (ptr1<=ptr2){
        ll x=ptr1, y=ptr2;
        while (x<y && A[x]==A[y]){
            x++;
            y--;
        }
        if (A[x]<A[y]){
            B+=A[ptr1];
            ptr1++;
        }
        else{
            B+=A[ptr2];
            ptr2--;
        }
    }
    for (int i=0;i<N;i++){
        if (i!=0 && i%80==0)
            cout << "\n";
        cout << B[i];
    }
    return 0;
}