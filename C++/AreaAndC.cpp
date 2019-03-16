#include<iostream>
using namespace std;
class Rectangle
{
	private: float length ,width;
	public : Rectangle(float len,float w);
	float Area(void) const;
	float Circumference(void) const;
};
Rectangle::Rectangle(float len,float w): length(len),width(w)
{
}
float Rectangle::Area(void) const
{
	return length*width;
}
float Rectangle::Circumference(void) const
{
	return 2*(length+width);
}
int main(){
	float len ,wth;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"Enter the length and width of the Rectangle:";
	cin>>len>>wth;
	Rectangle square(len,wth);
	cout<<"Area is:"<<square.Area()<<endl;
	cout<<"Circumference is:"<<square.Circumference()<<endl;
	return 0;
}
