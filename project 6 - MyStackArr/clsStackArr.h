#pragma once

#include <iostream>
#include "clsQueueArr.h"
using namespace std;
template <class T>

class  clsStackArr :public   clsQueueArr <T>
{

public:

	void push(T Item)
	{
		clsQueueArr <T>::_MyList.InsertAtBeginning(Item);
	}

	T Top()
	{
		return clsQueueArr <T>::front();

	}

	T Bottom()
	{
		return clsQueueArr <T>::back();

	}

};
