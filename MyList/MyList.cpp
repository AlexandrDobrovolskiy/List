// MyList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include "List.cpp"


int main()
{
	List<string> ml = List<string>();
	ml.add("Hello");
	ml.add("World");
	ml.add("the");

	ml.set("the", 1);

	for (int i = 0; i < 3; i++) 
	{
		std::cout << ml.get(i) << std::endl;
	}

	system("pause");
    return 0;
}

