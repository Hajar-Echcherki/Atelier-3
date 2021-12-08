#include <iostream>
using namespace std;
class Shape // notre classe 
{
protected:
  float x, y; //x largeur y:hauteur .
public:
  Shape(float a, float b)
  {
    x = a;
    y = b;
  }
};
class Rectangle: public Shape // classes dérivées, à partir de classes existantes ou de base
{
public:
  Rectangle(float a, float b) : Shape(a, b) {} 
  float area()
  {
    return (x * y); // pour retourner l'air de rectangle
  }
};
class Triangle: public Shape //classes dérivées, à partir de classes existantes ou de base
{
public:
  Triangle(float a, float b) : Shape(a, b) {}
  float area()
  {
    return (x * y / 2);// pour retourner l'air de triangle 
  }
};
int main (){
  Rectangle rectangle(4,4);
  Triangle triangle(4,4);
  cout << rectangle.area() << endl;   //16
  cout << triangle.area() << endl;    //8
  return 0;
}
 