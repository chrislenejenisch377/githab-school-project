#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    int rand_num = rand() % 50 + 1;
    std::cout << "The random number is: " << rand_num << "\n";
    return 0;
}
