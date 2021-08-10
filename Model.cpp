#include "pch.h"
#include "Model.h"


Model::Model()
{
	number = 10;
}

void Model::IncreaseNumber()
{
	number += 10;
}

const int Model::getNumber()
{
	return number;
}