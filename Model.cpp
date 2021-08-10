#include "pch.h"
#include "Model.h"


Model::Model()
{
	nNumber = 10;
}

void Model::IncreaseNumber()
{
	nNumber += 10;
}

const int Model::GetNumber()
{
	return nNumber;
}