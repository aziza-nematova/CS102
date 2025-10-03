// Problem 15
#include <iostream>
#include <iomanip>
using namespace std;

void printASCII(char ch1, char ch2, int numberPerLine) {
    if (ch2 < ch1) swap(ch1, ch2);
    int count = 0;
    for (int c = (int)ch1; c <= (int)ch2; ++c) {
        cout << "(" << static_cast<char>(c) << "," << c << ")" << " ";
        ++count;
        if (count % numberPerLine == 0) cout << "\n";
    }
    if (count % numberPerLine != 0) cout << "\n";
}

int main() {
    printASCII('a', 'm', 6);
    return 0;
}

// Problem 14 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
    int months = years * 12;
    return investmentAmount * pow(1.0 + monthlyInterestRate, months);
}

int main() {
    double amount, annualRatePercent;
    cout << "Enter investment amount and annual interest rate (percent): ";
    cin >> amount >> annualRatePercent;
    double monthlyRate = (annualRatePercent / 100.0) / 12.0;
    cout << fixed << setprecision(2);
    cout << "Year\tFuture Value\n";
    for (int y = 1; y <= 30; ++y) {
        cout << setw(4) << y << "\t" << futureInvestmentValue(amount, monthlyRate, y) << "\n";
    }
    return 0;
}

// Problem 13 
#include <iostream>
using namespace std;

int numberOfDaysInFebruary(int year) {
    bool leap = false;
    if (year % 400 == 0) leap = true;
    else if (year % 100 == 0) leap = false;
    else if (year % 4 == 0) leap = true;
    return leap ? 29 : 28;
}

int main() {
    for (int y = 1983; y <= 1985; ++y) {
        cout << y << ": " << numberOfDaysInFebruary(y) << " days\n";
    }
    return 0;
}

// Problem 12
#include <iostream>
using namespace std;

int cubeOfDigits(int number) {
    int n = abs(number);
    int sum = 0;
    while (n) {
        int d = n % 10;
        sum += d*d*d;
        n /= 10;
    }
    return sum;
}

void isArmstrong(int sum, int number) {
    if (sum == number) cout << number << " is an Armstrong integer\n";
    else cout << number << " is NOT an Armstrong integer\n";
}

int main() {
    int n;
    cout << "Enter integer: ";
    cin >> n;
    int s = cubeOfDigits(n);
    isArmstrong(s, n);
    return 0;
}

// Problem 11 
#include <iostream>
#include <vector>
using namespace std;

void displayEven(int number) {
    if (number == 0) {
        cout << "0\n";
        return;
    }
    bool negative = number < 0;
    if (negative) number = -number;
    vector<int> digits;
    while (number > 0) {
        digits.push_back(number % 10);
        number /= 10;
    }
    bool first = true;
    for (int i = (int)digits.size()-1; i >= 0; --i) {
        if (digits[i] % 2 == 0) {
            if (!first) cout << " ";
            cout << digits[i];
            first = false;
        }
    }
    if (first) cout << "No even digits";
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter integer: ";
    cin >> n;
    displayEven(n);
    return 0;
}

// Problem 10
#include <iostream>
#include <iomanip>
using namespace std;

int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}

int main() {
    const int total = 75;
    const int perLine = 5;
    for (int i = 1; i <= total; ++i) {
        cout << setw(6) << getTriangularNumber(i);
        if (i % perLine == 0) cout << "\n";
    }
    if (total % perLine != 0) cout << "\n";
    return 0;
}

// Problem 9
#include <iostream>
using namespace std;

double sum(double a, double b) { return a + b; }
double subtract_(double a, double b) { return a - b; }
double product(double a, double b) { return a * b; }
double division(double a, double b) {
    if (b == 0) {
        cerr << "Division by zero\n";
        return 0;
    }
    return a / b;
}

int main() {
    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum = " << sum(x,y) << "\n";
    cout << "Subtract = " << subtract_(x,y) << "\n";
    cout << "Product = " << product(x,y) << "\n";
    cout << "Division = " << division(x,y) << "\n";
    return 0;
}

// Problem 8
#include <iostream>
#include <algorithm>
using namespace std;

int maximumOfThree(int a, int b, int c) {
    return max(a, max(b, c));
}
int minimumOfThree(int a, int b, int c) {
    return min(a, min(b, c));
}

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Maximum: " << maximumOfThree(a,b,c) << "\n";
    cout << "Minimum: " << minimumOfThree(a,b,c) << "\n";
    return 0;
}

// Problem 7
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "GCD = " << gcd(x, y) << "\n";
    return 0;
}

// Problem 6
#include <iostream>
using namespace std;

long long Factorial(int n = 1) {
    if (n < 0) return 0;
    long long res = 1;
    for (int i = 2; i <= n; ++i) res *= i;
    return res;
}

int main() {
    int n;
    cout << "Enter n: ";
    if (!(cin >> n)) {
        cout << "Factorial(1) = " << Factorial() << "\n";
    } else {
        cout << "Factorial(" << n << ") = " << Factorial(n) << "\n";
    }
    return 0;
}

// Problem 5
#include <iostream>
using namespace std;

void swapNoTemp(int &x, int &y) {
    if (&x == &y) return;
    x = x + y;
    y = x - y;
    x = x - y;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    swapNoTemp(a, b);
    cout << "After swap: " << a << " " << b << "\n";
    return 0;
}

// Problem4
#include <iostream>
using namespace std;

void fun(double radius); 
void fun(double a, double b) {
    double perimeter = 2 * (a + b);
    double area = a * b;
    cout << "Rectangle Perimeter = " << perimeter << "\n";
    cout << "Rectangle Area = " << area << "\n";
}

int main() {
    double a, b;
    cout << "Enter rectangle sides a b: ";
    cin >> a >> b;
    fun(a, b);
    return 0;
}

// Problem3.cpp
#include <iostream>
#include <cmath>
using namespace std;

void fun(double radius) {
    const double PI = acos(-1.0);
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;
    cout << "Circumference = " << circumference << "\n";
    cout << "Area = " << area << "\n";
}

int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;
    fun(r);
    return 0;
}

// Problem2.cpp
#include <iostream>
using namespace std;

double linearAcceleration(double v1, double v2, double t) {
    if (t == 0) {
        cerr << "Error: time t cannot be zero.\n";
        return 0;
    }
    return (v2 - v1) / t;
}

int main() {
    double v1, v2, t;
    cout << "v1 v2 t: ";
    cin >> v1 >> v2 >> t;
    cout << "Acceleration = " << linearAcceleration(v1, v2, t) << "\n";
    return 0;
}

// Problem1.cpp
#include <iostream>
using namespace std;

double product(double a, double b) {
    return a * b;
}

int main() {
    double x, y;
    cout << "Enter two numbers: ";
    if(!(cin >> x >> y)) return 0;
    cout << "Product = " << product(x, y) << "\n";
    return 0;
}