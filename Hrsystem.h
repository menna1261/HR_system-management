#ifndef HRSYSTEM_H
#define HRSYSTEM_H
#include "employee.h"
#include "dentalBenefit.h"
#include "healthbenefit.h"
#include "Department.h"



class Hrsystem
{
    public:
        Hrsystem(int);
        virtual ~Hrsystem();
        void calcTotalPayroll();
        //void add_employee();
        void edit_employee(int);
        void del_employee(int);
        void find_employee();
        void show_all();
        void add();
      void print_benefit();
      void BenefitManagement();
void Department_Management();


    protected:

    private:
       // employee * employee_list;
        int m_count,D_count,H_count;
        int m_employees;
        int m_size;
        employee**employee_list;
        dentalBenefit* dental;
        healthbenefit* health;
        Department depart;
        //benefit**benefitptr;
        benefit** benfit_list;
};

#endif // HRSYSTEM_H
