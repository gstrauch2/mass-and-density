// George Strauch
// reads mass and density form file then writes volume
// 02//27//2018


#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double dblMass = 0;    //mass in g
    double dblVolume = 0; //volume in cm^3
    double dblDensity = 0;  //density in g/cm^3

    string strInputFileName = "input.txt";
    string strOutputFileName = "output.txt";
    ofstream outputFile;
    ifstream inputFile;

    inputFile.open(strInputFileName);
    inputFile >> dblMass;
    inputFile >> dblDensity;

    inputFile.close();

    //density = mass / volume; so volume = mass / density

    dblVolume = dblMass / dblDensity;

    outputFile.open(strOutputFileName);
    outputFile << setprecision(2);
    outputFile << fixed;
    outputFile << "mass: " << dblMass << " g" << endl
               << "density: " << dblDensity << " g/cm^3" << endl
               << "volume: " << dblVolume << " cm^3";

    outputFile.close();


    return 0;
}
