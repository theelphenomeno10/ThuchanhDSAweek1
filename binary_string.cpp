#include <iostream>
#include <string>
using namespace std;

void generateBinaryStrings(int n, string str)
{
    if (str.length() == n)
    {
        cout << str << endl;
        return;
    }

    generateBinaryStrings(n, str + "0");
    generateBinaryStrings(n, str + "1");
}

int main()
{
    int n;
    cout << "Input: ";
    cin >> n;

    cout << "Output:" << endl;
    generateBinaryStrings(n, "");

    return 0;
}
