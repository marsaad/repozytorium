#include <iostream>

int main() {
    int pierwsza_liczba;
    int druga_liczba;
    std::cout << "Podaj pierwszą liczbę" << std::endl;
    std::cin >> pierwsza_liczba;
    std::cout << "Podaj drugą liczbę" << std::endl;
    std::cin >> druga_liczba;
    int wynik = pierwsza_liczba + druga_liczba;
    std::cout << wynik << std::endl;
    return 0;
}
