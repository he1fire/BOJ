#include <iostream>
using namespace std;
int N, M;
int arr[1030], ans[1030];
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=2;i<=1030;i++)
        arr[i]=i/2;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        while (a){
        	ans[a]++;
        	a=arr[a];
        }
        while (b){
        	ans[b]++;
        	b=arr[b];
        }
        for (int j=1024;j>0;j--){
        	if (ans[j]==2){
        		cout << j*10 << "\n";
        		break;
        	}
        }
        fill(&ans[0],&ans[1029],0);
    }
    return 0;
}