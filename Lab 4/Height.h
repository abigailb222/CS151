/Team: <AA>
//Author: <Abigail Bennett>
//Creation: <Date>
#ifndef HEIGHT_H
#define HEIGHT_H

#include "Archive.h"

double height(double v,double t,double a)
{
	return (v*sin(toRad(a))) * t +  (0.5 * G * (t * t));
}

#endif 
