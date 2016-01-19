/*
 * AppController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: dvil4688
 */

#include "AppController.h"
#include <iostream>
using namespace std;

AppController :: AppController()
{
	this->count = 99;
}

void AppController :: setCount(int count)
{
	this->count = count;
}

int AppController :: getCount()
{
	return this->count;
}

void AppController :: start()
{
	cout << "In the AppController\'s start method" << endl;
	cout << getCount() << " is the count right now " << endl;
	cout << "Type in a new value for cout" << endl;
	int tempCount;
	cin >> tempCount;
	setCount(tempCount);
	cout << getCount() <<  " is the updated count" << endl;
}
