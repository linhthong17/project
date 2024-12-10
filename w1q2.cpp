#include <iostream>
using namespace std;


int main (){
 double number[5];
 double avg;
 int max;
 int n;
 cout << "please enter 5 number: \n";
    for (n = 0; n < 5 ;n++) {
    cout << "Enter element " << n + 1 << ": ";
    cin >> number[n];
   // cin >> number[n]
    }
 avg = (number[0]+number[1]+number[2]+number[3]+number[4])/5;
    int i;
    for ( i = 0 ;i < 5;i++){
        while(max<number[i]){
            max = number[i];
            
            }
        while (max>number[i]){
          i++;
        }
    }
 cout << "max value is" << max << "\n" << "average" << avg;

 return 0;
}

