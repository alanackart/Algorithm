//https://en.wikipedia.org/wiki/Partition_(number_theory)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAXN 110
int dp[MAXN][MAXN];
int partition(int k, int n)
{/*k means the least addend will be at least k */
   if(k == n)
   {
       return 1;
       /* partition(n, n) = 1*/
   }
   if(k > n)
   {
       return 0;
   }
   if(dp[k][n] != -1)
   {
       return dp[k][n];
      /*the result has been calculated*/
   }
   return dp[k][n] = partition(k, n-k) + partition(k+1, n);
   /*For the least addend  must be no less than k, there are two cases.
    case 1: the least addend number were equal to k, then we just need to
    find out partition(k, n-k)
    case 2: the least addend number were greater than k, then we need to
    find out partition(k+1, n)*/
}
 void dp_ini()
 {
     memset(dp, -1, sizeof(dp));
 }
int main()
{
    int n;
    dp_ini();
    while(~scanf("%d", &n))
    {
        printf("%d\n", partition(1, n));
        /*the solutions are related to how large the least addend
         number can be*/
    }
    return 0;
}
