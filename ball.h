#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED

#include "gLibrary.h"

class ball
{
    public:
        //Description:  Set default value of ball
        //Return type:  none
        //Pre:          none
        //Post:         object exists
        ball(Point = Point(), ink = red, char = SQUARE, double = .2, double = 7*3.14/4);
        
        //Description:  Draw the ball
        //Return type:  none
        //Pre:          none
        //Post:         object exists
        void draw(Plotter&);
        
        //Description:  Set movement of ball
        //Return type:  none
        //Pre:          none
        //Post:         object exists
        void move();
        
        //Description:  Get location of point
        //Return type:  Point
        //Pre:          object exists
        //Post:         return the location
        Point getLoc();
        
        //Description:  set location of point
        //Return type:  none
        //Pre:          none
        //Post:         object exists
        void setLoc(Point);
        
         //Description:  Get color of ball
        //Return type:  ink
        //Pre:          object exists
        //Post:         return the color of ball
        ink getColor();
        
         //Description:  Get shape of ball
        //Return type:  char
        //Pre:          object exists
        //Post:         return the shape of ball
        char getShape();
        
        //Description:  get speed of ball
        //Return type:  double
        //Pre:          object exists
        //Post:         return the speed of ball
        double getSpeed();
        
        //Description:  set speed of ball
        //Return type:  none
        //Pre:          none
        //Post:         object exists
        void setSpeed(double);
        
        //Description:  erase the color 
        //Return type:  none
        //Pre:          none
        //Post:         object exists
        void erase(Plotter&);
        bool ballHitRightWall(ball, int);
        bool ballHitLeftWall(ball, int);
        bool ballHitTopWall(ball b, int row);
        bool ballHitBottomWall(ball b, int row);
        void setDir(double d);
        double getDir();
        Point getOldLoc();
        void setOldLoc(Point loc);
        void setOldDir(double d);
        double getOldDir();

    private:
        Point loc, oldLoc;
        ink color;
        char shape;
        double speed, dir, oldDir;
};

#endif // BALL_H_INCLUDED

