#include <iostream>
#include <math.h>
using namespace std;

void triangle(float, float *, float *);

int main() {
    float a, b, c;
    cout << "Uchta teng tomonli uchburchaklarning tomonini kiriting: ";
    cin >> a >> b >> c;

    triangle(a, &b, &c);

    return 0;
}

void triangle(float a, float * b, float * c){
    float area, perimetr;
    perimetr = 3 * a;
    area = pow(a, 2) * (sqrt(3) / 4);
    cout << "Birinchi uchburchakning perimetri " << perimetr << " va yuzi " << area << " ga teng\n";

    perimetr = 3 * *b;
    area = pow(*b, 2) * (sqrt(3) / 4);
    cout << "Ikkinchi uchburchakning perimetri " << perimetr << " va yuzi " << area << " ga teng\n";

    perimetr = 3 * *c;
    area = pow(*c, 2) * (sqrt(3) / 4);
    cout << "Uchunchi uchburchakning perimetri " << perimetr << " va yuzi " << area << " ga teng\n";
}
