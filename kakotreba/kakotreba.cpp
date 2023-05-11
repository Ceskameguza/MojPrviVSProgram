
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string* str = new string[n];
        for (int i = 0; i < n; i++)
        {
            getline(cin, str[i]);
        }
    sort(str, str + n);
    fstream AHH;
    AHH.open("imenik.txt", ios::app | ios::out);
    for (int i = 0; i < n; i++)
    {
        AHH << str[i] << endl;
    }
    AHH.close();
    return 0;
}

