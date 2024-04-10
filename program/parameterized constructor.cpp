#include<iostream>
using namespace std;
class Wall {
  private:
    double length;
    double height;

  public:
    
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
    void getInput() {
      cout << "Enter the length of the wall: ";
      cin >> length;
      cout << "Enter the height of the wall: ";
      cin >> height;
    }
};
int main(){
Wall wall(10,5);
wall.getInput();
cout<<"the area of the wall is:"<<wall.calculateArea()<<endl;
return 0;
}