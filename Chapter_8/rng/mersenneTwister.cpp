#include<iostream>
#include<random>    // for std::mt19937 creates a random 32-bit unsigned int. Use mt19937_64 for a 64 bit int
#include<chrono>    // for std::chrono uses time to set a seed for rng

int main() {
    // Seed the Mersenne Twister using steady_clock

    // define a variable mt as an instance of a mersenne twister rng
    // initialise it with the current time
    // we cast the current time to std::mt19937::result_type which is an alias for a 32-bit uint
    std::mt19937 mt{ static_cast<std::mt19937::result_type>(
        std::chrono::steady_clock::now().time_since_epoch().count()
    )};

    // create a uniform rng that simulated a die roll
    std::uniform_int_distribution die6{1, 6}; 

    // Print a bunch of random numbers
	for (int count{ 1 }; count <= 40; ++count)
	{
		std::cout << die6(mt) << '\t'; // generate a roll of the die here

		// If we've printed 10 numbers, start a new row
		if (count % 10 == 0)
			std::cout << '\n';
	}

    return 0;
}
