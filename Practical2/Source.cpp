#include <iostream>
#include "Cylinder.h"

using namespace std;

int main()
{
	Cylinder cylinder;


	cout << cylinder.findCylinderVolume(5, 3) << endl;
	cout << cylinder.findCylinderVolume(1.2, 3.5) << endl;

	cin.get();
	//cout << cylinder.findCylinderVolume(5, 3.2) << endl;
	//the program cannot run as it does not match the parameters of the functions.



}
