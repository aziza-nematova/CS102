#include <iostream>
using namespace std;

//Problem 5

int main() {
    int rows, cols;
    cin >> rows >> cols;
    
    int matrix[100][100]; 
    int colSum[100] = {0}; 
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    for(int j = 0; j < cols; j++) {
        cout << colSum[j] << " ";
    }

    return 0;
}

//Problem 6

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[100][100];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (i == j) {          
                sum += matrix[i][j];
            }
        }
    }

    cout << sum;

    return 0;
}

//Problem 7

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int matrix[100][100];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Problem 8

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int A[100][100], B[100][100], C[100][100];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Problem 9

#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    int A[100][100];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cin >> r2 >> c2;
    int B[100][100];

    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    if (c1 != r2) {
        cout << "Matrix multiplication not possible";
        return 0;
    }

    int C[100][100] = {0}; 

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Problem 10: rotating 90 = reverse of transpose

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// vectors

//15: remove all elemets

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of items in the vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter values: ";
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int value;
    cout << "Enter number to look for duplicates: ";
    cin >> value;

    v.erase(remove(v.begin(), v.end(), value), v.end());

    cout << "Vector after removing duplicates of " << value << ": ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}

//16

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter vector elements: ";
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    for (int i = 0; i < n / 2; ++i) {
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }

    cout << "Reversed vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}

//17
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter vector elements: ";
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int pos, value;
    cout << "Enter position to insert (0-based index): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    v.push_back(0);   //sorry, but I have to use this function here
    for (int i = n; i > pos; --i) {
        v[i] = v[i - 1];
    }
    v[pos] = value;

    cout << "Vector after insertion: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}

//18 unique

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter vector elements: ";
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    vector<int> unique;

    for (int i = 0; i < n; ++i) {
        bool isDuplicate = false;
        for (int j = 0; j < unique.size(); ++j) {
            if (v[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
            unique.push_back(v[i]);
    }

    cout << "Vector with unique elements: ";
    for (int x : unique)
        cout << x << " ";
    cout << endl;

    return 0;
}

//19

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter vector elements: ";
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    cout << "Sorted vector: ";
    for (int x : v)
        cout << x;
    cout << endl;

    return 0;
}

//20

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter vector elements: ";
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int largest = v[0];
    int secondLargest = v[0];

    for (int i = 1; i < n; ++i) {
        if (v[i] > largest) {
            secondLargest = largest;
            largest = v[i];
        } 
        else if (v[i] > secondLargest && v[i] != largest) {
            secondLargest = v[i];
        }
    }

    if (largest == secondLargest)
        cout << "Second largest element: " << largest << endl;
    else
        cout << "Second largest element: " << secondLargest << endl;

    return 0;
}




