#include "Hrsystem.h"
#include"employee.h"
#include "hourlyEmployee.h"
#include "salariedEmployee.h"
#include "commissionEmployee.h"
#include "ManagerEmployee.h"
#include "dentalBenefit.h"
#include "healthbenefit.h"
#include "Department.h"
#include"benefit.h"

Hrsystem::Hrsystem(int employee_size)
{
    m_size = employee_size;
    employee_list= new employee*[m_size];
    benfit_list=new benefit*[m_size];

    m_count=0;
    D_count=0;
    H_count=0;
}
hourlyEmployee *new_Hemployee= new hourlyEmployee();
salariedEmployee *new_Semployee= new salariedEmployee();
commissionEmployee *new_Cemployee= new commissionEmployee();
ManagerEmployee *new_Memployee= new ManagerEmployee();
dentalBenefit *new_Hbenfit_list=new dentalBenefit();
dentalBenefit *new_Cbenfit_list=new dentalBenefit();
dentalBenefit *new_Mbenfit_list=new dentalBenefit();
dentalBenefit *new_Sbenfit_list=new dentalBenefit();
healthbenefit *new_H_benefit =new healthbenefit();
healthbenefit *new_S_benefit =new healthbenefit();
healthbenefit *new_C_benefit =new healthbenefit();
healthbenefit *new_M_benefit =new healthbenefit();


//benefit*Benefit=new benefit();
Hrsystem::~Hrsystem()
{
    delete [] employee_list;

}
void Hrsystem:: add()
{
    int x;
    cout<<"Enter employee's type : "<<endl;
    cout<<"(1)Hourly\n(2)Salaried\n(3)Commission\n(4)Manager"<<endl;
    cin>>x;
    switch(x)
    {
    case (1):
    {
        int z ;
        new_Hemployee->read_employee_input();
        employee_list[m_count++] =  new_Hemployee;

       cout<<"Enter type of benefit :(1)Health (2)Dental "<<endl;
        cin>>z;
        switch (z)
        {
        case(1):
            {
           new_H_benefit->set_benefit();
           benfit_list[H_count++]=new_H_benefit;
            }
            break;
        case(2):
            {
            new_Hbenfit_list->set_benefit();
           benfit_list[D_count++]=new_Hbenfit_list;
            }
            break;
        }


    }
    break;
    case (2):
    {
        new_Semployee->read_employee_input();
       // depart.set_department();

        cout<<"Enter type of benefit :(1)Health (2)Dental "<<endl;
        int z ;
        cin>>z;
        switch (z)
        {
        case(1):
            {
           new_H_benefit->set_benefit();
           benfit_list[H_count++]=new_H_benefit;
            }
            break;
        case(2):
            {
            new_Hbenfit_list->set_benefit();
           benfit_list[D_count++]=new_Hbenfit_list;
            }
            break;
        }

        employee_list[m_count++] =  new_Semployee;
    }
    break;
    case (3):
    {
        new_Cemployee->read_employee_input();
       // depart.set_department();
        cout<<"Enter type of benefit :(1)Health (2)Dental "<<endl;
        int z ;
        cin>>z;
        switch (z)
        {
        case(1):
            {
           new_H_benefit->set_benefit();
           benfit_list[H_count++]=new_H_benefit;
            }
            break;
        case(2):
            {
            new_Hbenfit_list->set_benefit();
           benfit_list[D_count++]=new_Hbenfit_list;
            }
            break;
        }


        employee_list[m_count++] =  new_Cemployee;
    }
    break;
    case (4):
    {
        new_Memployee->read_employee_input();
       // depart.set_department();
        cout<<"Enter type of benefit :(1)Health (2)Dental "<<endl;
        int z ;
        cin>>z;
        switch (z)
        {
        case(1):
            {
           new_H_benefit->set_benefit();
           benfit_list[H_count++]=new_H_benefit;
            }
            break;
        case(2):
            {
            new_Hbenfit_list->set_benefit();
           benfit_list[D_count++]=new_Hbenfit_list;
            }
            break;
        }


        employee_list[m_count++] =  new_Memployee;
    }
    break;

    }
}
///////////////////////////////////////////////////////////////////
void Hrsystem::show_all()
{
    if(m_count==0)
    {
        cout<<"NO Employee exist"<<endl;
        return;
    }
    for(int i=0; i<m_count; i++)
    {
        employee_list[i]->display_details();
       benfit_list[i]->display_benefit();

    }


}
/////////////////////////////////////////////////////////////////////
void Hrsystem::del_employee(int employee_id)
{
    if(m_count==0)
    {
        cout<<"No employee exist"<<endl;
        return;
    }
    bool deleted =false;
    for(int i=0; i<m_count; ++i)
    {

        if(employee_list[i]->m_id==employee_id)
        {
            if(i==m_count-1)
                m_count--;
            else
            {
                employee_list[i]=employee_list[m_count--];
                m_count--;
            }
            deleted=true;
            break;
        }

    }
    if(deleted==true)
        cout<<"Employee has been deleted successfully"<<endl;
    else
        cout<<"No employee exist"<<endl;
}
//////////////////////////////////////////////////////////////////////////

