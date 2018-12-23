#include "maxSum.h"



//Function to open each file, read them into the vector, and then run each max subsequent sum function and tell you how long it took. 


void readFunction(string fileName)
{
	ifstream myFile;
	int line;
	vector <int> myVec;
	
	myFile.open(fileName);
	while(myFile)
	{
		
		myFile >> line;
		myVec.push_back(line);
		
		if(myFile.eof())
			break;
		
	}
	
	
	
	cout << "Size of vector is " << myVec.size() << endl;
	
	auto start1 = high_resolution_clock::now();
	int sum1 = maxSubSum1(myVec);
	auto stop1 = high_resolution_clock::now();
	auto duration1 = duration_cast<microseconds>(stop1 - start1);
	
	auto start2 = high_resolution_clock::now();
	int sum2 = maxSubSum2(myVec);
	auto stop2 = high_resolution_clock::now();
	auto duration2 = duration_cast<microseconds>(stop2 - start2);
	
	auto start3 = high_resolution_clock::now();
	int sum3 = maxSubSum3(myVec);
	auto stop3 = high_resolution_clock::now();
	auto duration3 = duration_cast<microseconds>(stop3 - start3);
	
	auto start4 = high_resolution_clock::now();
	int sum4 = maxSubSum4(myVec);
	auto stop4 = high_resolution_clock::now();
	auto duration4 = duration_cast<microseconds>(stop4 - start4);
	
	cout << "Impementation: Max Sub Sum 1" << endl;
	cout << "Result: " << sum1 << endl;
	cout << "Time:"  << duration1.count() << " microseconds" << endl;
	
	cout << "Impementation: Max Sub Sum 2" << endl;
	cout << "Result: " << sum2 << endl;
	cout << "Time:"  << duration2.count() << " microseconds" << endl;
	
	cout << "Impementation: Max Sub Sum 3" << endl;
	cout << "Result: " << sum3 << endl;
	cout << "Time:"  << duration3.count() << " microseconds" << endl;
	
	cout << "Impementation: Max Sub Sum 4" << endl;
	cout << "Result: " << sum4 << endl;
	cout << "Time:"  << duration4.count() << " microseconds" << endl;
	
	myFile.close();
	
}