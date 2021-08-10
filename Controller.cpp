#include "Model.h"
#include "Controller.h"

Controller::Controller(Model* m)
{
	model = m;
}

void Controller::clicked()
{
	model->IncreaseNumber();
}