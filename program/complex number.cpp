#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;
    public:
    void getInput(){
        cout<<"enter real part:";
        cin>>real;
        cout<<"enter imanginary part";
        cin>>imag;
    }
    complex add(complex C){
        complex temp;
        temp.real=real+C.real;
        temp.imag=imag+C.imag;
        return temp;
}
    void display(){
        cout<<"sum:"<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    complex num1,num2,sum;
    cout<<"for first complex number:"<<endl;
    num1.getInput();
    cout<<"for second complex number:"<<endl;
    num2.getInput();

    sum=num1.add(num2);
    sum.display();
return 0;
}