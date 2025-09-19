#include <iostream>
#include <cmath>
using namespace std;

// Problem 12
int main(){
    int angle1, angle2, angle3;
    cin >> angle1 >> angle2>> angle3;
    if (angle1+angle2+angle3 == 180) {
        cout<< "Triangle is valid";
    } else{
        cout<< "Triangle is not valid";
    }
    return 0;
}

//Problem 13
int main(){
    int a, b, c, D, x1, x2;
    cin >> a >> b >> c;
    D = b*b - 4*a*c ;
    if (D < 0){
        cout<< "No real root";
    } else if (D ==0) {
        x1 = ((-1)*b)/(2*a);
        cout<< "x =" << x1 << endl;
    } else {
        x1 = sqrt(((-1)*b + D)/(2*a));
        x2 = sqrt(((-1)*b - D)/(2*a));
        cout<< "x1 =" << x1 << endl;
        cout<< "x2 =" << x2 << endl;
    }
    return 0;
}

//Problem 14
int main () {
    char charInput;
    cin >> charInput;
    if (charInput >= 'a' && charInput <= 'z'){
        cout<< "Lowercase Alphabet" << endl;
    } else if (charInput >= 'A' && charInput <= 'Z') {
        cout<< "Uppercase Alphabet" << endl;
    } else {
        cout<< "Not in Alphabet" << endl;
    }
    return 0;
}

//Problem 15
int main (){
    int weight1, weight2;
    double price1, price2, cost1, cost2;
    cout << "Enter weight and price for package 1";
    cin >> weight1 >> price1;
    cost1 = weight1*price1;
    cout << "Enter weight and price for package 2";
    cin >> weight2 >> price2;
    cost2 = weight2*price2;
    if ((weight1/price1)>(weight2/price2)){
        cout << "Package 1 has better price" << endl;
    } else if ((weight1/price1)<(weight2/price2)) {
        cout << "Package 2 has better price" << endl;
    } else{ 
        cout << "Packages have the same price" << endl;
    }
    return 0;
}

// Problem 16
int main(){
    int number;
    cin >> number;
    if (number/100 == number%10) {
        cout << "Palindrome!" << endl;
    }else{
        cout << "Not Palindrome!" << endl;
    }
}

//Problem 17
int main(){
    char language;
    cin >> language;
    if (language == 'u') {
        cout << "Salom!" << endl;
    } else if (language == 'g'){
        cout << "Hallo!" << endl;
    } else if (language == 'e'){
        cout << "Hello!" << endl;
    }else if (language == 'r'){
        cout << "Privet!" << endl;
    } else {
        cout << "No Language like This!" << endl;
    }
    return 0;
}

//Problem 18
int main() {
    int x,y;
    float length;
    cin >> x >> y;
    length = sqrt(x*x+y*y);
    if (length <= 0){
        cout << "Within the Circle" << endl;
    } else {
        cout << "Out of the Circle" << endl;
    }
    return 0;
} 

//Noname question
int main() {
    double gpa;
    cout << "Enter GPA (0 - 4.5): ";
    cin >> gpa;

    int g = static_cast<int>(gpa * 10); // scale to integer

    switch (g) {
        case 40: case 41: case 42: case 43: case 44: case 45:
            cout << "You got 80% scholarship" << endl;
            break;

        case 35: case 36: case 37: case 38: case 39:
            cout << "You got 60% scholarship" << endl;
            break;

        case 30: case 31: case 32: case 33: case 34:
            cout << "You got 50% scholarship" << endl;
            break;

        default:
            if (g < 30)
                cout << "No scholarship" << endl;
            else
                cout << "Invalid GPA" << endl;
    }

    return 0;
}

//Problem 19
int main(){
    int day, futureDay ;
    cin >> day;
    switch (day) {
    case 1:
        cout << "Today is Monday";
        break;
    case 2:
        cout << "Today is  Tuesday";
        break;
    case 3:
        cout << "Today is Wednesday";
        break;
    case 4:
        cout << "Today is Thursday";
        break;
    case 5:
        cout << "Today is Friday";
        break;
    case 6:
        cout << "Today is Saturday";
        break;
    case 0:
        cout << "Today is Sunday";
        break;
    }
    switch ((futureDay+day)%7) {
    case 1:
        cout << "It will be Monday";
        break;
    case 2:
        cout << "It will be Tuesday";
        break;
    case 3:
        cout << "It will be Wednesday";
        break;
    case 4:
        cout << "It will be Thursday";
        break;
    case 5:
        cout << "It will be Friday";
        break;
    case 6:
        cout << "It will be Saturday";
        break;
    case 0:
        cout << "It will be Sunday";
        break;
    }
}

//Problem 20
int main() {
    double w;
    cout << "Enter weight of package (kg): ";
    cin >> w;

    if (w <= 0) {
        cout << "Invalid input." << endl;
        return 0;
    }
    if (w > 20) {
        cout << "The package cannot be shipped." << endl;
        return 0;
    }

    int weight = static_cast<int>(w); // truncate weight to int

    switch (weight) {
        case 1:
            cout << "Shipping cost: 3500 som" << endl;
            break;

        case 2: case 3:
            cout << "Shipping cost: 5500 som" << endl;
            break;

        case 4: case 5: case 6: case 7: case 8: case 9: case 10:
            cout << "Shipping cost: 8500 som" << endl;
            break;

        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20:
            cout << "Shipping cost: 10500 som" << endl;
            break;
    }

    return 0;
}

//Problem 21
int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch(month) {
        case 1:
            cout << "In January: New Year's Day, 1 January" << endl;
            break;
        case 3:
            cout << "In March:" << endl;
            cout << "- International Women's Day, 8 March" << endl;
            cout << "- Navruz, 21 March" << endl;
            break;
        case 5:
            cout << "In May: Memorial Day, 9 May" << endl;
            break;
        case 9:
            cout << "In September: Independence Day, 1 September" << endl;
            break;
        case 10:
            cout << "In October: Teachers' and Mentors' Day, 1 October" << endl;
            break;
        case 12:
            cout << "In December: Constitution Day, 8 December" << endl;
            break;
        case 6: case 7: case 8: case 11: case 2: case 4:
            cout << "In this month there are no fixed holidays." << endl;
            cout << "Note: Ramadan Hayit and Kurban Hayit dates change every year." << endl;
            break;
        default:
            cout << "Invalid month number." << endl;
    }

    return 0;
}