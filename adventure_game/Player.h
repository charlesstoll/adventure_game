#ifndef PLAYER_H
#define PLAYER_H

#include <utility>
#include "Entity.h"
#include "Defines.h"

class Player : public Entity
{

  public:
    Player(std::pair<int, int> location);
    std::pair<int, int> get_location();
    bool set_location(std::pair<int, int> newLocation);
    int get_graphic();
    bool set_graphic(int newGraphic);
};

#endif
