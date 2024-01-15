#ifndef STUDENT_H
#define STUDENT_H
#include <person.h>
#include<windows.h>
class student : public person
{
private:
static int number;
int level=NULL;
string gpa;
int section;
string group;
 string study;
       string id;
       public:
 void set_level(int level);
void set_gpa(int management,int economy,int english,int basic,int library );
 int get_level();
void set_id(string id);
 student(string nme,int ge,string adess,string emil,string pasword,int level,string id);
int get_section();
string get_group();
string get_gpa();
string get_id();
void print();
student();
};

#endif // STUDENT_H
