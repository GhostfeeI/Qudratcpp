#include <iostream>
#include <cmath>
using namespace std;

void Swap(int *, int *);

int main() {
    int a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    Swap(&a, &b);
    return 0;
}

void Swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "a = " << *a << "\nb = " << *b;
}
