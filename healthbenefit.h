#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H
#include "benefit.h"
#include<iostream>
using namespace std;



class healthbenefit : public benefit
{
    public:
        double calc_benefit();
        void display_benefit();
        healthbenefit();
        virtual ~healthbenefit();
        void set_Hbenefit();
        void set_benefit();
    protected:

    private:
        string info;
        string coverage;
};

#endif // HEALTHBENEFIT_H
