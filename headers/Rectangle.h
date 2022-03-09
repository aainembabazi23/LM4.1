#ifndef rectangle.h
#define rectangle.h

//rectangle class
class Rectangle{
    private:
        int length, height; //length and height of the rectangle
        //double area; //area of the rectangle
        const int rectangles[10]; //creates an array of 10 rectangles
    public:
        Rectangle(); //constructs a default rectangle object
        Rectangle(int _length, int _height); //constructs a rectangle object
        int getLength(int _length); //gets the length of the rectangle
        int getHeight(int _height); //gets the height of the rectangle
        void setLength(int _length); //modifies rectangle length
        void setHeight(int _height); //modifies rectangle height
        void print(int _length, int _height); //prints parameters and graphical representation of rectangle
        double getArea(int _length, int _height); //gets area of all rectangles in the array
        int findLongest(); //finds the longest rectangle
        int findTallest(); //finds the tallest rectangle
        double findLargestArea(); //finds the rectangle with the largest area
};
#endif