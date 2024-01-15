#include "student.h"
#include<string>
#include"iostream"
using namespace std;
int student::number=0;
student::student(){study="Delta information and management";number++;}
 student::student(string nme,int ge,string adess,string emil,string pasword,int level,string id):person(nme,ge,adess,emil,pasword){
study="Delta information and management";
 this->level=level;
 this->id=id;
 number++;
 }  void student::set_level(int level)
{   if(level<=4&&level>0)
   this->level=level;
else{  cout<<"invalid level";
}
}
void student::set_id(string id){this->id=id;}
 int student::get_level(){return level;}
void student::set_gpa(int management,int economy,int english,int basic,int library )
{
int average;
if(management>100||economy>100||basic>100||library>100||english>100){
  cout<<"that is not available";
}
else{

 average=management+economy+basic+library+english;
 average*=100;
 average/=500;
}
if(average>=50&&average<60)
gpa="Acceptable";
if(average>=60&&average<75)
gpa="Good";
if(average>=75&&average<85)
gpa="Very good";
if(average>=85&&average<=100)
gpa= "Excellent";
if(average<50)
gpa= "Fallen";
}
string student::get_id(){return id;}
int student::get_section()
{
section=number/20;
  section+=1;
   return section;

}
string student::get_group(){
if(number>=1&&number<=100)
return "A";
else if(number>100&&number<=200)
return "B";
else if(number>200&&number<=300)
return "C";
else{return "D";}
}
string student::get_gpa(){return gpa;}
void student::print(){
 person::print();
cout<<"                              level :"<<get_level()<<endl;
cout<<"\n   group :"<<get_group()<<"                                section :"<<get_section()<<endl;
cout<<"\n collage :"<<study<<endl;
//cout<<<<

cout<<"\n      Id :"<<id<<"                              GPA  :"<<gpa<<"\n\n";
}
