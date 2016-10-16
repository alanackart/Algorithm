//http://acm.hdu.edu.cn/showproblem.php?pid=2084
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 105
int a[MAXN][MAXN];
int dic[MAXN][MAXN];

int minimum_path(int i, int j, int n)
{
    if(dic[i][j] != -1)
    {
        return dic[i][j];
    }
    if(i == n)
    {
        return dic[i][j] = a[i][j]; //does not have any more child
    }
    return dic[i][j] = a[i][j] + min( minimum_path(i+1, j, n),  minimum_path(i+1, j+1, n) );
    // add the child(left/right), which has the minimum path
}

int main()
{
    int C;
    scanf("%d", &C);
    while(C--)
    {
        int n;
        scanf("%d", &n);
        memset(dic, -1, sizeof(dic));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("%d\n", minimum_path(1, 1, n));
    }
    return 0;
}
