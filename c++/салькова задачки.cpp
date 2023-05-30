
// сам.баз 1 in15
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введите трехзначное число: ";
    cin >> num;

    int hundreds = num / 100;   // сотни
    int tens = num / 10 % 10;   // десятки
    int ones = num % 10;        // единицы

    int newNum = tens * 100 + hundreds * 10 + ones;   // переставляем сотни и десятки

    cout << "Результат: " << newNum << endl;

    return 0;
}

// сам.прод 10
#include <iostream>
#include<math.h>
using namespace std;
int main(){
    double G = 6.672e-11; // гравитационная постоянная
    double M = 5.96e24; // масса Земли
    double R = 6.37e6; // радиус Земли
    double h; // высота над поверхностью Земли
    double g; // ускорение свободного падения
    cout << "Введите высоту над поверхностью Земли (в метрах): "; // выводим сообщение на экран
    cin >> h; // вводим значение высоты над поверхностью Земли
g = G * M / pow((R + h), 2); // вычисляем ускорение свободного падения

cout<< "Ускорение свободного падения на высоте "<<h<<" метров над поверхностью Земли: "<< g<<" м/с^2"; // выводим результат на экран

return 0;
}


// сам. раб 2 B28
#include <iostream>

using namespace std;

int main() {
    float x, y;
    cout << "Введите координаты точки (x, y): ";
    cin >> x >> y;
    if ((x > 0 && y > 0) || (x < 0 && y < 0)) {
        cout << "Точка лежит в первой или третьей координатной четверти";
    } else 
    {
        cout << "Точка не лежит в первой или третьей координатной четверти";
    }
return 0;
}

//сам. раб. 2 B29
#include <iostream>
using namespace std;

int main() {
int x, y, x1, y1, x2, y2;
cout << "Введите x и y: ";
cin >> x >> y;
cout << "Введите координаты верхнего левого угла: ";
cin >> x1 >> y1;
cout << "Введите координаты правого нижнего угла: ";
cin >> x2 >> y2;
if(x > x1 && x < x2 && y > y1 && y < y2) {
    cout << "Точка (" << x << ", " << y << ") лежит внутри прямоугольника." << endl;
}
else {
    cout << "Точка (" << x << ", " << y << ") не лежит внутри прямоугольника." << endl;
}

return 0;
}

// сам. раб. 2 B30
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "Треугольник со сторонами " << a << ", " << b << ", " << c << " является равносторонним" << endl;
    } else {
        cout << "Треугольник со сторонами " << a << ", " << b << ", " << c << " не является равносторонним" << endl;
    }

    return 0;
}


// сам.раб. 3 баз 5.14
#include <iostream>
using namespace std;

int main() {
    int n = 9;
    for (int i = 1; i <= 10; i++) {
        int result = n * i;
        cout << n << " * " << i << " = " << result << endl;
    }
    return 0;
}

// сам.раб. 3 баз 5.15

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число от 1 до 9: ";
    cin >> n;

    if (n >= 1 && n <= 9) {
        for (int i = 1; i <= 10; i++) {
            int result = n * i;
            cout << n << " * " << i << " = " << result << endl;
        }
    } else {
        cout << "Ошибка! Вы ввели число, не входящее в диапазон от 1 до 9." << endl; 
    }
    return 0;
}

// сам.раб. 3 баз 5.16

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int i = 2; i <= 20; i++) {
        double result = pow(sin(i), 2);
        cout << "sin^2(" << i << ") = " << result << endl;
    }
    return 0;
}

// сам.раб. 3 баз 5.17

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double t, y;
    for (int x = 4; x <= 28; x++) {
        t = x + 2;
        y = 2 * pow(t, 2) + 5.5 * t - 2;
        cout << "При x = " << x << ", y = " << y << endl;
    }
    return 0;
}


// сам.раб. 3 баз 5.18

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double t, z;
    for (int a = 2; a <= 17; a++) {
        t = 4 * a;
        z = 3.5 * pow(t, 2) - 7 * t + 16;
        cout << "При a = " << a << ", z = " << z << endl;
    }
    return 0;
}

// сам.раб. 3 баз W22

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    bool isPrime = true; // флаг, который будет использоваться для проверки простоты числа
    cout << "Введите целое число больше 1: ";
    cin >> N;

    if (N <= 1) { // если число меньше или равно 1, оно не является простым
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(N); i++) { // проверяем делители от 2 до корня из N
            if (N % i == 0) { // если нашелся делитель, то число не является простым
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}

// сам.раб. 3 прод 2 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 10; 
    double x, result = 1.0;
    cout << "Введите аргумент: ";
    cin >> x;

    for (int i = 1; i <= n; i++) {
        double term = pow(x, i) / tgamma(i+1); 
        result += term; 
    }

    cout << "e^" << x << " = " << result;
    return 0;
}


// сам.раб. 4 8.3(а)

#include <iostream>

using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// сам.раб. 4 8.3(б)

#include <iostream>

int main() {
    for (int i = 5; i <= 9; i++) {
        for (int j = i; j <= 9; j++) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

// сам.раб. 4 8.3(в)

#include <iostream>

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            std::cout << i * 10 << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

// сам.раб. 4 8.3(г)

#include <iostream>

int main() {
int n = 5;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n-i; j++) {
std::cout << 5*(i+1) << " ";
}
std::cout << std::endl;
}
return 0;
}

// сам раб прод 4 2

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a1, a2, a3, b1, b2, b3;
    cout << "Введите компоненты вектора a: ";
    cin >> a1 >> a2 >> a3;
    cout << "Введите компоненты вектора b: ";
    cin >> b1 >> b2 >> b3;

    double a_len = sqrt(a1*a1 + a2*a2 + a3*a3); // вычисляем длину вектора a
    double b_len = sqrt(b1*b1 + b2*b2 + b3*b3); // вычисляем длину вектора b

    double dot_product = a1*b1 + a2*b2 + a3*b3; // вычисляем скалярное произведение
    double cos_f = dot_product / (a_len * b_len); // вычисляем косинус угла f
    double f = acos(cos_f) * 180 / M_PI; // вычисляем угол в градусах

    cout << "Угол между векторами a и b: " << f << " градусов" << endl;

    return 0;
}


// сам раб прод 5 2

#include <iostream>
#include <cmath>
using namespace std;

const int LIMIT = 10; // граница ряда

double sin(double x) {
double sum = 0;
int sign = 1;
double term = x;
int fact = 1;
double power = x;
for(int i = 0; i < LIMIT; i++) {
    sum += sign * term;
    sign *= -1;
    power *= x*x;
    fact *= (2*i+2)*(2*i+3);
    term = power/fact;
}

return sum;
}

int main() {
cout << "Enter argument x in radians: ";
double x;
cin >> x;
cout << "sin(" << x << ") = " << sin(x) << endl;
return 0;
}