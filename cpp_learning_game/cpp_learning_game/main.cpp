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
#include <vector>

void printVector(std::vector<int> guessData) {
    std::cout << "Numbers Guessed: [";
    for(int ii = 0; ii < guessData.size(); ii++) {
        if (ii < guessData.size() - 1) {
            std::cout << guessData[ii] << ", ";
        } else {
            std::cout << guessData[ii];
        }
    }
    std::cout << "]\n";
}

void playGame() {
    std::vector<int> guesses;
    
    int random = rand() % 16;
    
    while(true) {
        std::cout << "Guess the Random number 0 < x < 15\n";
        int userGuess;
        std::cin >> userGuess;
        guesses.push_back(userGuess);
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
    printVector(guesses);
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
