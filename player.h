#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player{
private:
    string name;
    int hp;
    int attack;
    int potions;

public:
    Player();
    Player(string n,int h,int a,int p);

    string getName() const;
    int getHp() const;
    int getAttack() const;
    int getPotions() const;

    void setName(string n);
    void takeDamage(int damage);
    void heal();
    bool isAlive() const;
};
#endif