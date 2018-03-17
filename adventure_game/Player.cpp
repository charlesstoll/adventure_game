#include <utility>
#include "Player.h"


Player::Player(std::pair <int, int> location) : Entity::Entity(location, PLAYER_DOWN) { ; }
std::pair <int, int> Player::get_location() { return this->location; }
bool Player::set_location(std::pair<int, int> newLocation) { location = newLocation; }
int Player::get_graphic() { return this->graphic;}
bool Player::set_graphic(int newGraphic) { return false; }//changing player graphic not allowed
