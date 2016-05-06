#include <stdio.h>
 
int leap_check(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    return 0;
}
 
int monthDay(int year, int m)
{
    if(m == 4 || m == 6 || m == 9 || m == 11)
    {
        return 30;
    }
    else
    {
        if(m != 2)
        {
            return 31;
        }
        else
        {
            if(leap_check(year))
            {
                return 29;
            }
            else
            {
                return 28;
            }
        }
    }
}
 
int week(int year, int month, int day)
{
    if(month==1 || month==2)
    {
        year--;
        month += 12;
    }
    int c = year/100;
    int y = year - c*100;
    int w =(c/4)-2*c+(y+y/4)+(13*(month+1)/5)+day-1;
    while(w < 0)
    {
        w += 7;
    }
    w %= 7;
    return w;
}
 
 
int main()
{
    char month[12][5] = {"Janu", "Febr", "Marc", "Apri", "May", "June", "July", "Augu", "Sept", "Octo", "Nove", "Dece"};
    int y, m, w;
    while(~scanf("%d%d", &y, &m))
    {
        printf("%s, %d\n---------------------------\n", month[m - 1], y);
        printf("Sun Mon Tue Wed Thu Fri Sat\n---------------------------\n");
        w = week(y, m, 1);
        switch(w)
        {
        case 0:
        {
            printf("  1   2   3   4   5   6   7\n  8   9  10  11  12  13  14\n 15  16  17  18  19  20  21\n 22  23  24  25  26  27  28\n");
            if(monthDay(y, m) == 31)
            {
                printf(" 29  30  31\n");
                break;
            }
            if(monthDay(y, m) == 30)
            {
                printf(" 29  30\n");
                break;
            }
            if(monthDay(y, m) == 29)
            {
                printf(" 29\n");
                break;
            }
            printf("\n");
            break;
        }
 
        case 1:
        {
            printf("      1   2   3   4   5   6\n  7   8   9  10  11  12  13\n 14  15  16  17  18  19  20\n 21  22  23  24  25  26  27\n");
            if(monthDay(y, m) == 31)
            {
                printf(" 28  29  30  31\n");
                break;
            }
            if(monthDay(y, m) == 30)
            {
                printf(" 28  29  30\n");
                break;
            }
            if(monthDay(y, m) == 29)
            {
                printf(" 28  29\n");
                break;
            }
            break;
        }
 
        case 2:
        {
            printf("          1   2   3   4   5\n  6   7   8   9  10  11  12\n 13  14  15  16  17  18  19\n 20  21  22  23  24  25  26\n");
            if(monthDay(y, m) == 31)
            {
                printf(" 27  28  29  30  31\n");
                break;
            }
            if(monthDay(y, m) == 30)
            {
                printf(" 27  28  29  30\n");
                break;
            }
            if(monthDay(y, m) == 29)
            {
                printf(" 27  28  29\n");
                break;
            }
            printf(" 27  28\n");
            break;
        }
 
        case 3:
        {
            printf("              1   2   3   4\n  5   6   7   8   9  10  11\n 12  13  14  15  16  17  18\n 19  20  21  22  23  24  25\n");
            if(monthDay(y, m) == 31)
            {
                printf(" 26  27  28  29  30  31\n");
                break;
            }
            if(monthDay(y, m) == 30)
            {
                printf(" 26  27  28  29  30\n");
                break;
            }
            if(monthDay(y, m) == 29)
            {
                printf(" 26  27  28  29\n");
                break;
            }
            printf(" 26  27  28\n");
            break;
        }
        case 4:
        {
            printf("                  1   2   3\n  4   5   6   7   8   9  10\n 11  12  13  14  15  16  17\n 18  19  20  21  22  23  24\n");
            if(monthDay(y, m) == 31)
            {
                printf(" 25  26  27  28  29  30  31\n");
                break;
            }
            if(monthDay(y, m) == 30)
            {
                printf(" 25  26  27  28  29  30\n");
                break;
            }
            if(monthDay(y, m) == 29)
            {
                printf(" 25  26  27  28  29\n");
                break;
            }
            printf(" 25  26  27  28\n");
            break;
        }
        case 5:
        {
            printf("                      1   2\n  3   4   5   6   7   8   9\n 10  11  12  13  14  15  16\n 17  18  19  20  21  22  23\n");
            if(monthDay(y, m) == 31)
            {
                printf(" 24  25  26  27  28  29  30\n 31\n");
                break;
            }
            if(monthDay(y, m) == 30)
            {
                printf(" 24  25  26  27  28  29  30\n");
                break;
            }
            if(monthDay(y, m) == 29)
            {
                printf(" 24  25  26  27  28  29\n");
                break;
            }
            printf(" 24  25  26  27  28\n");
            break;
        }
 
        case 6:
        {
        	if(monthDay(y, m) == 31)
        	{
        		printf(" 30  31");
			}
			if(monthDay(y, m) == 30)
			{
				printf(" 30    ");
			}
            printf("                   1\n  2   3   4   5   6   7   8\n  9  10  11  12  13  14  15\n 16  17  18  19  20  21  22\n");
            if(monthDay(y, m) == 31)
            {
                printf(" 23  24  25  26  27  28  29\n");
                break;
            }
            if(monthDay(y, m) == 30)
            {
                printf(" 23  24  25  26  27  28  29\n");
                break;
            }
            if(monthDay(y, m) == 29)
            {
                printf(" 23  24  25  26  27  28  29\n");
                break;
            }
            printf(" 23  24  25  26  27  28\n");
            break;
        }
    }
    printf("===========================\n");
}
return 0;
}
