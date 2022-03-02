//
// Created by Aaron Shabon on 2/14/22.
//
#pragma once
class Payroll {
private:
    double _rate, _hours, _totalPay; //declare variables
public:
    Payroll();
    Payroll(double rate, double hours, double totalPay); //constructors and destructors
    ~Payroll();

    double getRate();
    double getHours(); //accessor function prototype
    double getPay();

    double changeRate(); //mutator function prototype
    double changeHours();
    double changePay();

};


