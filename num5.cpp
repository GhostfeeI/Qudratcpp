#include <iostream>
#include <math.h>

using namespace std;

void RectPS(int, int, int *, int *);

int main() {
    int x1, x2, y1, y2;
    cout << "To'gri to'rtburchakning ikkita qarama qarshi tomonlarining kordinatasini bering: "; cin >> x1 >> y1 >> x2 >> y2;
    RectPS(x1, x2, &y1, &y2);
    cout << "To'gri to'rtburchakning ikkita qarama qarshi tomonlarining kordinatasini bering: "; cin >> x1 >> y1 >> x2 >> y2;
    RectPS(x1, x2, &y1, &y2);
    return 0;
}

void RectPS(int x1, int x2, int * y1, int * y2) {
    int side1, side2;
    side1 = abs(x1 - x2);
    side2 = abs(* y1 - * y2);
    cout << side1 << endl << side2 << endl;
    cout << "To'gri to'rtburchakning yuzasi " << side1 * side2 << " va perimetri " << 2 * (side1 + side2) << " ga teng\n";
}
