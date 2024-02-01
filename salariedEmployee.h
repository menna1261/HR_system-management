#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "employee.h"
#include<iostream>
//using namespace std;


class salariedEmployee : public employee
{
    public:
        double salary;
        double get_Ssalary();
        string display_details();
        void set_Sdetails();
        salariedEmployee();
        virtual ~salariedEmployee();
        void read_employee_input();
        bool find_any();
                double calc_pay();


    protected:

    private:
};

#endif // SALARIEDEMPLOYEE_H
