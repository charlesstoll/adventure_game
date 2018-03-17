#ifndef GAME_H
#define GAME_H

#include <vector>
#include <utility>
#include "Entity.h"
#include "Player.h"
#include "Room_Map.h"
#include "Defines.h"

class Game
{
  Player *player_one;
  std::vector<Entity*> entities;
  Room_Map current_room;
  int frame_buffer[ROOM_WIDTH][ROOM_HEIGHT];
public:
  Game();
  void print_screen();
  bool move_player(int move_command);
private:
  void print_frame_buffer();
};

#endif
