#include <stdio.h>
int main () {
    char x[101];
    for (int i=0;i<100; ++i){
        if (NULL == fgets(x,sizeof(x),stdin))
            break;
        
        printf("%s",x);
    }
    
    return 0;
}