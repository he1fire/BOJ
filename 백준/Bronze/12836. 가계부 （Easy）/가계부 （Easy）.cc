#include<stdio.h>

int main()
{
	int n, p, Q, a, b[10001] = { 0, }, c[10001] = { 0, }, q;
    long long x;
	scanf("%d%d", &n, &Q);
	for (int i = 0; i < Q; i++)
	{
		x = 0;
		scanf("%d%d%d", &a, &p, &q);
		if (a == 1)
		{
            c[i] = p;
			b[i] = q;
		}
		else if (a == 2)
		{
			for (int j = 0; j < i; j++)
			{
				if (c[j] >= p && c[j] <= q)
				{
					x += b[j];
				}
			}
			printf("%lld\n", x);
		}
	}
	return 0;
}