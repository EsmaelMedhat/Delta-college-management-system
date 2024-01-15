#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include<windows.h>
#include<string>
using namespace std;
class person
{
    private:
    string name;
    int age=NULL;
    string adress;
string email;
string password;
public:
void set_name(string name);
void set_age(int age);
void set_adress(string adress);
void set_email(string email);
void set_password(string password);
string get_name();
string get_adress();
string get_email();
string get_password();
int get_age();
 void print();
person(string name,int age,string adress,string email,string password);
person();
};
#endif // PERSON_H
