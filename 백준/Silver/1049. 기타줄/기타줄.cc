#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, M, arr[7]={0};
    fill(&arr[0],&arr[7],1001);
    arr[0]=0;
	cin >> N >> M;
	for (int i=0;i<M;i++){
	    int a, b;
	    cin >> a >> b;
        arr[1]=min({arr[1],a,b});
        arr[2]=min({arr[2],a,b*2});
        arr[3]=min({arr[3],a,b*3});
        arr[4]=min({arr[4],a,b*4});
        arr[5]=min({arr[5],a,b*5});
        arr[6]=min({arr[6],a,b*6});
	}
    cout << (N/6)*arr[6]+arr[N%6];
    return 0;
}