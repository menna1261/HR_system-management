#include "employee.h"
#include "hourlyEmployee.h"
#include<iostream>
#include"benefit.h"
using namespace std;

employee::employee()
{
    //ctor
}
int x;
 void employee::read_employee_input(){
     cout<<"Enter employee ID :"<<endl;
     cin>>m_id;
     cout<<"Department (IT-->100  Cs-->101  Game Dev-->102"<<endl;
     cin>>department_ID;
     cout<<"Enter employee's name : "<<endl;
     cin.ignore();
     getline(cin,name);
     cout<<"Enter employee's phone : ";
     cout<<endl;
     cin>>phone;
     cout<<"Enter employee's email : ";
     cin>>email;
     cout<<"Enter job title : ";
     cin>>jobTitle;

}
string employee::display_details(){

}
    double employee::get_salary(){

        }
    double employee::calc_pay(){

    }


//employee::~employee(){}
int employee::get_employee_id(){

return m_id;

}
bool employee::find_any(){
    string key;
    cout<<"Enter your keyword "<<endl;
    cin>>key;
    if(name.compare(key)==0)
        return true;
    else
        return false;
}
