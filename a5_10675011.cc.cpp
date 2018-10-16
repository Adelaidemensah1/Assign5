#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
string stdName[5];
int stdID[5];
int stdAge[5];
char stdGend[5];
int stdSc[5];
char stdGr[5];
int avAge;
double avScore;
int maleCount;
int femaleCount;
int main()
{


ofstream outfile;
outfile.open("file.txt", ios::out | ios::trunc );

for(int i=0;i<=4;i++){
	cout << "Please enter the student ID: ";
	cin>>stdID[i];
	cout << endl;
	cout << "Please enter the student name: ";
	cin>>stdName[i];
	cout << endl;
	cout << "Please enter the student's age: ";
	cin>>stdAge[i];
	cout << endl;
	cout << "Please enter the student's gender: ";
	cin>>stdGend[i];
	cout << endl;
	if ((stdGend[i] == 'm') || (stdGend[i] == 'M')){
		maleCount++;
	}

if ((stdGend[i] == 'f') || (stdGend[i] == 'F')){
		femaleCount++;
	}
		cout << "Please enter the student's score: ";
	cin>>stdSc[i];
	cout << endl;
	cout << "Please enter the student grade: ";
	cin>>stdGr[i]; 
	cout << endl;
	
	
	outfile << "ID" << "   " << "Name" << "   " << "Age" << "   " << "Gender" << "  " <<"Score" << "   " << "Grade" <<endl;
outfile << "**************************************"<<endl;
outfile << stdID[i] <<"   "<< stdName[i] <<"   "<< stdAge[i] <<"   "<< stdGend[i] <<"   "<< stdSc[i] <<"   "<< stdGr[i] <<endl;

}
outfile << "**************************************"<<endl;
outfile << "Average Age : " << (stdAge[0] + stdAge[1] +stdAge[2] + stdAge[3] + stdAge[4])/5 <<endl;
outfile << "Average Score : " << (stdSc[0] + stdSc[1] + stdSc[2] + stdSc[3] + stdSc[4])/5 <<endl;
outfile << "Male Count : " << maleCount << endl;
outfile << "Female Count : " << femaleCount << endl;
outfile.close();
}
