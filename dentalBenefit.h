#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include "benefit.h"
#include<iostream>
using namespace std;


class dentalBenefit : public benefit
{
    public:
        string info;
        double calc_benefit();
        void display_benefit();
        dentalBenefit();
        virtual ~dentalBenefit();
        void set_benefit();

    protected:

    private:
};

#endif // DENTALBENEFIT_H
