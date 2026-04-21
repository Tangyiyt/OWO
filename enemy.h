#ifndef ENEMY_H
#define ENEMY_H

#include <string>
using namespace std;

class Enemy{
private:
    string name;
    int hp;
    int attack;
    
public:
    Enemy();
    Enemy(string n,int h,int a);

    string getName()const;
    int getHp()const;
    int getAttack()const;

    void takeDamage(int damage);
    bool isAlive()const;
};

#endif