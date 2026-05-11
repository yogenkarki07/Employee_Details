#pragma once

#include <vector>
#include <iostream>
#include <string>
using namespace std;

    struct employee {
        string first_name{};
        string last_name {};
        int age {};
        string job_title {};
        long annual_salary {};
    };

    vector<employee> allEmployees = {
        {"john", "Smith", 45, "surgeon", 280000},
        {"Sarah", "johnson", 32, "Nurse", 75000},
        {"Micheal", "Brown", 50, "Doctor", 190000},
        {"Emily", "Davis", 28, "Reception", 42000},
        {"David", "Wilson", 38, "Pharmacist", 125000},
        {"Jessica", "Taylor", 41, "Radiologist", 210000},
        {"Robert", "Moore", 55, "Hospital Administrator", 150000},
        {"Linda", "Anderson", 34, "Lab Technician", 62000},
        {"William", "Thomas", 29, "Physical Therapist", 85000},
        {"Karen", "Jackson", 47, "Anesthesiologist", 320000}
    };