void Hrsystem::edit_employee(int employee_id)
{

    if(m_count==0)
    {
        cout<<"NO employee exists \n";
        return;
    }
    bool edited = false;
    for(int i=0 ; i<m_count; ++i)
    {

        if(employee_list[i]->m_id==employee_id)
        {
            cout<<"Choose type of employee (1:4)\n";
            int x;
            cin>>x;
            switch (x)
            {
            case(1):
            {
                new_Hemployee->read_employee_input();

                cout<<"Enter type of benefit :(1)Health (2)Dental "<<endl;
        int z ;
        cin>>z;
        switch (z)
        {
        case(1):
            {
           new_H_benefit->set_benefit();
            }
            break;
        case(2):
            {
            new_Hbenfit_list->set_benefit();
            }
            break;
        }
            }
            break;
            case (2):
            {
                new_Semployee->read_employee_input();

                cout<<"Enter type of benefit :(1)Health (2)Dental "<<endl;
        int z ;
        cin>>z;
        switch (z)
        {
        case(1):
            {
           new_H_benefit->set_benefit();
           benfit_list[H_count++]=new_H_benefit;
            }
            break;
        case(2):
            {
            new_Hbenfit_list->set_benefit();
           benfit_list[D_count++]=new_Hbenfit_list;
            }
            break;
        }
            }
            break;
            case (3):
            {
                new_Cemployee->read_employee_input();

                cout<<"Enter type of benefit :(1)Health (2)Dental "<<endl;
        int z ;
        cin>>z;
        switch (z)
        {
        case(1):
            {
           new_H_benefit->set_benefit();
           benfit_list[H_count++]=new_H_benefit;
            }
            break;
        case(2):
            {
            new_Hbenfit_list->set_benefit();
           benfit_list[D_count++]=new_Hbenfit_list;
            }
            break;
        }
            }

            break;
            case (4):
            {
                new_Memployee->read_employee_input();

                cout<<"Enter type of benefit :(1)Health (2)Dental "<<endl;
        int z ;
        cin>>z;
        switch (z)
        {
        case(1):
            {
           new_H_benefit->set_benefit();
           benfit_list[H_count++]=new_H_benefit;
            }
            break;
        case(2):
            {
            new_Hbenfit_list->set_benefit();
           benfit_list[D_count++]=new_Hbenfit_list;
            }
            break;
        }
            }
            break;
            }
            edited =true;
            break;
        }
    }
    if(edited==true)
        cout<<"Employee has been edited successfully"<<endl;
    else
        cout<<"No employee exist";

}

/////////////////////////////////////////////////////////
void Hrsystem::find_employee()
{
    if(m_count==0)
    {
        cout<<"No employees exist "<<endl;
        return;
    }
    int found=0;
    int choice;
    for(int i=0; i<m_count; i++)
    {
        if(employee_list[i]->find_any()==true)
        {
            cout<<"FOUND ";
            employee_list[i]->display_details();
            found++;
            break;
        }
    }
    if(found==0)
        cout<<"NOT FOUND\n";
    else
        cout<<"FOUND ";
}
//////////////////////////////////////////////////////////////////////////
void Hrsystem::calcTotalPayroll()
{
    int pay =0;
    if(m_count==0)
        cout<<"No employees yet "<<endl;
    double payroll;
    for(int i=0 ; i<m_count; i++)
    {

        payroll+=employee_list[i]->calc_pay();
        pay++;

    }
    if(pay==1)
        cout<<"Total Payroll = "<<payroll<<endl;
    else
        return;
}




