#include <iostream>
#include <string> //allows string to be used
#include "Theater.h" //calls the theater header file
using namespace std;

Theater::Theater(string Name, string Phone) {
	cout << Name << Phone; 
	//outputs the name of the theater and the phone number of the theater
}

 void Theater::AddMovie(Movie& Movie) {
	 // added the mov0ie fletch to a different showing time
	 Movie = { "Fletch", "Comedy", 14 };
}
 
 string Theater::GetMovieForHour(int Hour) {
	 string TitleN; 
	 Movie Title;
	 Title.GetTitle() == TitleN; //supposed to call the title of movies function

	 if (ShowTime = Hour || ShowTime > Hour)
	 {
		 // if the showtime is equal or greater than hour, then it returns the title name with that show time
		 return  TitleN; 
		 //should input the title of the movie that is in the boundary
	 }
	 else
	 {		 return " ";
	 }
 }

int Theater::GetShowTimeForGenre(string Genre) {
	if (Genre == "Comedy" || Genre == "Documentary" || Genre == "Action" || Genre == "Horror")
		return ShowTime = 0; 
	else//Shows at what time the movie of the genre will be shown
		return -1;
}

int Theater::GetPopcornPrice() {
	//popcorn price is 5 dollars
	return Popcorn == 5; 
}

int Theater::GetCokePrice() {
	return Coke == 3;
} //coke price is 3 dollars