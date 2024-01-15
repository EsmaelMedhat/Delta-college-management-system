#include"iostream"
#include<employee.h>
#include<vector>
#include<student.h>
#include<windows.h>
using namespace std;
string doctor_check;
string doctor_user;
vector<student>students;
vector<employee>employees;
string email,password;
string choice;
string x;
void run();
void tomenu_as_doctor();

int exit(){
return 0;}
void Def(){
student studentsmodel[8]={student("Esmael medhat omar mohamed alhabiby",19,"Samanod","123456@dhic.edu.eg","dang0",1,"0320975812"),student("Ahmed badawy elsayed",19,"Samanod","1234415@dhic.edu.eg","01093ks",1,"0329025812"),student("Ahmed mohamed abd elmotaleb",19,"Samanod","12415@dhic.edu.eg","010ks",1,"32090908782"),student("Asraf badawy elsayed",19,"Samanod","12223415@dhic.edu.eg","0v1d3ks",1,"120923322"),student("Ahmed ibrahim elsayed",19,"Elmansoura","12dkds5@dhic.edu.eg","0109wsks",1,"2200099"),student("Ahmed mohmoud ail",19,"cairo","12df3@dhic.edu.eg","01asd093ks",1,"223339"),student("Ahmed ali elhabiby",19,"Samanod","1faaf15@dhic.edu.eg","0109ss3ks",1,"224449"),student("Omar medhat elsayed",22,"Samanod","122145441@dhic.edu.eg","010donr93ks",1,"4453399")};
employee employeemodel[8]={employee("Abd elwahab elraii",55,"Tanta","abdalwahab@dhic.edu.eg","lfdjod90","Doctor"),employee("Mohamed ail mohsen",24,"elmansora","Mohamedali@dhic.edu.eg","kfll19","Teaching assistant"),employee("Nehad mohamed elgamal",59,"Tanta","Nehadmohamed@dhic.edu.eg","iukkds234","Doctor"),employee("Ahmed mohamed elgamal",44,"Tanta","ahmedmohamed@dhic.edu.eg","kldk0432","Doctor"),employee("elsayed ali mohamed" ,39,"Banha","elsayedali@dhic.edu.eg","wlba23","Doctor"),employee("Idrahim elnewery",50,"Behbet elhegara","ibrahim@dhic.edu.eg","iow45","Worker"),employee("mohamed elsayedali",28,"Cairo","mohamedelsayed@dhic.edu.eg","ljlf032","Teaching assistant"),employee("Esmael mohmoud",44,"samanod","esmaelmoamed@dhic.edu.eg","sdfawq23","Worker")};
for(int i=0;i<8;i++)
{
      students.push_back(studentsmodel[i]);
employees.push_back(employeemodel[i]);
}
}
void all_menu(){
    cout<<"______________________________________________________________\n";
cout<<"\n_______________Delta information and managment________________\n";
cout<<"\n______________________________________________________________\n";

}
void student_page(){
all_menu();
cout<<"\n\n";
cout<<"    1: Doctors and Subjects "<<endl;
cout<<"    2: Your grade and Gpa"<<endl;
cout<<"    3: Courses    "<<endl;
cout<<"    4: Book and reference     "<<endl;
cout<<"    5: About faculty"<<endl;
cout<<"    6: Log out"<<endl;
cout<<"    7: Exit    "<<endl;

}
void adds_student(student modelstudent)
{

    string name,adress,email,password,group,id,study,check8;
    int age,level,section;


cout<<"\n  name : \n";
cin.ignore(1,'\n');
getline(cin,name);
cout<<"      age  :\n";
cin>>age;
cin.ignore(1,'\n');
cout<<"   adress  :\n";
getline(cin,adress);
cout<<"    level  :\n";
cin>>level;
cin.ignore(1,'\n');
cout<<"    email  :\n";
getline(cin,email);
cout<<" password  :\n";
getline(cin,password);
cout<<"   id  :\n";
getline(cin,id);
modelstudent.set_name(name);
modelstudent.set_age(age);
modelstudent.set_adress(adress);
modelstudent.set_email(email);
modelstudent.set_password(password);
modelstudent.set_id(id);
modelstudent.set_level(level);
cout<<"Are you sure to Adding or not ?\n";
cout<<"1:Yes   or  Any num to NO \n";
cin>>check8;
if(check8=="1")
students.push_back(modelstudent);
}

