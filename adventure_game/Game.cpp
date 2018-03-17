#include <utility>
#include "Game.h"

Game::Game()
{
  this->player_one = new Player(std::pair <int, int> (10,2));
  entities.push_back(player_one);
//  this->current_room = *(new Room_Map());

}

void Game::print_screen()
{
//first, copy the room map into the frame buffer
for(int i = 0; i < ROOM_WIDTH; ++i)
{
  for(int j = 0; j < ROOM_HEIGHT; ++j)
  {
    frame_buffer[i][j] = current_room.get_tile(i, j);
  }
}

//now, place all of the entities on top of the room map in the frame buffer
std::pair <int, int> tempLoc;
for(int i = 0; i < entities.size(); ++i)
{
  frame_buffer[entities.at(i)->get_location().first][entities.at(i)->get_location().second] = entities.at(i)->get_graphic();
}

Game::print_frame_buffer();
}

void Game::print_frame_buffer()
{
  for(int i = 0; i < ROOM_WIDTH; ++i)
  {
    for(int j = 0; j < ROOM_HEIGHT; ++j)
    {
      printf("%d", frame_buffer[i][j]);
    }
    printf("\n");
  }
}
