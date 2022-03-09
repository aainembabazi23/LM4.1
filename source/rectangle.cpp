#include "Rectangle.h"

//constructs a default rectangle object
Rectangle::Rectangle(){
    length = 0;
    height = 0;
    //area = 0;
}

//constructs a rectangle object
Rectangle::Rectangle(int _length, int _height, double _area){
    _length = length;
    _height = height;
    //_area = area;
    cout << "Rectangle" << endl; //can be changed in the future
}

//gets the length of the rectangle
int Rectangle::getLength(int _length){
    return _length;
}

//gets the height of the rectangle
int Rectangle::getHeight(int _height){
    return _height;
}

//modifies rectangle length
void Rectangle::setLength(int _length){
    length = _length;
}

//modifies rectangle height
void Rectangle::setHeight(int _height){
    height = _height;
}

//prints parameters and graphical representation of rectangle
//void Rectangle::print();

//gets area of all rectangles in the array
double Rectangle::getArea(int _length, int _height){
    double area = _length * _height;
    return area;
}

// //finds the longest rectangle
// int Rectangle::findLongest();
// //finds the tallest rectangle
// int Rectangle::findTallest();
// //finds the rectangle with the largest area
// double Rectangle::findLargestArea();
