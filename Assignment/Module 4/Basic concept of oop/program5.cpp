#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length,width;
    public:
    Rectangle (double l,double w):length(l),width (w){}
    double area(){
        return length *width; 
    }
    double perimeter(){
        return 2 *(length + width);
    }
};
int main (){
    double length,width;
    cout<<"Enter the length of Rectangle:";
    cin>>length;  
    cout<<"Enter the Width of Rectangle:";
    cin>>width;  
    Rectangle rect(length,width);
    cout<<"The Area of Rectangle:"<<rect.area()<<endl;
    cout<<"The Perimeter of Rectangle:"<<rect.perimeter()<<endl;
}