// math.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
#include"math.h"
using namespace std;
int main()
{
	double x1, y1;
	cout << "Ange x1 och y1 koordinater(x1,y1) ";
	cin >> x1 >> y1;
	
	double x2, y2;
	cout << "Ange x1 och y1 koordinater(x1,y1) ";
	cin >> x2 >> y2;

	MATH m,m1;
	
	m.setXY(x1,x2);
	m1.setXY(y1,y2);

	cout << "Avståndet " << sqrt(m.xminusy()+ m1.xminusy())<<endl;

	system("pause");
	return 0;
}

