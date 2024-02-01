#include "dentalBenefit.h"
#include<iostream>
using namespace std;
dentalBenefit::dentalBenefit()
{
    //ctor
}

dentalBenefit::~dentalBenefit()
{
    //dtor
}
void dentalBenefit::set_benefit(){
benefit::set_benefit();
cout<<"Enter dental info "<<endl;
cin>>info;


}
double dentalBenefit::calc_benefit(){

return 0.1*amount;
}
void dentalBenefit::display_benefit(){
    benefit::display_benefit();
cout<<"Benefit is "<<dentalBenefit::calc_benefit()<<endl;
cout<<"--------------------------"<<endl;
cout<<"Dental info "<<info<<endl;
cout<<"--------------------------"<<endl;

}
