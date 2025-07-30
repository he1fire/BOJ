#include <stdio.h>
int main()
{
    int n, sup, tot;
    char arr[1005] = {0};
    scanf("%d", &n);
    while (n--)
    {
        tot = 0;
        sup = 0;
        getchar();
        scanf("%[^\n]s", arr);
        
        for (int i = 0; arr[i] != 0; i++)
        {
            if ('0' <= arr[i] && arr[i] <= '9')
            {    
                sup *= 10;
                sup += arr[i] - '0';
            }
            else
            {
                tot += sup;
                sup = 0;
            }
        }
        tot += sup;
        printf("%d\n", tot);
    }

    return 0;
}
