#include<stdio.h>
#include "Room_Map.h"

Room_Map::Room_Map(void)
{
  printf("creating map...\n");
  for(int i = 0; i < ROOM_HEIGHT; ++i)
  {
    for(int j = 0; j < ROOM_WIDTH; ++j)
    {
      map[i][j] = EMPTY_TILE;
    }
  }
}

int Room_Map::get_tile(int x, int y)
{
  if((x < ROOM_WIDTH) && (y < ROOM_HEIGHT)) return this->map[x][y];
  else return -1;
}

int Room_Map::get_tile(std::pair <int, int> location)
{
  return Room_Map::get_tile(location.first, location.second);
}

bool Room_Map::set_tile(int x, int y, int tile)
{
  if((x<ROOM_WIDTH) && (y < ROOM_HEIGHT)) return false;
  this->map[x][y] = tile;
  return true;
}

bool Room_Map::set_tile(std::pair <int, int> location, int tile)
{
  return Room_Map::set_tile(location.first, location.second, tile);
}


