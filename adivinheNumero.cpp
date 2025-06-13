#include <iostream>
#include <random>

void Num (){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1,10);
    int nRandom = dist(gen);
    int nTest;
    
    std::cout << "Tente advinhar o número entre 1 e 10: \n";
    std::cin >> nTest;
    
    while(nTest != nRandom){
        std::cout << "Você errou! Tente novamente...\n";
        std::cin >> nTest;
    }
    
    std::cout << "Parabéns, você acertou!\n";
}

int main() {
    Num();
    return 0;
}
