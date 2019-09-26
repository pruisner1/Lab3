/*
Lane Pruisner
C++ Fall 2019
Due September 26, 2019
Lab #3 
Computes and outputs the mean and std deviation of four integers that are inputed
from another file and inputed by the user
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// declaring my variables, 4 from the input file, 4 from the users input//
int data1;
int data2;
int data3;
int data4;
int userinput1;
int userinput2;
int userinput3;
int userinput4;
// function calls for the equations to be able to relate back to them//
double (AnswerofStd(int data1, int data2, int data3, int data4));
double (AnswerofMean(int data1, int data2, int data3, int data4));

int main()
{
	// Able to access the input file and output file//
	string inputFileName = "C:/Users/PRUISNER1/source/repos/Lab3woohoo/Lab3woohoo/inMeanStd.dat";
	string outputFileName = "outMeanStd.dat";
	ifstream inFile;
	ofstream outFile;
	//Opens up inputfile and outputfile//
	inFile.open(inputFileName);
	outFile.open(outputFileName);
	//Asks user to insert 4 integers to be calculated, then the user inputs the numbers of his choosing//
	cout << "Please enter 4 integers: ";
	cin >> userinput1 >> userinput2 >> userinput3 >> userinput4;
	//Accesses the 4 integers in the input file//
	inFile >> data1 >> data2 >> data3 >> data4;
	//Outputs the values onto the screen and into an output file//
	outFile << "Mean of Userinput values: " << double(AnswerofMean(userinput1, userinput2, userinput3, userinput4)) << " " << "Std Deviation of Userinput values: "  << double(AnswerofStd(userinput1, userinput2, userinput3, userinput4)) << endl;
	outFile << "Mean of Inputfile values: " << double(AnswerofMean(data1, data2, data3, data4)) << " " << "Std Deviation of Inputfile values: " << double(AnswerofStd(data1, data2, data3, data4));
	cout << "Mean of Userinput values: " << double(AnswerofMean(userinput1, userinput2, userinput3, userinput4)) << " " << "Std Deviation of Userinput values: " << double(AnswerofStd(userinput1, userinput2, userinput3, userinput4)) << endl;
	cout << "Mean of Inputfile values: " << double(AnswerofMean(data1, data2, data3, data4)) << " " << "Std Deviation of Inputfile values: " << double(AnswerofStd(data1, data2, data3, data4));
	//Closes files//
	inFile.close();
	outFile.close();
	
	return(0);
}
// definitons of functions//
double (AnswerofMean(int data1, int data2, int data3, int data4))
{
	return float (data1 + data2 + data3 + data4) / 4;
}
double(AnswerofStd(int data1, int data2, int data3, int data4))
{
	return sqrt((pow(data1 - AnswerofMean(data1, data2, data3, data4), 2) + pow(data2 - AnswerofMean(data1, data2, data3, data4), 2) + pow(data3 - AnswerofMean(data1, data2, data3, data4), 2) + pow(data4 - AnswerofMean(data1, data2, data3, data4), 2)) / 3);
}
