#include <iostream>
#include <string> //allows strings to be used
#include "Movie.h"//references the movie header file
using namespace std;

//default movie that shows name, genre and showtime
Movie::Movie() { 
	TitleName = "Inside Out"; 
	GenreName = "Comedy";
	ShowtimeHour = 10;
}
Movie::Movie(string Title, string Genre, int ShowTime) { //constructor
	Title = TitleName; //title is set equal to the variable
	ShowTime = ShowtimeHour;
	if (Genre != "Action" || Genre != "Comedy" || Genre != " Horror" || Genre != "Documentary") {
			Genre == "Comedy"; //if Genre is not any of the listed Genre's then the default is Comedy
	}
		Genre = GenreName;
}


 string Movie::GetTitle() {
	 
	return TitleName; //returns the title of the movie
}

 string Movie::GetGenre() {
	 return GenreName;
}// returns the genre for the movie

 int Movie::GetShowtime() { 
	 GetTitle();//calls the function to get the title name
	 //shows the showtime hour for that title
	 return ShowtimeHour;
}