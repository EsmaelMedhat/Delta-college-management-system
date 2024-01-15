#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <person.h>


class employee : public person
{
    private:
    int salary;
    string job;

    public:
        employee();
 employee(string nme,int ge,string adess,string emil,string pasword,string job);




};

#endif // EMPOLYEE_H
