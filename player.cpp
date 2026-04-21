#include "player.h"
#include <iostream>

Player::Player(){
    name="OWO";
    hp=100;
    attack=20;
    potions=3;
}

Player::Player(string n, int h, int a, int p){
    name=n;
    hp=h;
    attack=a;
    potions=p;
}

string Player::getName() const{
    return name;
}

int Player::getHp() const{
    return hp;
}

int Player::getAttack() const{
    return attack;
}

int Player::getPotions() const{
    return potions;
}

void Player::setName(string n){
    name=n;
}

void Player::takeDamage(int damage){
    hp-=damage;
    if(hp<0){
        hp=0;
    }
}

void Player::heal(){
    if (potions>0){
        hp+=30;
        potions--;
        if(hp>100){
            hp=100;
        }
    }
}

bool Player::isAlive()const{
    return hp>0;
}