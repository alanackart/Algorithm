// 普通的筛素数方法与改进之后的效率对比
// by MoreWindows( http://blog.csdn.net/MoreWindows )   
//http://blog.csdn.net/morewindows/article/details/7347459
#include <stdio.h>
#include <memory.h>
#include <time.h>
#include <math.h>
const int MAXN = 100000000;
bool flag[MAXN];
int primes[MAXN / 3], pi;
// 利用对每个素数的倍数必定不是素数来筛选
void GetPrime_1()
{
	int i, j;
	pi = 0;
	memset(flag, false, sizeof(flag));
	for (i = 2; i < MAXN; i++)
		if (!flag[i])
		{
			primes[pi++] = i;
			for (j = i; j < MAXN; j += i)
				flag[j] = true;
		}
}
// 利用了每个合数必有一个最小素因子来筛选
void GetPrime_2()
{
	int i, j;
	pi = 0;
	memset(flag, false, sizeof(flag));
	for (i = 2; i < MAXN; i++)
	{
		if (!flag[i])
			primes[pi++] = i;
		for (j = 0; (j < pi)  && (i * primes[j] < MAXN); j++)
		{
			flag[i * primes[j]] = true;
			if (i % primes[j] == 0)
				break;
		}
	}
}
int main()
{
	printf(" 在%d的数据量下普通的筛素数方法与改进之后的效率对比\n", MAXN);
	printf("  by MoreWindows( http://blog.csdn.net/MoreWindows ) -- --\n\n");
	clock_t clockBegin, clockEnd;
	
	clockBegin = clock();
	GetPrime_1();
	clockEnd = clock();
	printf("普通的筛素数方法\t%d毫秒\n", clockEnd - clockBegin);
	
	clockBegin = clock();
	GetPrime_2();
	clockEnd = clock();
	printf("改进的筛素数方法\t%d毫秒\n", clockEnd - clockBegin);
	return 0;
}
