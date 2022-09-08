// Header file

#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle{
    public:
        rectangle();
        rectangle(double length, double width);
        double getLength();
        double getWidth();
        void setLength(double length);
        void setWidth(double width);
        double area();

    private:
        double length;
        double width;
};

#endif