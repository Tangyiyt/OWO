#include "Enemy.h"

Enemy::Enemy(){
    name="Slime";
    hp=50;
    attack=10;
}

Enemy::Enemy(string n,int h,int a){
    name=n;
    hp=h;
    attack=a;
}

string Enemy::getName()const{
    return name;
}

int Enemy::getHp()const{
    return hp;
}

int Enemy::getAttack()const{
    return attack;
}

void Enemy::takeDamage(int damage){
    hp-=damage;
    if(hp<0){
        hp=0;
    }
}

bool Enemy::isAlive()const{
    return hp>0;
}