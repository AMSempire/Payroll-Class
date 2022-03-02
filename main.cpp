#include <iostream>
#include "Payroll.h"
#include <iomanip>
using namespace std;

int main() {

const int NUMOFEMPLOYEES = 7; //constant integer for array

Payroll Employee[NUMOFEMPLOYEES];

for(int i = 0; i < NUMOFEMPLOYEES; i++) { //get rate and hours
    Employee[i].getRate();
    Employee[i].changeHours();
}
for(int j = 0; j < NUMOFEMPLOYEES; j++){
    cout << "The total pay for employee " << j+1 << " is $" << fixed << setprecision(2) << Employee[j].getPay() << "."<< endl; //output
}
Employee[NUMOFEMPLOYEES].~Payroll(); //destructor
    return 0;
}

/*TestRun
 * "/Users/aaronshabon/Downloads/Compsci 122/Projects/HW#5.2/cmake-build-debug/HW_5_2"
Please enter the amount of hours worked.
99
This is not a valid number. Please enter the amount of hours worked.
23
Please enter the amount of hours worked.
12
Please enter the amount of hours worked.
45
Please enter the amount of hours worked.
56
Please enter the amount of hours worked.
32
Please enter the amount of hours worked.
42
Please enter the amount of hours worked.
11
The total pay for employee 1 is $241.50.
The total pay for employee 2 is $126.00.
The total pay for employee 3 is $472.50.
The total pay for employee 4 is $588.00.
The total pay for employee 5 is $336.00.
The total pay for employee 6 is $441.00.
The total pay for employee 7 is $115.50.
The payroll object will be deleted
The payroll object will be deleted
The payroll object will be deleted
The payroll object will be deleted
The payroll object will be deleted
The payroll object will be deleted
The payroll object will be deleted
The payroll object will be deleted

Process finished with exit code 0
*/