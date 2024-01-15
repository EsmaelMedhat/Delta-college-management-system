#include "person.h"
#include<string>
using namespace std;
person::person(){}
person::person(string name,int age,string adress,string email,string password)
{
    this->name=name;
    this->age=age;
this->adress=adress;
this->email=email;
this->password=password;
}
void person::set_name(string name){this->name=name;}
void person::set_age(int age){this->age=age;}
void person::set_adress(string adress){this->adress=adress;}
void person::set_email(string email){this->email=email;}
void person::set_password(string password){this->password=password;}
string person::get_name(){return name;}
string person::get_adress(){return adress;}
string person::get_email(){return email;}
string person::get_password(){return password;}
int person::get_age(){return age;}
void person::print(){
cout<<"    Name :"<<name<<"        "<<"            Age :"<<age<<endl;
cout<<"\n   Email :"<<email<<"   "<<"       password :"<<password<<endl;
cout<<"\n  adress :"<<adress;

}
