//reference: http://www.geeksforgeeks.org/backttracking-set-4-subset-sum/
// http://www.edufyme.com/code/?id=45c48cce2e2d7fbdea1afc51c7c6ad26




// #include <iostream>
// #include <vector>
// #include <stdio.h>
// #include <algorithm>

// using namespace std;

// long long cnt = 0;

// void subset_sum(vector<long long> &US, int n, long long sum)
// {
    // if( sum == 0 )
    // {
        // //printVector(SS);
        // cnt++;
        // //return;
    // }

    // if( n == 0 ) return;

    // if( US[n-1] <= sum )
    // {
        // subset_sum(US, n-1, sum); // 不把US[n-1]放入解集合中, n减小1
        // subset_sum(US, n-1, sum-US[n-1]); // 将US[n-1]放入解集合中, 问题规模减小至sum-US[n-1], n减小1
    // }
    // else
    // {
        // subset_sum(US, n-1, sum); // US[n-1]太大, 不考虑US[n-1], n减小1
    // }
// }

// int main()
// {
    // int n;
    // scanf("%d", &n);
    // while(n--)
    // {
        // cnt = 0;
        // vector<long long> US;
        // int len;
        // long long sum;
        // scanf("%d%I64d", &len, &sum);

        // for(int i = 0; i < len; i++)
        // {
            // long long temp;
            // scanf("%I64d", &temp);
            // US.push_back(temp);
        // }
        // sort(US.begin(), US.end()); // 排序加快处理速度
        // subset_sum(US, len, sum);
        // printf("%I64d\n", cnt);
    // }
    // return 0;
// }





#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

long long cnt = 0;
// US = universal set, contain all the elements inputted
// SS = subset, which store the answer

//void printVector(vector<long long> &v)
//{
//    for(int i = 0; i<v.size() -1; i++)
//    {
//        printf("%I64d ", v[i]);
//    }
//    printf("%I64d\n", v[v.size()-1]);
//}

void subset_sum(vector<long long> &US, int n, vector<long long> SS, long long sum)
{
   if( sum == 0 )
   {
       //printVector(SS);
       cnt++;
       //return;
   }

   if( n == 0 ) return;

   if( US[n-1] <= sum )
   {
       subset_sum(US, n-1, SS, sum); // 不把US[n-1]放入解集合中
       //SS.push_back(US[n-1]); // 将US[n-1]放入解集合中
       subset_sum(US, n-1, SS, sum-US[n-1]); // 问题规模减小至sum-US[n-1]
   }
   else
   {
       subset_sum(US, n-1, SS, sum); // US[n-1]太大, 不考虑US[n-1]
   }
}

int main()
{
   int n;
   scanf("%d", &n);
   while(n--)
   {
       cnt = 0;
       vector<long long> US;
       vector<long long> SS;
       int len;
       long long sum;
       scanf("%d%I64d", &len, &sum);

       for(int i = 0; i < len; i++)
       {
           long long temp;
           scanf("%I64d", &temp);
           US.push_back(temp);
       }
       sort(US.begin(), US.end()); // 排序加快处理速度
       printVector(US);
       subset_sum(US, len, SS, sum);
       printf("%I64d\n", cnt);
   }
   return 0;
}
