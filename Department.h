#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<iostream>
using namespace std;

class Department
{
    public:
        Department();
        virtual ~Department();
        void print();
        void set_department();
         string get_depart();
        int depart_name;

    protected:

    private:
        int depart_id;

};

#endif // DEPARTMENT_H
