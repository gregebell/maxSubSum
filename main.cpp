#include "readFunctions.h"
#include <math.h>
#include <string>
int main(int argc, char *argv[])
{
	
	
	
	// if you run this on your own computer might want to change the file path
	string defaultName = "C:\Users\Gregory\Desktop\cpts223-gbelling-PA2\inputs\inputs_";
	string fileName;
	
	//starting size of vector, doubles each time, end size is 8192
	
	
	for(int i = 8; i < 8193; i*=2)
	{
		//nine different vectors of each size, goes through each
		for(int j = 0; j < 10; j++)
		{
			fileName = defaultName + to_string(i) + '_' + to_string(j) + ".txt";
			readFunction(fileName);
		}
		
	}
	
	
	
	
	
	
	

	
	getchar();
	
	return 0;
	
	
	
}
