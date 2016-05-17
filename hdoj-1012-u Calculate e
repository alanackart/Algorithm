#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char res04[200] = "n e\n- -----------\n0 1\n1 2\n2 2.5\n3 2.666666667\n4 2.708333333\n";
    printf("%s", res04);
    int fact[10]= {1};
    double res[10] = {1};
    for(int i = 1; i <= 9; i++)
    {
        fact[i] = i * fact[i-1];
    }
    for(int i = 1; i <= 9; i++)
    {
        res[i] = res[i-1] + 1.00/fact[i];
    }
    for(int i = 5; i <= 9; i++)
    {
         printf("%d %.9f\n", i, res[i]);
    }
    return 0;
}
