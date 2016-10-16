#include <iostream>

using namespace std;

int main()
{
    int n, up, down, temp, previous;
    while(cin >> n && n)
    {
        up = down = previous = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp - previous > 0)
            {
                up += temp - previous;
            }
            if(temp - previous < 0)
            {
                down += previous - temp;
            }
            previous = temp;
        }
        cout << 5 * n + 6 * up + 4 * down << endl;
    }
    return 0;
}
