#ifndef THEATER_H
#define THEATER_H
#include <iostream>
#include "Movie.h"//calls the header file movie
#include <string> //allows the function string to be used
using namespace std;

class Theater { //class named theater
private: //private properties 
	int ShowTime;
	int movieHour;
	int Popcorn;
	int Coke;
	
public: //public functions that can be used anywhere else
	Theater(string Name, string Phone);
	void AddMovie(Movie& Movie);
	string GetMovieForHour(int Hour);
	int GetShowTimeForGenre(string Genre);
	int GetPopcornPrice();
	int GetCokePrice();
	
};

#endif // THEATER_H#pragma once
