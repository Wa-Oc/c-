#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
    string title;
    string director;
    int duration;
    float rating;

public:
    // Constructor to initialize data members
    Movie(string t, string d, int dur, float r) : title(t), director(d), duration(dur), rating(r) {}

    // Member function to display movie details
    void display() const {
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "Duration: " << duration << " minutes" << endl;
        cout << "Rating: " << rating << endl;
    }

    // Member function to rate the movie
    void rateMovie(float newRating) {
        if (newRating >= 1.0 && newRating <= 5.0) {
            rating = newRating;
            cout << "Updated rating: " << rating << endl;
        } else {
            cout << "Invalid rating" << endl;
        }
    }
};

int main() {
    // Create a Movie object with given details
    Movie movie("Inception", "Christopher Nolan", 148, 4.8);

    // Display movie details
    movie.display();

    // Update the rating to 5.0 and display
    movie.rateMovie(5.0);

    // Attempt to set an invalid rating of 6.0
    movie.rateMovie(6.0);

    return 0;
}