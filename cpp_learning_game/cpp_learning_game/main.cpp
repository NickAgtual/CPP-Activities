//
//  main.cpp
//  cpp_learning_game
//
//  Created by Nicholas Agtual on 9/18/23.
//

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

void printArray(int array[], int count) {
    std::cout << "Numbers Guessed: [";
    for(int ii = 0; ii < count; ii++) {
        if (ii < count - 1) {
            std::cout << array[ii] << ", ";
        } else {
            std::cout << array[ii];
        }
    }
    std::cout << "]\n";
}

void playGame() {
    int guesses[15];
    int guessCount = 0;
    
    int random = rand() % 16;
    
    while(true) {
        std::cout << "Guess the Random number 0 < x < 15\n";
        int userGuess;
        std::cin >> userGuess;
        guesses[guessCount++] = userGuess;
        if (userGuess == random) {
            std::cout << "You Win \n";
            break;
        }
        else if (userGuess < random) {
            std::cout << "Too Low\n";
        }
        else {
            std::cout << "Too High\n";
        }
    }
    printArray(guesses, guessCount);
}

int main(int argc, const char * argv[]) {
    //srand(time(NULL) / 10000);
    // Declaring choice int
    int choice;
    do {
        // Printing game selection menu
        std::cout << "Select a Game Mode\n" << "0) Quit" << std::endl << "1) Play Game\n";
        // Prompting user for choice
        std::cin >> choice;
        
        switch(choice) {
            case 0:
                std::cout << "Exiting Game . . .\n";
                return 0;
            case 1:
                playGame();
                break;
            }
        }
    while(choice != 0);
}
