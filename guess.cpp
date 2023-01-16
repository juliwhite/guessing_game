#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

// run this program in terminal g++ guess.cpp -std=c++11

void print_vector(std::vector<int> vector)
{
    for(int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << "\t";
    }
    std::cout << "\n";

}

void play_game()
{
    std::vector<int> guesses;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Enter your number: ";

    while(true)
    {
        int guess;
        std::cin >> guess;

        guesses.push_back(guess);
        
        if(guess == random)
        {
            std::cout << "You guess correctly!\n";
            break;
        } else if (guess < random)
        {
            std::cout << "too low\n";
        } else
        {
            std::cout << "too high\n";
        }
    }

    print_vector(guesses);
}

int main()
{
    int choice;
    do
    {
        std::cout << "0. Quit" << std::endl << "1. Play game\n";
        std::cin >> choice;

        switch(choice)
        {
        case 0:
            std::cout << "Thank you!\n";
            return 0;
        case 1:
            std::cout << "Let's play\n";
            play_game();
            break;
        default:
            break;
        }
    } while (choice != 0);
    
    return 0;
}