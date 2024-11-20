#include <iostream>
using namespace std;
int main()
{
    float q, m, f, av;
    cout << "Enter your English scores = ";
    cin >> q;
    cout << "Enter your Maths scores = ";
    cin >> m;
    cout << "Enter your programming(c/c++) scores = ";
    cin >> f;
    av = (q + m + f) / 3;

    if (av >= 90)
    {
        cout << "Your Grade is 'A' ";
    }
    else if (av >= 70)
    {
        cout << "Your Grade is 'B' ";
    }
    else if (av >= 50)
    {
        cout << "Your Grade is 'C' ";
    }
    else if (av < 50)
    {
        cout << "Your Grade is 'F' ";
    }
    else {
        cout << "Your Grade is 'G' ";
    }
    return 0;
}
