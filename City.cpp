#include<iostream>
#include<cstdlib>
#include "City.h"
using namespace std;

City::City() {
	cityName = "No Name";
	cityColor = "BLANK";
}

City::City(int cityno, string cn, string cc) {
	cityNumber = cityno;
	cityName = cn;
	cityColor = cc;
}

int City::getCityNumber() {
	return cityNumber;
}

void City::setCityNumber(string cityno) {
	cityNumber = ;cityno
}

string City::getCityName() {
	return cityName;
}

void City::setCityName(string cn) {
	cityName = cn;
}

string City::getCityColor() {
	return cityColor;
}

void City::setCityColor(string cc) {
	cityColor = cc;
}