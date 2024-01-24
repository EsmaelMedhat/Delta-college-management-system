#include "employee.h"
#include<string>
#include"iostream"

using namespace std;
employee::employee()
{subject="undefined";

}
 employee::employee(string nme,int ge,string adess,string emil,string pasword,string jo):person( nme, ge, adess, emil, pasword)
{subject="undefined";
   this->job=jo;
if(job=="Doctor")
salary="9000";
else if(job=="Teaching assistant")
salary="4000";
else if(job=="Worker")
salary="3000";
else{
 salary="unknown";
}
}
void employee::set_subject(string subject){this->subject=subject;}
  string employee::get_subject(){return subject;}
     void employee::set_job(string job)
    {
        this->job=job;
    }
     void employee::set_salary(string job){
     if(job=="Doctor")
salary="9000";
else if(job=="Teaching assistant")
salary="4000";
else if(job=="Worker")
salary="3000";
else{
 salary="unknown";
}
     }
     void employee::set_bonus()
     {
     int salary2=stoi(salary);
   if(get_age()>35){
   bonus=0.20*salary2;
   }
     else{bonus=0;}
     }
          string employee::get_salary(){
     int salary2=stoi(salary);
           salary2+=bonus;
salary=to_string(salary2);
   return salary;
   }
string employee::get_job(){return job;}
void employee::print(){
person::print();
cout<<"                                Job :"<<job;
cout<<endl<<"\n  Salary :"<<salary;
cout<<"                                subject :"<<subject<<endl;
}
