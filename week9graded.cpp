#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// Problem 1: power P(x,y) = x * P(x, y-1)
long long power_simple(long long x, long long y) {
    if (y == 0) return 1;
    return x * power_simple(x, y - 1);
}

// Problem 2: reverse digits 
long long reverse_digits_helper(long long n, long long acc) {
    if (n == 0) return acc;
    return reverse_digits_helper(n / 10, acc * 10 + (n % 10));
}
long long reverse_digits(long long n) {
    bool neg = n < 0;
    n = llabs(n);
    if (n == 0) return 0;
    long long r = reverse_digits_helper(n, 0);
    return neg ? -r : r;
}

// Problem 3: palindrome check
bool is_palindrome(long long n) {
    if (n < 0) return false;
    return n == reverse_digits(n);
}

// Problem 4: prime check by recursion up to sqrt of n
bool is_prime_helper(long long n, long long d) {
    if (n <= 2) return n == 2;
    if (n % d == 0) return false;
    if (d * d > n) return true;
    return is_prime_helper(n, d + 1);
}
bool is_prime(long long n) {
    if (n <= 1) return false;
    return is_prime_helper(n, 2);
}

// Problem 5: count even digits in n
int count_even_digits(long long n) {
    n = llabs(n);
    if (n < 10) return (n % 2 == 0) ? 1 : 0;
    int last = (n % 10) % 2 == 0 ? 1 : 0;
    return last + count_even_digits(n / 10);
}

// Problem 6: product of digits
long long product_digits_rec(long long n) {
    if (n == 0) return 1;
    if (n < 10) return n;
    return (n % 10) * product_digits_rec(n / 10);
}
long long product_digits(long long n) {
    n = llabs(n);
    if (n == 0) return 0;
    return product_digits_rec(n);
}

// Problem 7: check power of two
bool is_power_of_two(long long n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    if (n % 2 != 0) return false;
    return is_power_of_two(n / 2);
}

// Problem 8: strictly increasing digits
bool strictly_inc_helper(long long n, int prevDigit) {
    if (n == 0) return true;
    int cur = n % 10;
    if (prevDigit != -1 && cur >= prevDigit) return false;
    return strictly_inc_helper(n / 10, cur);
}
bool strictly_increasing_digits(long long n) {
    n = llabs(n);
    if (n < 10) return true;
    return strictly_inc_helper(n, -1);
}

// Problem 9: count zeros in n
int count_zeros(long long n) {
    n = llabs(n);
    if (n == 0) return 1; 
    if (n < 10) return (n == 0) ? 1 : 0;
    int add = (n % 10 == 0) ? 1 : 0;
    return add + count_zeros(n / 10);
}

// Problem 10: fast exponentiation
long long power_fast(long long x, long long y) {
    if (y == 0) return 1;
    if (y % 2 == 0) {
        long long half = power_fast(x, y / 2);
        return half * half;
    } else {
        return x * power_fast(x, y - 1);
    }
}

// MAIN (I used one main for all the problems, because I use an online compiler)
int main() {
    cout << "Problem 1 (power_simple)\n";
    cout << "2^3 = " << power_simple(2, 3) << "\n";
    cout << "5^4 = " << power_simple(5, 4) << "\n\n";

    cout << "Problem 2 (reverse_digits)\n";
    cout << "1234 -> " << reverse_digits(1234) << "\n";
    cout << "987 -> " << reverse_digits(987) << "\n\n";

    cout << "Problem 3 (is_palindrome)\n";
    cout << "121 -> " << (is_palindrome(121) ? "true" : "false") << "\n";
    cout << "123 -> " << (is_palindrome(123) ? "true" : "false") << "\n\n";

    cout << "Problem 4 (is_prime)\n";
    cout << "17 -> " << (is_prime(17) ? "true" : "false") << "\n";
    cout << "20 -> " << (is_prime(20) ? "true" : "false") << "\n\n";

    cout << "Problem 5 (count_even_digits)\n";
    cout << "2468 -> " << count_even_digits(2468) << "\n";
    cout << "1234 -> " << count_even_digits(1234) << "\n\n";

    cout << "Problem 6 (product_digits)\n";
    cout << "1234 -> " << product_digits(1234) << "\n";
    cout << "505 -> " << product_digits(505) << "\n\n";

    cout << "Problem 7 (is_power_of_two)\n";
    cout << "8 -> " << (is_power_of_two(8) ? "true" : "false") << "\n";
    cout << "12 -> " << (is_power_of_two(12) ? "true" : "false") << "\n\n";
    cout << "Problem 8 (strictly_increasing_digits)\n";
    cout << "1234 -> " << (strictly_increasing_digits(1234) ? "true" : "false") << "\n";
    cout << "132 -> " << (strictly_increasing_digits(132) ? "true" : "false") << "\n\n";

    cout << "Problem 9 (count_zeros)\n";
    cout << "1050 -> " << count_zeros(1050) << "\n";
    cout << "90009 -> " << count_zeros(90009) << "\n\n";

    cout << "Problem 10 (power_fast)\n";
    cout << "2^8 = " << power_fast(2, 8) << "\n";
    cout << "3^5 = " << power_fast(3, 5) << "\n";

    return 0;
}