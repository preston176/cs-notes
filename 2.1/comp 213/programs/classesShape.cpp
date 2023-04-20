#include <iostream>
using namespace std;

// create a class
class Shape
{
  // protected data member
protected:
  float perimeter;
};

// class Rectangle inheriting class Shape
class Rectangle : public Shape
{
  // protected data members
protected:
  float length, breadth;

  // public member function
public:
  // get() function to input attributes of the class
  void get()
  {
    cout << "\nEnter Rectangle's Length :";
    cin >> length;

    cout << "Enter Rectangle's Breadth :";
    cin >> breadth;
  }

  // Perimeter() function to calculate
  // the perimeter of the class
  double Perimeter()
  {
    // calculating perimeter
    perimeter = 2 * (length + breadth);

    // returning perimeter
    return perimeter;
  }
};

// class Circle inheriting class Shape
class Circle : public Shape
{
  // protected data member
protected:
  float radius;

  // public member functions
public:
  // get() function to input attributes of the class
  void get()
  {
    cout << "Enter Circle's Radius :";
    cin >> radius;
  }

  // Perimeter() function to calculate perimeter of the class
  double Perimeter()
  {
    // calculating perimeter
    perimeter = (2 * 22 * radius) / 7;

    // returning perimeter
    return perimeter;
  }
};

// class Square inheriting
class Square : public Shape
{
  // protected data member
protected:
  float side;

  // public member function
public:
  // get() function to input attributes of class
  void get()
  {
    cout << "\nEnter Square's Side :";
    cin >> side;
  }

  // Perimeter() function to calculate perimeter of the class
  double Perimeter()
  {
    // calculating perimeter
    perimeter = 4 * side;

    // returning perimeter
    return perimeter;
  }
};

int main()
{
  // create an object of Circle class
  Circle C;

  // float type variable to
  // store perimeter
  float circle;

  // calling get() function to
  // input radius of circle
  C.get();

  // calling Perimeter() function to calculate perimeter of circle
  circle = C.Perimeter();

  cout << "Circumference of Circle : " << circle << endl;

  // create an object of Rectangle class
  Rectangle R;

  // float type variable to store perimeter
  float rectangle;

  // calling get() function to input length
  // and breadth of rectangle
  R.get();

  // calling Perimeter() function to
  // calculate perimeter of rectangle
  rectangle = R.Perimeter();

  cout << "Perimeter of Rectangle : " << rectangle << endl;

  // create an object of Square class
  Square S;

  // float type variable to store perimeter
  float square;

  // calling get() function to
  // input side of square
  S.get();

  // calling Perimeter() function to
  // calculate perimeter of square
  square = S.Perimeter();

  cout << "Perimeter of Square : " << square << endl;

  return 0;
}