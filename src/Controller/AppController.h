/*
 * AppController.h
 *
 *  Created on: Jan 19, 2016
 *      Author: dvil4688
 */

#ifndef CONTROLLER_APPCONTROLLER_H_
#define CONTROLLER_APPCONTROLLER_H_

class AppController
{
private:
	int count;
public:
	AppController();
	void setCount(int);
	int getCount();
	void start();
};

#endif /* CONTROLLER_APPCONTROLLER_H_ */
