#include "healthbenefit.h"

healthbenefit::healthbenefit()
{
    //ctor
}

healthbenefit::~healthbenefit()
{
    //dtor
}
void healthbenefit::set_benefit(){
    benefit::set_benefit();
cout<<"Enter health benefit info : "<<endl;
cin>>info;
cout<<"Enter health benefit coverage: "<<endl;
cin>>coverage;

}
double healthbenefit::calc_benefit(){
    return 0.2*amount;
}
void healthbenefit::display_benefit(){
cout<<"Health benefit = "<<healthbenefit::calc_benefit()<<endl;
benefit::display_benefit();

cout<<"Health info : "<<info<<endl;
cout<<"Health coverage : "<<coverage<<endl;
cout<<"--------------------------"<<endl;
}
