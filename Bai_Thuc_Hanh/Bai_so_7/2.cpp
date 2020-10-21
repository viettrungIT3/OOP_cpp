#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string namePS;
    string birth;
    string address;
public:
    Person(/* args */){}
    void input();
    void output();
};

void Person::input()
{
    cout<<"Enter name: ";     fflush(stdin);      getline( cin, namePS);
    cout<<"Enter birth: ";     fflush(stdin);      getline( cin, birth);
    cout<<"Enter address: ";     fflush(stdin);      getline( cin, address);
}

void Person::output()
{
    cout<<"Name: "<<namePS<<"\tBirth: "<<birth<<endl;
}

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
    cout<<"\tEnter Faculty: "<<endl;
    cout<<"Enter name: ";   fflush(stdin);  getline( cin, nameF);
    cout<<"Enter Date: ";   fflush(stdin);  getline( cin, dateF);
    cout<<"Enter School's name: ";          fflush(stdin);  getline( cin, x.nameS);
    cout<<"Enter School's birth: ";         fflush(stdin);  getline( cin, x.dateS);
}

void Faculty::output()
{
    cout<<"Display Faculty: "<<endl;
    cout<<"\tName: "<<nameF<<endl;
    cout<<"\tDate: "<<dateF<<endl;
    cout<<"Display School: "<<endl;
    cout<<"\tSchool's name: "<<x.nameS<<endl;
    cout<<"\tSchool's date: "<<x.dateS<<endl;
}

class Student : public Person
{
private:
    Faculty y;
    string Class;
    string score;
public:
    Student(/* args */){}
    void input();
    void output();
};

void Student::input()
{
    Person::input();
    y.input();
    cout<<"Enter class: ";    fflush(stdin);    getline( cin, Class);
    cout<<"Enter score: ";    fflush(stdin);    getline( cin, score);
}
void Student::output()
{
    Person::output();
    y.output();
    cout<<"\tClass: "<<Class<<endl;
    cout<<"\tScore: "<<score<<endl;
}

int main(int argc, char const *argv[])
{
    Student A;
    A.input();
    cout<<"------------Show------------"<<endl;
    A.output();
    return 0;
}

