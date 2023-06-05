#include "player.h"

Player::Player() {}

Player::Player(std::string name, PlayerColour player_colour) : name{name}, player_colour{player_colour} {}

std::string Player::get_name() {
    return this->name;
}

PlayerColour Player::get_player_colour() {
    return this->player_colour;
}