// George Strauch
// reads mass and density form file then writes volume
// 02//27//2018


#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double dblMassKg = 0;    //mass in kg
    double dblVolumeCm3 = 0; //volume in cm^3
    double dblDensityKgCm3 = 0;  //density in kg/cm^3

    string strInputFileName = "input.txt";
    string strOutputFileName = "output.txt";
    ofstream outputFile;
    ifstream inputFile;

    inputFile.open(strInputFileName);
    inputFile >> dblMassKg;
    inputFile >> dblDensityKgCm3;

    inputFile.close();

    //density = mass / volume; so volume = mass / density

    dblVolumeCm3 = dblMassKg / dblDensityKgCm3;

    outputFile.open(strOutputFileName);
    outputFile << setprecision(2);
    outputFile << fixed;
    outputFile << "mass: " << dblMassKg << " kg" << endl
               << "density: " << dblDensityKgCm3 << " kg/cm^3" << endl
               << "volume: " << dblVolumeCm3 << " cm^3";

    outputFile.close();


    return 0;
}