#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include "gLibrary.h"

using namespace std;

class Point
{

    public:
        Point (double xVal = 3, double yVal = 5);
        double getX () const;
        double getY () const;
        void setX (double);
        void setY (double);
        double distance (Point p);

    private:
        double x, y;

};


#endif // POINT_H_INCLUDED

