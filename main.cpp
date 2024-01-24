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
string student_user;
void run();
void tomenu_as_doctor();
void tomenu_as_student();
void tomenu_as_owner();
int exit(){
return 0;}
void Def(){
student studentsmodel[8]={student("Esmael medhat omar mohamed alhabiby",19,"Samanod","123456@dhic.edu.eg","dang0",1,"0320975812"),student("Ahmed badawy elsayed",19,"Samanod","1234415@dhic.edu.eg","01093ks",1,"0329025812"),student("Ahmed mohamed abd elmotaleb",19,"Samanod","12415@dhic.edu.eg","010ks",1,"32090908782"),student("Asraf badawy elsayed",19,"Samanod","12223415@dhic.edu.eg","0v1d3ks",1,"120923322"),student("Ahmed ibrahim elsayed",19,"Elmansoura","12dkds5@dhic.edu.eg","0109wsks",1,"2200099"),student("Ahmed mohmoud ail",19,"cairo","12df3@dhic.edu.eg","01asd093ks",1,"223339"),student("Ahmed ali elhabiby",19,"Samanod","1faaf15@dhic.edu.eg","0109ss3ks",1,"224449"),student("Omar medhat elsayed",22,"Samanod","122145441@dhic.edu.eg","010donr93ks",1,"4453399")};
employee employeemodel[8]={employee("Abd elwahab elraii",55,"Tanta","abdalwahab@dhic.edu.eg","lfdjod90","Doctor"),employee("Mohamed ail mohsen",24,"elmansora","Mohamedali@dhic.edu.eg","kfll19","Teaching assistant"),employee("Nehad mohamed elgamal",59,"Tanta","Nehadmohamed@dhic.edu.eg","iukkds234","Doctor"),employee("Ahmed mohamed elgamal",44,"Tanta","ahmedmohamed@dhic.edu.eg","kldk0432","Doctor"),employee("elsayed ali mohamed" ,39,"Banha","elsayedali@dhic.edu.eg","wlba23","Doctor"),employee("Idrahim elnewery",50,"Behbet elhegara","ibrahim@dhic.edu.eg","iow45","Worker"),employee("mohamed elsayedali",28,"Cairo","mohamedelsayed@dhic.edu.eg","ljlf032","Teaching assistant"),employee("Esmael mohmoud",44,"samanod","esmaelmoamed@dhic.edu.eg","sdfawq23","Worker")};
employeemodel[0].set_subject("Managment");
employeemodel[1].set_subject("Managment");
employeemodel[2].set_subject("OP system");
employeemodel[3].set_subject("Economy");
employeemodel[4].set_subject("English");
employeemodel[6].set_subject("Basics of computer");
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
void teaching_staff(){

all_menu();
for(int i=0;i<employees.size();i++){
if(employees[i].get_job()!="Worker")
{cout<<"\n";
  cout<<"\nName    :"<<employees[i].get_name()<<endl;
  cout<<"\n Job    :"<<employees[i].get_job()<<endl;
 cout<<"\nsubject :"<<employees[i].get_subject()<<endl;
}
 }
}
void about_faculty(){
cout << "Delta Business Information Systems College (DBIS)" << endl;
 cout << "----------------------------------------------" << endl;
 cout << "- Private higher education institution in Mansoura, Egypt." << endl;
 cout << "- Established in 2000." << endl;
 cout << "- Affiliated with the Delta University for Science and Technology." << endl;
 cout << "- Offers undergraduate programs in:" << endl;
 cout << "    - Business Information Systems" << endl;
 cout << "    - Accounting and Auditing" << endl;
 cout << "- Vision: To be a leading local and regional institution with outstanding educational programs." << endl;
 cout << "- Mission: To prepare graduates for the job market and contribute to solving societal problems." << endl;
 cout << "- Admission requirements:" << endl;
 cout << "    - Egyptian high school diploma with good grades in math and English." << endl;
 cout << "    - Equivalent international or commercial high school diploma." << endl;
 cout << "    - Technical high school diploma in business administration and services." << endl;
 cout << "- Qualified faculty and modern campus with state-of-the-art facilities." << endl;
 cout << "- Graduates are in high demand in the job market." << endl;
 cout << "- Excellent option for careers in business information systems, accounting, and auditing." << endl;
}
void student_page(){
cout<<"                    "<<student_user<<"\n";all_menu();
cout<<"\n\n";
cout<<"    1: Teaching staff  "<<endl;
cout<<"    2: Your Gpa"<<endl;
cout<<"    3: About faculty     "<<endl;
cout<<"    4: Log out"<<endl;
cout<<"    5: Exit    "<<endl;
}
 void get_gpa(){
all_menu();
 for(int i=0;i<students.size();i++)
 {
   if(student_user==students[i].get_name())
     {
     cout<<"\nName :"<<students[i].get_name()<<endl;
         cout<<" Gpa  : "<<students[i].get_gpa()<<endl;
    break;
    }
 }
 }
 void student_run(){
char check1;
string choice;
student_page();
cout<<"\nyour choice :";
cin>>choice;
if(choice=="1"){
system("cls");
teaching_staff();
tomenu_as_student();
}
if(choice=="2")
{  system("cls");
    get_gpa();
tomenu_as_student();
}
if(choice=="3"){
  system("cls");
   about_faculty();
tomenu_as_student();
}
if(choice=="4"){
char check;
cout<<"\nAre your sure to log out?\n";
cout<<"1:Yes   or Any num to NO \n";
cin>>check;
if(check=='1'){
system("cls");
run();}
else{system("cls");student_run();}
}
if(stoi(choice)>0&&stoi(choice)<5)
{
system("cls");
student_run();}
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
student_run();
}
 }
