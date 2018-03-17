#ifndef ROOM_MAP_H
#define ROOM_MAP_H

#include <utility>
#include <stdio.h>
#include "Defines.h"

#define ROOM_HEIGHT 20
#define ROOM_WIDTH 20

class Room_Map
{
private:
  int map[ROOM_WIDTH][ROOM_HEIGHT];
  
public:
  Room_Map();
  int get_tile(int x, int y);
  int get_tile(std::pair <int, int> location);
  bool set_tile(int x, int y, int tile);
  bool set_tile(std::pair <int, int> location, int tile);
};

#endif
