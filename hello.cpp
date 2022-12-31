#include <iostream>

int main () {
    std::cout << "Hello World!\n";
 
double weightkg;
double weightn;

std::cout << "Enter your weight in kg: ";
std::cin >> weightn;

weightn = weightkg / 9.81 * (3.711);

std::cout << "This is your weight, " << weightn << " on Mars in newtons.\n";

std::cout << "This is your weight, " << weightkgmars << " on Mars in kg.\n";

}
