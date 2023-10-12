#pragma once
#include "Field.h"

class Game {
public:
    Field field;

    Game();
    Game(Game&& other) noexcept;

    void run();
};