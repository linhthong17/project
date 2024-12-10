#include <iostream>
using std::cin;
using std::cout;
using namespace std;

int main (){
    double a, b, x;
    cout << "please enter a, b  \n";
    cin >> a >> b;
        while (a == 0) {
            cout <<  "please enter a b again  \n";
            cin >> a >> b ;
        } 
        while (a !=0) {   
            x = -b/a;
            cout << "X = " << x  ;
            break;
        }

    return 0;
}