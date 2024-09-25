#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, Xk, dX; // ���������
    double a, b, c; // ���������
    double F; // ��������� ���������� �������


    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "Xp = "; cin >> xp;
    cout << "XK = "; cin >> Xk;
    cout << "dX = "; cin >> dX;


    if (dX <= 0) {
        cout << "Error: step dX must be greater than 0" << endl;
        return 1; // ��������� �������� � ��������
    }


    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(10) << "x" << " |" << setw(15) << "F(x)" << " |" << endl;
    cout << "-----------------------------------------" << endl;


    x = xp;
    while (x <= Xk) {
        if ((x + c < 0) && (a != 0))
            F = -a * x * x - b;
        else if ((x + c > 0) && (a == 0))
            F = (x - a) / (x - c);
        else
            F = (x + c) + (c / x);

        cout << "|" << setw(10) << setprecision(2) << x
            << " |" << setw(15) << setprecision(5) << F << " |" << endl;

        // ����
        x += dX;
    }

    cout << "-----------------------------------------" << endl;

    return 0;
}