void adds_employee(employee employeemodel){
string name,adress,email,password,job,subject,check8;
    int age;
    cout<<"\n  name : \n";
cin.ignore(1,'\n');
getline(cin,name);
cout<<"      age  :\n";
cin>>age;
cin.ignore(1,'\n');
cout<<"   adress  :\n";
getline(cin,adress);
cout<<"    email  :\n";
getline(cin,email);
cout<<" password  :\n";
getline(cin,password);
cout<<"   job  :\n";
getline(cin,job);
cout<<" subject  :\n";
getline(cin,subject);
employeemodel.set_name(name);
employeemodel.set_age(age);
employeemodel.set_adress(adress);
employeemodel.set_email(email);
employeemodel.set_password(password);
employeemodel.set_job(job);
employeemodel.set_salary(job);
employeemodel.set_subject(subject);
cout<<"Are you sure to Adding or not ?\n";
cout<<"1:Yes   or  Any num to NO \n";
cin>>check8;
if(check8=="1")
employees.push_back(employeemodel);
}
void add_employee(){
all_menu();
string check;employee model;
cout<<"\n1:Specific number of employee          2:not\n";
cout<<"youe choice :";
cin>>check;
if(check=="1")
{
int num2=0;
string num;int check2=0;
cout<<"enter employee number you want to register ?\n";
cin>>num;
system("cls");
all_menu();
cout<<"                   "<<num<<"  employee \n";
do{
++num2;
cout<<"employee "<<num2<<endl;
adds_employee(model);
}while(num2<stoi(num));
}
else{
static int m=0;
do{
m++;
cout<<"employee "<<m<<endl;
 adds_employee(model);
cout<<"1:Add again  or Any num to menu\n";
cin>>x;
}while(x=="1");
}
}
void show_data_to_owner(){
all_menu();
string name,check,m="0";
cout<<"\n1:Specific number of employee          2:show all data\n";
cout<<"youe choice :";
cin>>check;
if(check=="1")
{
    cout<<"give me employee name\n";
cin.ignore(1,'\n');
getline(cin,name);
for(int i=0;i<employees.size();i++)
{
    if(name==employees[i].get_name())
    {
        employees[i].print();
    break;
    }
   else{
    if(i==employees.size()-1)
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
    show_data_to_owner();
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
for(int i=0;i<employees.size();i++)
    {
       cout<<"Employee :"<<i+1<<"\n\n";
         employees[i].print();
          cout<<endl;
 }
}
}
void owner_page(){
cout<<"                    "<<"Malek Elowner"<<"\n";
all_menu();
cout<<"\n\n";
cout<<"     1: Registration new employee"<<endl;
cout<<"     2: Show data and search    "<<endl;
cout<<"     3: About faculty     "<<endl;
cout<<"     4: Log out"<<endl;
cout<<"Anynum: Exit     "<<endl;
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
student_user=students[i].get_name();
student_run();
break;
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
void owner_run(){
char check1;
string choice;
owner_page();
cout<<"\nyour choice :";
cin>>choice;
if(choice=="1"){
system("cls");
add_employee();
tomenu_as_owner();
}
if(choice=="2")
{  system("cls");
    show_data_to_owner();
tomenu_as_owner();
}
if(choice=="3"){
  system("cls");
   about_faculty();
tomenu_as_owner();
}
if(choice=="4"){
char check;
cout<<"\nAre your sure to log out?\n";
cout<<"1:Yes   or Any num to NO \n";
cin>>check;
if(check=='1'){
system("cls");
run();}
else{system("cls");owner_run();}
}
if(stoi(choice)>0&&stoi(choice)<5)
{
system("cls");
owner_run();}
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
owner_run();
}




}
void login_as_owner(string email,string password)
{
   char check;
   if(email=="esmaelalhabiby@gmail.com"&&password=="01556080613")
    {
   cout<<"\nloading";
for(int h=0;h<5;h++)
{cout<<'.';Sleep(1000);}
system("cls");
owner_run();
     //owner menu
    }
    else{
   cout<<"\nloading";
for(int h=0;h<5;h++)
{cout<<'.';Sleep(1000);}
      cout<<"\nNot found\n";
    cout<<"1:Retry  any num to exit\n";
    cout<<"your choice :";
    cin>>check;

    }
if(check=='1')
{
    system("cls");
login_as_owner(::email,::password);
}
else{cout<<exit();}

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
void tomenu_as_student(){
char check;
cout<<"1 : To menu   or any num to exit\n";
cout<<"your choice :";
cin>>check;
if(check=='1')
{    system("cls");
student_run();
}
else{
    cout<<exit();
}
}
void tomenu_as_owner(){
char check;
cout<<"\n1 : To menu   or any num to exit\n";
cout<<"your choice :";
cin>>check;
if(check=='1')
{    system("cls");
owner_run();
}
else{
    cout<<exit();
}
}
