#include <stdio.h>
#include <iostream>
using namespace std;
int main () {
  int ax, ay, bx, by, x[100][100], y[100][100], z[2][4];
  cin >> ax >> ay;
	for (int i=0;i<ax;i++){
		for (int j=0;j<ay;j++){
			scanf("%d", &x[i][j]);
		}
	}
    cin >> bx >> by;
	for (int i=0;i<bx;i++){
		for (int j=0;j<by;j++){
			scanf("%d", &y[i][j]);
		}
	}
	for (int i=0;i<ax;i++){
		for (int j=0;j<by;j++){
			int cnt=0;
			for (int a=0;a<ay;a++){
				cnt+=x[i][a]*y[a][j];
			}
			z[i][j]=cnt;
			printf("%d ", z[i][j]);
		}
		printf("\n");
	}
	return 0;
}