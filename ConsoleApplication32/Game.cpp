#include "Game.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

Game::Game() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    int starX = std::rand() % fieldWidth;
    int starY = std::rand() % fieldHeight;
    int prizeX = std::rand() % fieldWidth;
    int prizeY = std::rand() % fieldHeight;
    field.placeStar(starX, starY);
    field.placePrize(prizeX, prizeY);
}

void Game::run() {
    while (true) {
        system("clear");
        field.drawField();
        std::cout << "WASD to move, Q to quit: ";
        char action;
        std::cin >> action;

        if (action == 'Q' || action == 'q') {
            break;
        }

        int newX = field.star.x;
        int newY = field.star.y;

        switch (action) {
        case 'W':
        case 'w':
            newY--;
            break;
        case 'A':
        case 'a':
            newX--;
            break;
        case 'S':
        case 's':
            newY++;
            break;
        case 'D':
        case 'd':
            newX++;
            break;
        }

        if (newX == field.prize.x && newY == field.prize.y) {
            int prizeX = std::rand() % fieldWidth;
            int prizeY = std::rand() % fieldHeight;
            field.placePrize(prizeX, prizeY);
        }

        field.placeStar(newX, newY);
    }
}