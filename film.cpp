// Tuba Siddiqui
// #PLP 6 - Filmology

//https://www.w3schools.com/cpp/cpp_for_loop.asp
//https://www.w3schools.com/cpp/cpp_functions.asp
//https://www.geeksforgeeks.org/cpp/getline-string-c/
// https://medium.com/@RobuRishabh/beginners-guide-to-linked-list-in-c-d8445ef906ab (used informatioj provided in this article to try and implemrnt a linked list for fav films of the user!)
//https://stackoverflow.com/questions/36673391/c-linked-list-using-smart-pointers
//https://www.geeksforgeeks.org/cpp/inheritance-in-c/
//https://stackoverflow.com/questions/60401411/header-file-inheritance-c

#include <iostream>
#include "dateAndTime.h"
#include <vector>
#include <string>
using namespace std;

// structure to store movie information
class Film : public dateAndTime { 
public:
    string title;
    string director;
    string producer;
    string actors;
    int year;
    string status; // to see if the user watched the film, or if it's in the too-watch list 
    string favorite; // does the user want the film to be addes as a fav film or not
    Film() : dateAndTime() {}  // this basically logs the date when a user enters a review 
};

// this is a linked list node for storing titles
struct favFilm {
    string title;
    favFilm* next;
};

// functions
void addMovie(vector<Film> &movies);
void countMovies(const vector<Film> &movies); 
void viewMovies(const vector<Film> &movies);
void listTitles(const vector<Film> &movies);  
void clearMovies(vector<Film> &movies);   

// linked list functions
favFilm* favFilmList(const vector<Film>& movies);
void printFavFilmList(favFilm* head);



int main() {
    vector<Film> movies;
    string choice;
    
    while (true) {
        cout << "\nFilmology\n";
        cout << "step 1. add a movie\n";
        cout << "step 2. view all your movies\n";
        cout << "step 3. count how many movies you have\n";
        cout << "step 4. list only movie titles\n";  
        cout << "step 5. clear ALL movies\n";     
        cout << "step 6. view the list of your favorite films!\n";
        cout << "step 7. that's it for today!\n";
        cout << "step: ";
        getline(cin, choice);   
    

        if (choice == "1") {
            addMovie(movies);
        }
        else if (choice == "2") {
            viewMovies(movies);
        }
        else if (choice == "3") {
            countMovies(movies);
        }
        else if (choice == "4") {
            listTitles(movies);
        }
        else if (choice == "5") {
            clearMovies(movies);
        }
        else if (choice == "6") {
            favFilm* head = favFilmList(movies);  // to buil a linked list of favs
            printFavFilmList(head);    // too print fav list using pointers
            // cleanFavFilmList(head); // this is to clean up memory after use
        }
        else if (choice == "7") {
            cout << "Goodbye for noww!\n";
            break;
        }
        else {
            cout << "sorry, plss try again\n";
        }
    }
    return 0;
}

// add a new movie to the list
void addMovie(vector<Film> &movies) {
    Film m;
    string yearString;

    cout << "Pls enter the title of the film: ";
    getline(cin, m.title);

    cout << "Pls enter the name of the director: ";
    getline(cin, m.director);

    cout << "Pls enter the producer: ";
    getline(cin, m.producer);

    cout << "enter main actors/actresses: ";
    getline(cin, m.actors);

    cout << "Year when it got released: ";
    getline(cin, yearString);
    m.year = stoi(yearString);   // convert str to int

    cout << "Pls enter the status: ";
    getline(cin, m.status);

    cout << "So do you want to mark this film as a favorite? (yes/no): ";
    getline(cin, m.favorite);


    movies.push_back(m);
    cout << "Movie added on: " << m.dateLogged << "\n";
}

// view all movies in the list
void viewMovies(const vector<Film> &movies) {
    if (movies.empty()) {
        cout << "I'm sorry there's currently no movies in your list :((\n";
        return;
    }

    cout << "\nYour movies are stored here:\n";
    for (size_t i = 0; i < movies.size(); i++) {
        cout << i + 1 << ". " << movies[i].title << " (" << movies[i].year << ")\n";
        cout << "  Director: " << movies[i].director << endl;
        cout << "  Producer: " << movies[i].producer << endl;
        cout << "  Actors: " << movies[i].actors << endl;
        cout << "  Your fiml status: " << movies[i].status << endl;
        cout << "  favorite: " << movies[i].favorite << endl;
        cout << "  logged on: " << movies[i].dateLogged << endl;

    }
}

// counts films you've watchhed
void countMovies(const vector<Film> &movies) 
{
    cout << "\nyouu currently have " << movies.size() << " movies stored!!\n";
}

// shows only the title of the films you've watched
void listTitles(const vector<Film> &movies) 
{
    if (movies.empty()) {
        cout << "no movies to list sadly\n";
        return;
    }

    cout << "\nYour movie titles:\n";
    for (size_t i = 0; i < movies.size(); i++) {
        cout << i + 1 << ". " << movies[i].title << endl;
    }
}

// helps u clear all movies and have a new start
void clearMovies(vector<Film> &movies)
 {
    movies.clear();
    cout << "\nAll movies have been deleted!!\n";
}

// build linked list of favorite movies
favFilm* favFilmList(const vector<Film>& movies) {
    favFilm* head = nullptr;
    favFilm* current = nullptr;

    // to go through all films and only add favs to the list
    for (size_t i = 0; i < movies.size(); i++) {
        if (movies[i].favorite == "yes" || movies[i].favorite == "Yes") {
            favFilm* newNode = new favFilm{movies[i].title, nullptr};

            if (head == nullptr) {
                head = newNode;       // first favorite movie
                current = newNode;
            } 
            else {
                current->next = newNode; // add to linked list
                current = newNode;
            }
        }
    }

    return head;
}

// print favorite movies using linked list
void printFavFilmList(favFilm* head) {
    if (!head) {
        cout << "\n Sorry, you don't seem to have any favorite movies added to your list yet:((\n";
        return;
    }

    cout << "\n Here's a list of your favorite movies, enjoyy: \n";
    favFilm* current = head;
    int i = 1;

    while (current != nullptr) {
        cout << i++ << ". " << current->title << endl;
        current = current->next;
    }
}

void cleanFavFilmList(favFilm* head) {
    while (head != nullptr) {
        favFilm* temp = head;
        head = head -> next;
        delete temp;
    }
}
