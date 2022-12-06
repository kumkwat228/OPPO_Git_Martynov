#include <iostream>
using namespace std;

double my_pow(double a, unsigned int n)
{
    double ch = a;
    a = 1;

    for (int i = 0; i < n; i++)
    {
        a *= ch;
    }
        return a;
}


int main()
{
    setlocale(LC_ALL, "Russian");

    int a;
    unsigned int n;
    cout << "Ввод числа: \n";

    while (cin >> a)
    {
        cout << "Ввод степени: \n";
        cin >> n;
        cout << endl << my_pow(a, n) << endl;
        cout << "Ввод числа: \n";
    }
    return 0;
}

