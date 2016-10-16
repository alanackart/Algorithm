#include<stdio.h>
#include<string.h>
 
#define N 64
int a[N][N], b[N][N], res[N][N];
int main()
{
    int task;
    scanf("%d", &task);
    while(task--)
    {
        int n, i, j, k;
        scanf("%d", &n);
        for(i = 1; i <= n; i++)
            for(j = 1; j <= n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        for(i = 1; i <= n; i++)
            for(j = 1; j <= n; j++)
            {
                scanf("%d",&b[i][j]);
            }
        memset(res, 0, sizeof(res));
        for(k = 1; k <= n; k++) //be cautious about the order of three loops, memorary, operating system
            for(i = 1; i <= n; i++)
                for(j = 1; j <= n; j++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j < n; j++)
                printf("%d ", res[i][j]);
            printf("%d\n", res[i][n]);
        }
    }
    return 0;
}
