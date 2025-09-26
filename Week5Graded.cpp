#include <iostream>
#include <cmath>
using namespace std;

// Problem 11
int main () {
    int inputNumber, negativeCounter, positiveCounter;
    float sum = 0, average;
    cin >> inputNumber;
    while (inputNumber!=0){
        cin >> inputNumber;
        sum += inputNumber;
        if (inputNumber > 0) {
            positiveCounter +=1;
        } else {negativeCounter += 1;}
    }
    cout << "The number of positives is "<< positiveCounter<< endl;
    cout << "The number of negatives is "<< negativeCounter<< endl;
    cout << "The total is "<< negativeCounter+ positiveCounter + 1 << endl;
    average = sum / (negativeCounter+ positiveCounter + 1);
    cout << "The average is "<<  average << endl;
    return 0;
}

// Problem 12
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//Problem 13
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//Problem 14
int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "The depth is 0" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i;
            }
            cout << endl;
        }
    }
    return 0;
}

// Problem 15
int main() {
    int n;
    float sum = 0.0;
    
    cout << "Enter the number of terms: ";
    cin >> n;
    
    cout << "Output: " << endl;
    for(int i = 1; i <= n; i++) {
        cout << "1/" << i;
        if(i < n) cout << " + ";
        sum += 1.0 / i;
    }
    cout << endl << "The sum is " << sum << endl;
    
    return 0;
}

//Problem 16
int main(){
    int rentFirstYear, totalForYear, totalForFiveYears;
    float rent;
    rentFirstYear = 1000 * 12;
    for (int i= 1; i<= 5; i++) {
        rent = rentFirstYear*pow(1.03, i);
        totalForFiveYears += rent;
        cout << "Rent for year " << i << " is " << rent << endl;
    }
    cout << "Rent for 5 years is " << totalForFiveYears << endl;
    return 0;
}

//Problem 17
int main() {
    int num, sum = 0;;
    cin >> num;

    int original = num; 
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    cout <<"The sum of digits is " << sum << endl;
    
    return 0;
}

//Problem 18
int main() {
    long long binary;
    int decimal = 0, i = 0;
    cin >> binary;
    
    long long original = binary; 
    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        ++i;
        binary /= 10;
    }
    
    cout << "The decimal number is " << decimal << endl;
    
    return 0;
}

//Problem 19
int main() {
    int num;
    cin >> num;
    for (int i = 2; i <= num; ++i) {
        while (num % i == 0) {
            cout << " " << i;
            num /= i;
        }
    }
    cout << endl;
    
    return 0;
}

//Problem 22
int main() {
    cout << "Miles\tKilometers" << endl;
    for (int miles = 1; miles <= 10; ++miles) {
        double km = miles * 1.609;
        cout << miles << "\t" << km << endl;
    }
    return 0;
}

//Problem 23
int main() {
    long long limit = 30000;
    long long power = 1;
    int n = 0;
    
    while (power * 2 < limit) {
        power *= 2;
        ++n;
    }
    
    cout << "The largest n such that 2^n < 30,000 is: " << n << endl;
    
    return 0;
}

//Problem 24
#include <iostream>
#include <cstdlib>    //searched from Google
#include <ctime>      //searched from Google
using namespace std;


int main() {
    srand(time(0));   
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < 100000; i++) {
        int num = rand();    

        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}

