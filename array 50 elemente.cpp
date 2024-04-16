// array 50 elemente.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    // Declara și inițializează un array de 50 de elemente
    int array[50];

    // Inițializează array-ul cu valori de la 1 la 50
    for (int i = 0; i < 50; ++i) {
        array[i] = i + 1;
    }

    // Afișează primul element
    std::cout << "Primul element: " << array[0] << std::endl;

    // Afișează al cincilea element
    std::cout << "Al cincilea element: " << array[4] << std::endl;

    // Afișează ultimul element
    std::cout << "Ultimul element: " << array[49] << std::endl;

    return 0;
}
