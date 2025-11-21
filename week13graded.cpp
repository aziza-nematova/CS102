//9

#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 14, c = 21;

    int* ptrs[3] = { &a, &b, &c }; 

    for (int i = 0; i < 3; i++) {
        cout << *ptrs[i] << " ";
    }

    return 0;
}

//10

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {9, 3, 7, 1, 6};

    int *start = arr;         
    int *end   = arr + 5;    

    for (int *i = start; i < end - 1; i++) {
        for (int *j = start; j < end - 1 - (i - start); j++) {
            if (*j > *(j + 1)) {
                int temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }

    for (int *p = start; p < end; p++) {
        cout << *p;
    }

    return 0;
}

//11

#include <iostream>
using namespace std;

int main() {
    const char* suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    for (int i = 0; i < 4; i++) {
        cout << suit[i] << " ";
    }

    return 0;
}

//12

#include <iostream>
using namespace std;

int main() {
    const char* days[3] = {"Mon", "Tue", "Wed"};

    for (int i = 0; i < 3; i++) {
        cout << *(*(days + i) + 1);  
    }

    return 0;
}

//13

#include <iostream>
using namespace std;

int main() {
    int deck[4][13] = {0};

    const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char* faces[13] = {
        "Ace", "Two", "Three", "Four", "Five", "Six",
        "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    };

    deck[0][0] = 1;   
    deck[3][1] = 1;   

    if (deck[0][0] == 1)
        cout << faces[0] << " of " << suits[0] << endl;

    if (deck[3][1] == 1)
        cout << faces[1] << " of " << suits[3] << endl;

    return 0;
}

//14

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int deck[4][13];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
            deck[i][j] = -1;

    for (int card = 1; card <= 52; card++) {
        int row, col;
        do {
            row = rand() % 4;
            col = rand() % 13;
        } while (deck[row][col] != -1);

        deck[row][col] = card;
    }

    const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char* faces[13] = {
        "Ace", "Two", "Three", "Four", "Five", "Six",
        "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    };

    int printed = 0;
    for (int i = 0; i < 4 && printed < 5; i++)
        for (int j = 0; j < 13 && printed < 5; j++)
            if (deck[i][j] != -1) {
                cout << faces[j] << " of " << suits[i] << endl;
                printed++;
            }

    return 0;
}

//15

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello from greet()" << endl;
}

void bye() {
    cout << "Goodbye from bye()" << endl;
}

int main() {
    void (*fptr)();

    fptr = greet;
    fptr();

    fptr = bye;
    fptr();

    return 0;
}

//16

#include <iostream>
using namespace std;

int add(int x, int y) { return x + y; }
int multiply(int x, int y) { return x * y; }

int main() {
    int (*fptr)(int, int);

    fptr = add;
    cout << "Add: " << fptr(3, 5) << endl;

    fptr = multiply;
    cout << "Multiply: " << fptr(3, 5) << endl;

    return 0;
}

//17

#include <iostream>
using namespace std;

int add(int x, int y) { return x + y; }
int multiply(int x, int y) { return x * y; }

void calculate(int (*op)(int, int), int x, int y) {
    cout << "Result: " << op(x, y) << endl;
}

int main() {
    calculate(add, 10, 10);
    calculate(multiply, 4, 5);

    return 0;
}

//18

#include <iostream>
using namespace std;

int add(int x, int y) { return x + y; }
int multiply(int x, int y) { return x * y; }

int main() {
    int (*ops[])(int, int) = {add, multiply};

    int choice = 1;  
    int x = 3, y = 5;

    cout << "Output: " << ops[choice](x, y) << endl;

    return 0;
}

