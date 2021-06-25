#include <bits/stdc++.h>
using namespace std;

class School
{
private:
    string nameS;
    string dateS;
public:
    friend class Faculty;
};

class Faculty
{
private:
    string nameF;
    string dateF;
    School x;
public:
    void input();
    void output();
    friend class Student;
};

void Faculty::input()
{
    cout<<"Enter School's name: ";      fflush(stdin);      getline( cin, x.nameS);
    cout<<"Enter date: ";   fflush(stdin);      getline( cin, x.dateS);
    cout<<"Enter Faculty's name: ";     fflush(stdin);      getline( cin, nameF);
    cout<<"Enter date: ";   fflush(stdin);      getline( cin, dateF);
}

void Faculty::output()
{
    cout<<"School's name: "<<x.nameS<<endl;
    cout<<"Date: "<<x.dateS<<endl;
    cout<<"Faculty's name: "<<nameF<<"\t\tDate: "<<dateF<<endl;
}

class Person
{
protected:
    string name;
    string birth;
    string address;
public:
    Person(/* args */);
    void input();
    void output();
};

Person::Person(/* args */)
{
}

void Person::input()
{
    cout<<"Enter name: ";       fflush(stdin);      getline( cin, name);
    cout<<"Enter birth: ";      fflush(stdin);      getline( cin, birth);
    cout<<"Enter address: ";    fflush(stdin);      getline( cin, address);
}

void Person::output()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Birth: "<<birth<<endl;
    cout<<"Address: "<<address<<endl;
}

class Student : public Person
{
private:
    Faculty y;
    string Class;
    string Socre;
public:
    Student(/* args */);
    void input();
    void output();
};

Student::Student(/* args */)
{
}

void Student::input()
{
    Person::input();
    y.input();
    cout<<"Enter class: ";      fflush(stdin);      getline( cin, Class);
    cout<<"Enter score: ";      fflush(stdin);      getline( cin, Socre);
}

void Student::output()
{
    Person::output();
    y.output();
    cout<<"Class: "<<Class<<endl;
    cout<<"Score: "<<Socre<<endl;
}

int main(int argc, char const *argv[])
{
    Student K;
    K.input();
    cout<<endl;
    K.output();
    return 0;
}
