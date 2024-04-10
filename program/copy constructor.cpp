#include <iostream>
using namespace std;
class Point { 
  private:    
    int x;     
    int y;     
  public:    
    Point(int a = 0, int b = 0) {
      x = a;
      y = b;
    }
    Point(const Point& p) {
      x = p.x;
      y = p.y;
    }    
    void display() {
      cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
  Point p1(10, 20); 
  Point p2 = p1;   
  p1.display();   
  p2.display();
return 0;
}