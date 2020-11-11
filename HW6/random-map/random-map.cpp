/*
random-map.cpp
Michael Baran
11 November 2020
HW6 for CS 201
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <sstream>
#include <ctime>

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
    double mean = (first + last) / 2;

    std::seed_seq seed{ rd() };
    std::mt19937 e(seed);
    std::normal_distribution<> normal_dist(mean, 2);
    int randnum = std::round(normal_dist(e));
    if (randnum <= last || randnum >= first)
        return randnum;
}
/*uses srand to generate a number
*@param Smallest number
* @param Largest number
*/
int RandomBetween(int first, int last) {

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
     
    srand(time(NULL));
    std::map<int, int> normaldistr;
    std::map<int, int> uniformdistr;
    std::map<int, int> srandmap;
    std::string str;
    int first, last;
    int randnumgenerated = 10000;
    std::cout << "Enter the largest and smallest number you want to generate";
    std::cout << " (seperated by a space)\n";
    while (1 != 0) {

        std::getline(std::cin, str);
        std::stringstream in(str);
        in >> first >> last;
        if (!in)
            std::cout << "Please enter two Numbers\n";
        else if (last < first) {
            int holder = first;
            first = last;
            last = holder;
            std::cout << first << " " << last << "\n";
            break;
        }
        else
            break;
    }

    for (int n = 0; n < randnumgenerated; ++n) {
        ++uniformdistr[RandomBetweenU(first, last)];
    }
    std::cout << "Distribution from Uniform Generation\n";
    PrintDistribution(uniformdistr);
    std::cout << "\n\n";

    for (int n = 0; n < randnumgenerated; ++n)
        ++normaldistr[RandomBetweenN(first, last)];
   std::cout << "Distribution from Normal Generation\n";
   PrintDistribution(normaldistr);
   std::cout << "\n\n";

   srand(time(NULL));
   for (int n = 0; n < randnumgenerated; ++n)
       ++srandmap[RandomBetween(first, last)];
   std::cout << "Distribution from srand\n";
   PrintDistribution(srandmap);

   return 0;
}