void add_student(){
all_menu();
string check;student model;
cout<<"\n1:Specific number of student          2:not\n";
cout<<"youe choice :";
cin>>check;
if(check=="1")
{
int num2=0;
string num;int check2=0;
cout<<"enter student number you want to register ?\n";
cin>>num;
system("cls");
all_menu();
cout<<"                   "<<num<<"  Students \n";
do{
++num2;
cout<<"student "<<num2<<endl;
adds_student(model);
}while(num2<stoi(num));
}
else{
static int m=0;
do{
m++;
cout<<"student "<<m<<endl;
 adds_student(model);
cout<<"1:Add again  or Any num to menu\n";
cin>>x;
}while(x=="1");
}
}
void record_student_grade()
{string j;
   all_menu();
string id;string m="0";
cout<<"give me student id\n";
    cin>>id;
   for(int i=0;i<students.size();i++)
    {
  if(id==students[i].get_id())
{
 int management,economy,english,basic,library;
 cout<<"\nloading";
for(int h=0;h<4;h++)
{cout<<'.';Sleep(100);}
      system("cls");
   all_menu();   cout<<"\nstudent name :"<<students[i].get_name()<<endl;
    cout<<"\n\nmanagement :";
   cin>>management;
    cout<<"\n economy :";
   cin>>economy;
    cout<<"\n english :";
    cin>>english;
    cout<<"\n   basic :";
    cin>>basic;
    cout<<"\n library :";
    cin>>library;
    students[i].set_gpa(management,economy,english,basic,library );
cout<<"\n\nsuccessed\n";
cout<<"\n1:Contiue   \n";
cin>>j;
if(j=="1"){
system("cls");
record_student_grade();
}
else{tomenu_as_doctor();}
break;
}
else{
if(i==students.size()-1)
{       cout<<"\nloading";
for(int h=0;h<4;h++)
{cout<<'.';Sleep(100);}
            cout<<"\nNot found\n";
    cout<<"1:Retry  any num to exit\n";
    cout<<"your choice :";
    cin>>m;
    }
}
}if(m=="1"){
system("cls");
record_student_grade();}
else{cout<<exit();}
      }
