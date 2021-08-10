#ifndef _CONT_H
#define _CONT_H

#include "Model.h"

class Controller
{
public:
	Controller(Model *);
	void clicked();
private:
	Model* model;
};

#endif