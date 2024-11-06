#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void generateArray(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 46 - 10;
    }
}

void printArray(const int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int countElements(const int* a, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] >= 0 && a[i] % 3 != 0) {
            count++;
        }
    }
    return count;
}

int sumElements(const int* a, const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] >= 0 && a[i] % 3 != 0) {
            sum += a[i];
        }
    }
    return sum;
}

void replaceElements(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] > 0 && a[i] % 3 != 0) {
            a[i] = 0;
        }
    }
}

int main() {
    const int n = 22;
    int a[n];

    srand((unsigned)time(NULL));

    generateArray(a, n);

    printArray(a, n);

    cout << "the number of elements: " << countElements(a, n) << endl;
    cout << "sum of elements: " << sumElements(a, n) << endl;

    replaceElements(a, n);
    printArray(a, n);

    return 0;
}
