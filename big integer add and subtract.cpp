#include <iostream>

using namespace std;

string add(string &it1, string &it2)
{
    // make sure that the two strings have the same size
    if(it1.size() < it2.size())
    {
        it1.insert(it1.begin(), it2.size()-it1.size(), '0');
    }
    else if(it1.size() > it2.size())
    {
        it2.insert(it2.begin(), it1.size()-it2.size(), '0');
    }
    string result;
    result.resize(it1.size());
    int carry_in = 0;
    for(int i = it1.size()-1; i >= 0; i--)
    {
        int sum = it1[i] - '0' + it2[i] - '0' + carry_in;

        result[i] = (sum > 9)? '0' + sum-10 : '0' + sum;
        carry_in = (sum > 9)? 1 : 0;
    }
    if(carry_in != 0)
    {
        result.insert(result.begin(), '1');
    }
    return result;
}

string subtract(string &it1, string &it2)
{
    // make sure that the two strings have the same size
    if(it1.size() < it2.size())
    {
        it1.insert(it1.begin(), it2.size()-it1.size(), '0');
    }
    else if(it1.size() > it2.size())
    {
        it2.insert(it2.begin(), it1.size()-it2.size(), '0');
    }
    if(it2 > it1)
    {
        it1.swap(it2); // make sure thst it1 is no less that it2
    }
    string result;
    result.resize(it1.size());
    int be_borrowed = 0, have_borrowed;
    for(int i = it1.size()-1; i >= 0; i--)
    {
        int n1 = it1[i] - '0' - be_borrowed;
        int n2 = it2[i] - '0';
        if(n1 < n2)
        {
            have_borrowed = 10; // current
            be_borrowed = 1; // next digit
        }
        else
        {
            have_borrowed = 0;
            be_borrowed = 0;
        }

        int sum = n1 - n2 + have_borrowed;
        result[i] = sum + '0';
    }
    return result;
}


int main()
{
    string str1, str2;
    while(cin >> str1 >> str2)
    {
        cout << "sum: " << add(str1, str2) << endl;
        cout << "difference: " << subtract(str1, str2) << endl;
    }
    return 0;
}
