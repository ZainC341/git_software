// git_software.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>
using namespace std;

int sum(vector<int> vec) {
    
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec.at(i);
    }

    return sum;
}

int product(vector<int> vec) {
    int product = 0;
    for (int i = 0; i < vec.size(); ++i) {
        product *= vec.at(i);
    }

    return product;
}

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
