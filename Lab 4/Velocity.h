//Team: <AA>
//Author: <Adama>
//Creation: <Date>
#ifndef VELOCITY_H
#define VELOCITY_H

#include "Archive.h"

double velocity(double v,double t,double a)
{
	return (v*sin(toRad(a)) + G * t);
}

#endif 
