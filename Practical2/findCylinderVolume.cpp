#define _USE_MATH_DEFINES
#include <cmath>
#include "Cylinder.h"




int Cylinder::findCylinderVolume(int radius, int height)
{
	return M_PI * pow(radius, 2) * height;
}

 double Cylinder::findCylinderVolume(double radius, double height)
{
	return M_PI * pow(radius, 2.0) * height;
}
