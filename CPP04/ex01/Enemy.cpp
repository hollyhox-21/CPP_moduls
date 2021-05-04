//
// Created by Retro Joella on 4/18/21.
//

#include "Enemy.hpp"
#include <string>
#include <iostream>

Enemy::Enemy() {

}

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type){

}

Enemy::~Enemy() {

}

void Enemy::takeDamage(int damage) {
	if (_hp - damage >= 0) {
		_hp -= damage;
	}
	else {
		_hp = 0;
	}
}

int Enemy::getHP() const {return _hp;}
const std::string & Enemy::getType() const {return _type;}
