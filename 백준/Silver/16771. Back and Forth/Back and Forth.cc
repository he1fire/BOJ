#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[2005];
int main () {
    vector<int> x, y;
    arr[1000]++;
    int cnt=0;
    for (int i=0;i<10;i++){
        int a;
        cin >> a;
        x.push_back(a);
    }
    for (int i=0;i<10;i++){
        int a;
        cin >> a;
        y.push_back(a);
    }
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            arr[1000+(y[j]-x[i])]++;
        }
    }
     for (int a=0;a<9;a++){
        for (int b=a+1;b<10;b++){
            for (int c=0;c<9;c++){
                for (int d=c+1;d<10;d++){
                    arr[1000+(y[c]+y[d]-x[a]-x[b])]++;
                }
            }
        }
    }
    for (int i=0;i<2000;i++){
        if (arr[i])
            cnt++;
    }
    cout << cnt;
    return 0;
}