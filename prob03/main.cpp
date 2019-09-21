// Random Rectangle
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    // Declare variables & constants
    std::string rect, row;
    const int MAX_HEIGHT = 3;
    const int MAX_LENGTH = 40;

    // Set seed time
    unsigned seed = time(0);
    srand(seed);

    // Random Length based off Seed time
    int length = rand() % MAX_LENGTH + 1 ;

    //Loop to create rectangle
    for (int i = 0; i<MAX_HEIGHT; ++i) {
      rect += row.assign(length, '#') + "\n";
    }

    // Print out rectangle
    std::cout << std::endl << rect << std::endl;
    return 0;
}
