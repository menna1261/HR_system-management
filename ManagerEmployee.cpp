#include "ManagerEmployee.h"
#include "employee.h"

ManagerEmployee::ManagerEmployee()
{
    //ctor
}

ManagerEmployee::~ManagerEmployee()
{
    //dtor
}
void ManagerEmployee::add_bonus(double moreBonus){
bonus = bonus + moreBonus;

}
void ManagerEmployee::read_employee_input(){
employee::read_employee_input();
cout<<"Enter manager's bonus : "<<endl;
cin>>bonus;

}
string ManagerEmployee::display_details(){
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
        cout<<"Manager's bonus is :"<<bonus<<endl;
    cout<<"Manager's salary is : "<<ManagerEmployee::calc_pay()<<endl;
cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

}
double ManagerEmployee::calc_pay(){
employee::calc_pay();

return salary + bonus;
}
bool ManagerEmployee:: find_any(){
employee::find_any();


}

