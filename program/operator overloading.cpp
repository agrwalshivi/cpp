#include<iostream>
#include<string>
using namespace std;

class MyString {
private:
    string str;
public:
    MyString() : str("") {}
    MyString(string s) : str(s) {}
    
    MyString operator+(const MyString& other) {
        MyString result;
        result.str = this->str + other.str;
        return result;
    }
    
    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2(" World");
    
    MyString result = str1 + str2;
    
    cout << "Concatenated String: ";
    result.display();
    
return 0;
}