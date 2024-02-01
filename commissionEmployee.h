#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "employee.h"
#include<iostream>
//using namespace std;


class commissionEmployee : public employee
{
    public:
        double target;
        double rate;
        double get_Csalary();
        string display_details();
        void set_details();
        commissionEmployee();
        virtual ~commissionEmployee();
        void read_employee_input();
        bool find_any();
        double calc_pay();

    protected:

    private:
};

#endif // COMMISSIONEMPLOYEE_H
