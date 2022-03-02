//
// Created by Aaron Shabon on 2/14/22.
//

#include "Payroll.h"
#include <iostream>
using namespace std;

Payroll::Payroll(double rate, double hours, double totalPay) { //constructor initialization functions
_rate = rate;
_hours = hours;
_totalPay = totalPay;
}

Payroll::Payroll() {
_rate = 10.50;
_hours = 0;
_totalPay = _rate * _hours;
}

Payroll::~Payroll() {
cout << "The payroll object will be deleted\n"; } //destructor function

double Payroll::getRate() {
    return _rate;
}

double Payroll::getHours() { //accessor functions for rate, pay, hours;
    return _hours;
}

double Payroll::getPay() {
    if (_hours < 60) {
        _totalPay = _hours * _rate;
    } else{
        cout << "The hours are not valid; Please enter a value less than 60.\n"; //user input validation
}
    return _totalPay;
}

double Payroll::changeRate() {
  cout << "Please enter a new rate.\n";
  cin >> _rate;
  return _rate;
}

double Payroll::changeHours() {
    cout << "Please enter the amount of hours worked.\n"; // mutator functions for rate and hours
    cin >> _hours;
    if(_hours < 60) {
        return _hours;
    }else {
        do{
            cout << "This is not a valid number. Please enter the amount of hours worked.\n"; //  do while input validation
            cin >> _hours;
        }while(_hours > 60);
    }
    return _hours;
}
double Payroll::changePay(){
    _totalPay = _rate * _hours;
    return _totalPay;
}