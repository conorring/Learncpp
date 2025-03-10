# include<iostream>
# include<random> 

int main()
{
    std::random_device rd;                                  // generates a random seed
    std::mt19937 gen(rd());                                 // Initialises the Mersenne PRNG with the seed
    std::uniform_int_distribution<int> dist(1, 100);        // ensures the integer is in the range 1-100

    int rand{dist(gen)}; // our random number
    bool guessed{false}; // true when user guesses number

    std::cout << "I am thinking of an integer between 1 and 100. Try to guess it!!\n";
    int guess{};  // used to store users guess at each iteration
    int no_guesses{0};

    while (!guessed)
    {
        std::cout << "Your guess: ";
        std::cin >> guess;
        no_guesses++;

        if (guess == rand)
        {
            std::cout << "Well done!! You got it in " << no_guesses << " guesses.\n";
            guessed = true;
        }
        else if(guess < rand)
        {
            std::cout << "Your number is too low. Try Again\n";
        }
        else
        {
            std::cout << "Your number is too high. Try again\n";
        }
    }

    return 0;
}
