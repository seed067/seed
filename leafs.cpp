#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h>
using namespace std;


int ex_2()
{
    double a_x, a_y, b_x, b_y, c_x, c_y, AB, BC, AC, p, S, alpha, beta, gamma;
    setlocale(LC_ALL, "RU");

    cout << "введите координаты A(a_x, a_y): ";
    cin >> a_x >> a_y;
    cout << "введите координаты B(b_x, b_y: )";
    cin >> b_x >> b_y;
    cout << "введите координаты A(c_x, c_y): ";
    cin >> c_x >> c_y;


    AB = sqrt(pow(b_x - a_x, 2) + pow(b_y - a_y, 2));
    BC = sqrt(pow(c_x - b_x, 2) + pow(c_y - b_y, 2));
    AC = sqrt(pow(c_x - a_x, 2) + pow(c_y - a_y, 2));

    p = (AB + BC + AC) / 2;
    S = sqrt(p * (p - AB) * (p - BC) * (p - AC));

    cout << "S = " << S << endl;



    alpha = asin(2 * S / (AB * AC));
    alpha = alpha * M_PI / 180;
    beta = asin(2 * S / (AB * BC));
    beta = beta * M_PI / 180;
    gamma = asin(2 * S / (AC * BC));
    gamma = gamma * M_PI / 180;

    cout << "сумма углов = " << alpha + beta + gamma << endl;
    _getch();

    return 0;
}