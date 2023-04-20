#include <iostream>
using namespace std;
class Rectangle
{
	private:
		float l,w;
		public:
			float *P,*L,*W,*A;
			void input();
			float getArea();
			float getPerimeter();
};
void Rectangle::input()
{
	cout<<"Enter Length: ";
	cin>>(*L); L=&l;
	cout<<"Enter Width: ";
	cin>>(*W); W=&l;
}
float Rectangle::getArea()
{
	return ( (*L) * (*W));
}
float Rectangle::getPerimeter()
{
	return 2*((*L)*(*W));
}
int main()
{
    Rectangle c;
    c.input();
    cout<<"Area of Rectangle = "<<c.getArea();
    cout<<"\nPerimeter of Rectangle = "<<c.getPerimeter();
    cout<<endl;
        return 0;
}