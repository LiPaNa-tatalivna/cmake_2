//
//  Class.hpp
//  MF_3
//
//  Created by Liza Stepanova on 06.03.2023.
//

#ifndef Class_hpp
#define Class_hpp

#include <stdio.h>

#include <iostream>
#include <string>

class Figure
{
protected:
    std::string nameOfFigure_;
    bool haveFourSides_ = false; //признак что четыре стороны
    int sideLengthA_ = 0;
    int sideLengthB_ = 0;
    int sideLengthC_ = 0;
    int sideLengthD_ = 0;
    int angleA_ = 0;
    int angleB_ = 0;
    int angleC_ = 0;
    int angleD_ = 0;

public:
    std::string getNameOfFigure() { return nameOfFigure_; }
    int getHaveFourSides() { return haveFourSides_; }

    int getSideLengthA() { return sideLengthA_; }
    int getSideLengthB() { return sideLengthB_; }
    int getSideLengthC() { return sideLengthC_; }
    int getSideLengthD() { return sideLengthD_; }

    int getAngleA() { return angleA_; }
    int getAngleB() { return angleB_; }
    int getAngleC() { return angleC_; }
    int getAngleD() { return angleD_; }
};


#endif /* Class_hpp */
