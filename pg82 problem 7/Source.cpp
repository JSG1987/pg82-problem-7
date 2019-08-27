//The goal of this program is to calculate ocean levels by year

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float oceanLVL = 1.5;
	float fiveYear = oceanLVL * 5;
	float sevenYear = oceanLVL * 7;
	float tenYear = oceanLVL * 10;
	cout << "after 5 years the ocean level is " << fiveYear <<"mm"<< endl;
	cout << "After 7 years the ocean level is " << sevenYear << "mm" << endl;
	cout << "After 10 years the ocean level is " << tenYear << "mm" << endl;



	system("PAUSE");
	return 0; 
}