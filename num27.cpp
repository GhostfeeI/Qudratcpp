#include <iostream>
#include <math.h>

using namespace std;

bool IsSquareK(int, float);

int main() {
    int a;
    float b;
    cout <<"2 ta son kiriting: ";    cin >> a >> b;
    if(IsSquareK(a, b)){
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
    return 0;

}

bool IsSquareK(int a, float b){
    float ans;
    int check;
    ans = pow(a, (1.0 / b));
    check = pow(a, (1.0 / b));
    if(ans == check){
        return 1;
    }
    else{
        return 0;
    }
}
