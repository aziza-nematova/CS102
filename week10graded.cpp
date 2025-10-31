#include <iostream>
using namespace std;

// Prblm 6
int main() {
    int freq[26] = {0};
    char ch;
    cout << "Enter characters (end with '0'): " << endl;
    while (true) {
        cin >> ch;
        if (ch == '0') break;
        if (ch >= 'a' && ch <= 'z') freq[ch - 'a']++;
    }
    cout << "\nLetter frequencies:\n";
    for (int i = 0; i < 26; ++i) {
        if (freq[i] > 0) cout << char('a' + i) << " : " << freq[i] << endl;
    }
    return 0;
}

// Problem 8
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int freq[6] = {0};
    srand(time(0));
    for (int i = 0; i < 10000; ++i) {
        int roll = rand() % 6 + 1;
        freq[roll - 1]++;
    }
    for (int i = 0; i < 6; ++i)
        cout << "Value " << i + 1 << " : " << freq[i] << endl;
    return 0;
}

//Prblm 7

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    return 0;
}

//Problem 9

#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


// prblm 10

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    reverseArray(arr, 0, n - 1);
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    return 0;
}