#ifndef ENTITY_H
#define ENTITY_H

#include <utility>

class Entity
{
  protected:
    std::pair <int, int> location;
    int graphic;

  public:
    Entity(std::pair <int, int> location, int graphic); 
    virtual std::pair<int, int> get_location() = 0;
    virtual bool set_location(std::pair<int, int> newLocation) = 0;
    virtual int get_graphic() = 0;
    virtual bool set_graphic(int newGraphic) = 0;
};

#endif
