#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
    string name,dob,state,status;
    int cpp,python,linuxs,sdlc,total,id;
    int aadhar;
    double percentile;

    Employee():name(" ") ,dob(" ") ,state(" ") ,cpp(0) ,python(0) ,linuxs(0) ,sdlc(0) ,id(0), aadhar(0) ,total(0) ,percentile(0.00)
    {

    }

    Employee(string &A,string &B ,string &C,int D,int E,int F,int G, int H,  int I)
        :name(&A),dob(&B),state(&C),cpp(D),python(F),linuxs(G),sdlc(H),id(I), aadhar(J),total(0),percentile(0.00)
    {

    }
Employee(double A,int B):percentile(A),total(B),cpp(0),linuxs(0),sdlc(0),python(0),id(0),aadhar(0)
{
}
    void display()
    {
        cout<<name<< " "<<aadhar;
    }

    virtual std::string  designation()
    {
        status="Employee";
        return status;
    }

};

#endif // EMPLOYEE_H_INCLUDED