void show_data(){
all_menu();
string id,check,m="0";
cout<<"\n1:Specific number of student          2:show all data\n";
cout<<"youe choice :";
cin>>check;
if(check=="1")
{
    cout<<"give me student id\n";
cin>>id;

for(int i=0;i<students.size();i++)
{
    if(id==students[i].get_id())
    {
        students[i].print();
    break;
    }
   else{
    if(i==students.size()-1)
    {
    {       cout<<"\nloading";
for(int h=0;h<4;h++)
{cout<<'.';Sleep(100);}
            cout<<"\nNot found\n";
    cout<<"1:Retry  any num to exit\n";
    cout<<"your choice :";
    cin>>m;

    }
   if(m=="1")
    {
        system("cls");
    show_data();
    }
    else{
        cout<<exit();
  }

 }
}
}
}
else{
           cout<<"\nloading";
for(int h=0;h<4;h++)
{cout<<'.';Sleep(100);}
system("cls");
all_menu();
for(int i=0;i<students.size();i++)
    {
       cout<<"student :"<<i+1<<"\n\n";
         students[i].print();
          cout<<endl;
          }
}

//run doctor
}
void doctor_page(){
cout<<"                    "<<doctor_user<<"\n";
all_menu();
cout<<"\n\n";
cout<<"     1: Registration new student"<<endl;
cout<<"     2: Recording students grade"<<endl;
cout<<"     3: Show data and search    "<<endl;
cout<<"     4: Log out"<<endl;
cout<<"Anynum: Exit     "<<endl;
}
void first_menu(){
all_menu();
cout<<"\n\n\n\n";
cout<<"     1 Doctor        2 Student            3 Owner           4 Exit  ";
cout<<"\n\n\n\n";
cout<<"Your choice :";
cin>>choice;
}
void doctor_run(){
char check1;
string choice;
doctor_page();
cout<<"\nyour choice :";
cin>>choice;
if(choice=="1"){
system("cls");
add_student();
tomenu_as_doctor();
}
if(choice=="2")
{  system("cls");
    record_student_grade();
}
if(choice=="3"){
  system("cls");
    show_data();
tomenu_as_doctor();
}
if(choice=="4"){
char check;
cout<<"\nAre your sure to log out?\n";
cout<<"1:Yes   or Any num to NO \n";
cin>>check;
if(check=='1'){
system("cls");
run();}
else{system("cls");doctor_run();}
}
if(stoi(choice)>0&&stoi(choice)<5)
{
system("cls");
doctor_run();}
else{
char check;
cout<<"\nAre your sure to exit?\n";
cout<<"1:Yes   or Any num to NO \n";
cin>>check;
}
if(check1=='1')
{
    cout<<exit();
}
else{
  system("cls");
doctor_run();
}

}
void input_email_password();
void login_as_doctor(string email,string password){
int chek=0;int m;
for(int i=0;i<employees.size();i++)
{if(employees[i].get_job()=="Doctor"&&employees[i].get_email()==email){chek++;}
      if(employees[i].get_email()==email&&employees[i].get_password()==password)
    {
  chek++;
    }
if(chek==2){
cout<<"\nloading";
for(int h=0;h<5;h++)
{cout<<'.';Sleep(1000);}
system("cls");
doctor_user=employees[i].get_name();
doctor_run();
break;}
else{ if(i==employees.size()-1){
cout<<"\nloading";
for(int h=0;h<5;h++)
{cout<<'.';Sleep(1000);}
      cout<<"\nNot found\n";
    cout<<"1:Retry  any num to exit\n";
    cout<<"your choice :";
    cin>>m;
   }
}
if(m==1)
{
system("cls");
input_email_password();
login_as_doctor(::email,::password);
}

chek=0;
}
}
void login_as_student(string email,string password){
int m;
for(int i=0;i<students.size();i++)
{
  if(students[i].get_email()==email&&students[i].get_password()==password)
{
cout<<"\nloading";
for(int h=0;h<5;h++)
{cout<<'.';Sleep(1000);}
system("cls");
cout<<"                    "<<students[i].get_name()<<"\n";
student_page();
break;   //student menu
}
else{if(i==students.size()-1)
    {
    cout<<"\nloading";
for(int h=0;h<5;h++)
{cout<<'.';Sleep(1000);}
      cout<<"\nNot found\n";
    cout<<"1:Retry  any num to exit\n";
    cout<<"your choice :";
    cin>>m;
    }
if(m==1)
{
system("cls");
input_email_password();
login_as_student(::email,::password);
}

}
}
}
void login_as_owner(string email,string password)
{
   if(email=="esmaelalhabiby@gmail.com"&&password=="01556080613")
    {
     //owner menu
    }
    else{
   //try again or exit
      cout<<"there is no exist";
    }
}
void checkinput_email_password()
{
if(choice=="1"){
login_as_doctor(email,password);}
 if(choice=="2"){
login_as_student(email,password);}
 if(choice=="3"){
login_as_owner(email,password);}

}





int main(){
run();
 return 0;}


void input_email_password(){
if(stoi(choice)<4){
cout<<"                                         Login    ";
cout<<"\n\n\n\n          Email :";
cin>>email;
cout<<"\n\n       Password :";
cin>>password;
}
else{exit();}
}
void tomenu_as_doctor(){
cout<<"1 : To menu   or any num to exit\n";
cout<<"your choice :";
cin>>doctor_check;
if(doctor_check=="1")
{
    system("cls");
doctor_run();
}
else{
    cout<<exit();
}
}
void run(){
 Def();
  first_menu();
    system("cls");
    input_email_password();
    checkinput_email_password();
}
