/*
Para compilar: 
g++ -o clases clases.cpp
para ejecutar:
./clases
*/
#include <iostream>

using namespace std;

class Point {
private:
  int x;
  int y;
public:
  Point(int px, int py) : x(px), y(py) {}
  void move(int dx, int dy) {
    x = x + dx;
    y = y + dy;
  }
  int getX() const { return x; }
};

int main() {
  Point p(3, 7);
  p.move(1, 1);
  cout <<"daniel "<< p.getX() << endl;
}