#include "salariedEmployee.h"
#include "employee.h"

salariedEmployee::salariedEmployee()
{
    //ctor
}

salariedEmployee::~salariedEmployee()
{
    //dtor
}

void salariedEmployee::read_employee_input(){
employee::read_employee_input();
cout<<"Enter employee's salary :";
cin>>salary;
}
double salariedEmployee::calc_pay(){
employee::calc_pay();
  return salary;

}
string salariedEmployee::display_details(){
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
    cout<<"Employee's salary is :"<<salariedEmployee::calc_pay()<<endl;
cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

}
bool salariedEmployee::find_any(){
employee::find_any();

}
