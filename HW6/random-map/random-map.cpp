#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <sstream>

/*Generates a number based on Uniform Distribution
* @param Smallest number
* @param Largest number
*/
int RandomBetweenU(int first, int last) {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(first, last);

    return dist(gen);
}
/*Generates a number based on Normal Distributio
* @param Smallest number
* @param Largest number
*/
int RandomBetweenN(int first, int last) {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<> dist(first, last);
    return dist(gen);
}
/*uses srand to generate a number
*@param Smallest number
* @param Largest number
*/
int RandomBetween(int first, int last) {

    srand(time(NULL));
    return  rand() % last + first;
}
void PrintDistribution(const std::map<int, int>& numbers) {
    for (auto p : numbers) {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
            << p.first << ' ' << std::string(p.second / 100, '*') << '\n';
    }
}

int main()
{
     
    std::map<int, int> normaldistr;
    std::map<int, int> uniformdistr;
    std::map<int, int> srandmap;
    std::string str;
    int first, last;
    std::cout << "Enter the largest and smallest number you want to generate";
    std::cout << " (seperated by a space)\n";
    while (1 != 0) {

        std::getline(std::cin, str);
        std::stringstream in(str);
        in >> first >> last;
        if (!in)
            std::cout << "Please enter two Numbers\n";
        else
            break;
    }

    for (int n = 0; n < 10000; ++n) {
        ++normaldistr[RandomBetween(first, last)];
    }
    PrintDistribution(normaldistr);
}