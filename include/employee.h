#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <person.h>
#include<windows.h>
class employee : public person
{
    private:
    string salary="";
    string job;
       int bonus=0;
        public:
     void set_job(string job);
     void set_salary();
     void set_bonus();
     string get_salary();
          string get_job();

        employee();
 employee(string nme,int ge,string adess,string emil,string pasword,string jo);

void print();

};

#endif // EMPLOYEE_H
