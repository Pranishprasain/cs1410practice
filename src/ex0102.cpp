#include <iostream>
using namespace std;

int main(){
    double c, f;
    cout << "temperature in cecius:" << endl;
    cin >> c;

    f=9.0*c/5.0 + 32;
    cout << "temperature in fahrenheit:" << f << endl;
    
    return 0;
}