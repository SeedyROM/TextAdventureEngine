#pragma once

#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

class Location {
 public:
  std::string name;
  Location() {
    name = "";
  }
  Location(std::string _name) {
    name = _name;
  } 
  bool operator==(const Location &a) {
    return name == a.name;
  }
};

class Locations {
 public:
  Locations()  {
    addLocation("Palace Bon Faggage");
    addLocation("Shitty City");
    addLocation("Piss Village");
  }
  ~Locations() { } 
  Location find(int query) {
    return this->locations[query];
  }
  Location find(std::string query) {
    for(auto &search : locations) {
      if(search.name == query)
	return search;
    }
    return Location("LOKATION NOT FOUND");
  }
  void addLocation(std::string name) {
    Location newLocation(name);
    this->locations.push_back(newLocation);
  }
 private:
  std::vector<Location> locations;
};

static Locations *LocationsList = new Locations();
/*
loc->addLocation("FUCK OFF");
Locations->newLocation("Kekconkson");
Locations->newLocation("Hate Heights");
Locations->newLocation("Broke Ass Niggas");
Locations->newLocation("Downtown with The Clown Gang");
*/
