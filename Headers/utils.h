#pragma once

#include "globals.h"

inline void HighestPaidEmployee() {
    int index = 0; // Assume first person as the highest paid employee

    for ( int i = 0; i < allEmployees.size(); i++ ) {
        if (allEmployees[i].annual_salary > allEmployees[index].annual_salary ) {
            index = i ;  //update index if we find a higher salary
        }
    }
    cout << "+++++++++++++++++++++++++++++++++++" << endl;
    cout << "Details of Highest Paid Employee :" << endl;
    cout << "Name : " << allEmployees[index].first_name << "\t" << allEmployees[index].last_name << endl;
    cout << "Age : " << allEmployees[index].age << endl;
    cout << "Job Title : " << allEmployees[index].job_title << endl;
    cout << "Annual Salary : " << allEmployees[index].annual_salary << endl;
    cout << "+++++++++++++++++++++++++++++++++++" << endl;
}

inline void LowestPaidEmployee() {
    int index = 0; // Assume first person as the lowest paid employee
    for ( int i = 0; i < allEmployees.size(); i++ ) {
        if ( allEmployees[i].annual_salary < allEmployees[index].annual_salary ) {
            index = i ; //update index if we find a lower salary than first number
        }
    }
    cout << "+++++++++++++++++++++++++++++++++++" << endl;
    cout << "Details of the Lowest Paid Employee :" << endl;
    cout << "Name : " << allEmployees[index].first_name << "\t" << allEmployees[index].last_name << endl;
    cout << "Age : " << allEmployees[index].age << endl;
    cout << "Job Title : " << allEmployees[index].job_title << endl;
    cout << "Annual Salary : " << allEmployees[index].annual_salary << endl;
    cout << "+++++++++++++++++++++++++++++++++++" << endl;
}