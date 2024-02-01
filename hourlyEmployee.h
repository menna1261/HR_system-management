#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "employee.h"
#include "benefit.h"
#include "healthbenefit.h"
#include "dentalBenefit.h"
#include "Department.h"


class hourlyEmployee : public employee
{
    public:
        void add_hours(int more_hrs);
       // double get_Hsalary();
       // string get_Hdetails();
        hourlyEmployee();
        virtual ~hourlyEmployee();
        //void set_Hdetails() ;
         string display_details();
         void read_employee_input();
         bool find_any();
        double calc_pay();

    protected:
        double hoursWorked;
        double rate;
        //healthbenefit Heal;
        //dentalBenefit Dent;
        //Department* depart;
    private:

};

#endif // HOURLYEMPLOYEE_H
