// helloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>

int main()
{
    unsigned int n = std::thread::hardware_concurrency();
    std::cout << n << " concurrent threads are supported.\n";
    //std::thread::hardware_concurrency()
    
    //std::cout << "Hello World!\n";

    // Task 3
    /*int man, wives, sacks, cats, kits;
    man = 1;
    wives = man*7;
    sacks = wives*7;
    cats = sacks*7;
    kits = cats*7;
    
    int total;
    total = man + wives + cats + kits;

    std::cout << total;
    */

    // Task 4

    /* float potato, carpet, catfood, cats, bananas, totalPrice;
    
    potato = 5 * 0.05;
    carpet = 5 * 5;
    catfood = 5 * 0.05;
    cats = 5 * 5;
    bananas = 5 * 0.05;

    totalPrice = potato + carpet + catfood + cats + bananas;
    std::cout << "£" << totalPrice;
    */

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
