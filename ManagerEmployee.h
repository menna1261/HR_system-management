#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H
#include "salariedEmployee.h"
#include<iostream>
//using namespace std;


class ManagerEmployee : public salariedEmployee
{
    public:
        void add_bonus(double moreBonus);
        double get_Msalary();
        double get_Mdetails();
        void set_Mdetails();
        ManagerEmployee();
        virtual ~ManagerEmployee();
        void read_employee_input();
        string display_details();
            bool find_any();
                    double calc_pay();


    protected:

    private:
        double bonus;
};

#endif // MANAGEREMPLOYEE_H
