#include "benefit.h"

benefit::benefit()
{
    //ctor
}

benefit::~benefit()
{
    //dtor
}
void benefit:: set_benefit(){
cout<<"Enter benefit amount "<<endl;
cin>>amount;
cout<<"Enter plan type ((1)basic / (2)platinum / (3)Gold )"<<endl;
cin>>plan_type;
}
void benefit:: display_benefit(){
cout<<"amount is : "<<amount<<endl;
if(plan_type==1)
{
cout<<"Plan Type : Basic"<<endl;
}
else if (plan_type==2)
{
    cout<<"Plan Type : Platinum"<<endl;

}
else
    cout<<"Plan type : Gold "<<endl;
}
