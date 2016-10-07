#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string> //allows strings to work
using namespace std;

class Movie {
private: //private properties
	string TitleName;
	string GenreName;
	int ShowtimeHour;
public: //public functions that are to be used
	Movie(); 
	Movie(string Title, string Genre, int ShowTime); //constructor
    string GetTitle();
	string GetGenre();
	int GetShowtime();
};

#endif
#pragma once
