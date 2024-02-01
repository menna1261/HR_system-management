#ifndef BENEFIT_H
#define BENEFIT_H
#include<iostream>
using namespace std;


class benefit
{
    public:
        virtual void set_benefit();
        double calc_benefit();
        virtual void display_benefit();
        benefit();
        virtual ~benefit();

    protected:
int plan_type;
double amount;

    private:
};

#endif // BENEFIT_H
