#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    int emp_id;
    string emp_name;
    long long int emp_num;
    string emp_email;
    employee(int id=0 , const string& name=" ", long long int num=0 , const string& email= " "){
        emp_id=id;
        emp_name=name;
        emp_num=num;
        emp_email=email;
    }
    void displaydetails(){
        cout<<"Employee id: "<<emp_id<<endl;
        cout<<"Employee name: "<<emp_name<<endl;
        cout<<"Employee ph no: "<<emp_num<<endl;
        cout<<"Employee email: "<<emp_email<<endl;
}
};
int main(){
    employee emp1(123,"john",1234567890,"john.aloo@company.com");
    
    cout<<"Employee 1 details: "<<endl;
    emp1.displaydetails();
    return 0;

}