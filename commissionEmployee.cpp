#include "commissionEmployee.h"
#include "employee.h"


commissionEmployee::commissionEmployee()
{
    //ctor
}

commissionEmployee::~commissionEmployee()
{
    //dtor
}
double commissionEmployee::calc_pay(){
    employee::calc_pay();

return rate*target;

}
string commissionEmployee::display_details(){
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
    cout<<"Rate is "<<rate<<endl;
cout<<"Target is "<<target<<endl;
cout<<"Employee's salary is "<<commissionEmployee::calc_pay()<<endl;
cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

}
void commissionEmployee::read_employee_input(){
employee::read_employee_input();
cout<<"Enter employee's rate : "<<endl;
cin>>rate;
cout<<"Enter employee's target : "<<endl;
cin>>target;

}
bool commissionEmployee:: find_any(){
employee::find_any();


}
