#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
#include<iostream>
#include"benefit.h"
using namespace std;

class employee
{
    public:
         int m_id;
        virtual string display_details()=0;
        virtual double get_salary();
       virtual double calc_pay();
        employee();
        virtual void read_employee_input();
        void set_employee_id(int);
       // virtual ~employee();
        int get_employee_id();
         virtual bool find_any();

    protected:
        int department_ID;
        string name;
        string phone;
        string email;
        string jobTitle;
        benefit**benefit_info;



    private:
        //benefit benifitList;
};

#endif // EMPLOYEE_H
