#include "hourlyEmployee.h"
#include "employee.h"
#include "benefit.h"
#include "healthbenefit.h"
#include "dentalBenefit.h"
#include"Department.h"

hourlyEmployee::hourlyEmployee()
{
    //ctor
}

hourlyEmployee::~hourlyEmployee()
{
    //dtor
}

 void hourlyEmployee::read_employee_input()
 {
     employee::read_employee_input();
      cout<<"Enter hours worked : ";
      cin>>hoursWorked;
      cout<<endl;
      cout<<"Enter rate : ";
      cin>>rate;

}
void hourlyEmployee::add_hours(int more_hrs){
    hoursWorked = hoursWorked + more_hrs;
}

double hourlyEmployee::calc_pay(){
employee::calc_pay();

 return rate*hoursWorked;
}
    string hourlyEmployee::display_details(){
    cout<<"ID : "<<m_id<<endl;
 if(department_ID==100)
    cout<<"Department : IT"<<endl;
else if(department_ID==101)
        cout<<"Department : Cs"<<endl;
else if(department_ID==102)
    cout<<"Department : game dev"<<endl;
else
    cout<<"Invalid ID "<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Phone : "<<phone<<endl;
    cout<<"email : "<<email<<endl;
    cout<<"Job title : "<<jobTitle<<endl;
    cout<<"Hours worked : "<<hoursWorked<<endl;
    cout<<"Rate : "<<rate<<endl;
    cout<<"salary is "<<hourlyEmployee::calc_pay()<<endl;

cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
 }

bool hourlyEmployee::find_any(){
    employee::find_any();
}

