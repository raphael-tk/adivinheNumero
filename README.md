# 🎯 Jogo de Adivinhação em C++

Projeto simples em C++ onde o jogador tenta adivinhar um número aleatório entre 1 e 10.

## 💡 Como funciona

- O programa gera um número aleatório entre 1 e 10 usando a biblioteca `<random>`.
- O jogador digita um número como palpite.
- Se errar, o jogo avisa e pede outro número até acertar.
- Quando o número for acertado, o jogo parabeniza o jogador.

## 🛠️ Requisitos

- Compilador C++11 ou superior
- Terminal para executar o programa

### Como compilar

```bash
g++ -std=c++11 adivinhacao.cpp -o jogo
./jogo

