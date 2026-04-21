#include <iostream>
#include "Game.h"
using namespace std;

Game::Game() {
    player = Player("OWO", 100, 20, 3);
    enemy = Enemy("史萊姆王", 80, 15);
}

void Game::showStatus() {
    cout << "\n=====  狀態  =====" << endl;
    cout << player.getName() << " HP: " << player.getHp()
         << " | 藥水: " << player.getPotions() << endl;
    cout << enemy.getName() << " HP: " << enemy.getHp() << endl;
    cout << "==================" << endl;
}

void Game::battle() {
    int choice;

    while (player.isAlive() && enemy.isAlive()) {
        showStatus();

        cout << "\n選擇你要做的行動:" << endl;
        cout << "1. 攻擊" << endl;
        cout << "2. 使用道具(藥水)" << endl;
        cout << "3. 逃跑" << endl;
        cout << "請輸入: ";
        cin >> choice;

        cout << endl;

        if (choice == 1) {
            cout << player.getName() << "攻擊" << enemy.getName()
                 << "造成了" << player.getAttack() << "點傷害" << endl;
            enemy.takeDamage(player.getAttack());
        }
        else if (choice == 2) {
            if (player.getPotions() > 0) {
                cout << player.getName() << "使用藥水並回覆30點生命" << endl;
                player.heal();
            }
            else {
                cout << "沒藥水了" << endl;
            }
        }
        else if (choice == 3) {
            cout << player.getName() << "你這雜魚，怎麼就跑掉了呢" << endl;
            return;
        }
        else {
            cout << "別亂點!" << endl;
            continue;
        }

        if (enemy.isAlive()) {
            cout << enemy.getName() << "攻擊" << player.getName()
                 << "造成了" << enemy.getAttack() << "點傷害" << endl;
            player.takeDamage(enemy.getAttack());
        }
    }

    cout << endl;
    if (player.isAlive()) {
        cout << "你打敗了" << enemy.getName() << "!" << endl;
        cout << "你贏了!" << endl;
    }
    else {
        cout << player.getName() << "你被打敗了..." << endl;
        cout << "遊戲結束" << endl;
    }
}

void Game::start() {
    string playerName;

    cout << "==========================" << endl;
    cout << "      TEXT RPG GAME       " << endl;
    cout << "==========================" << endl;
    cout << "請輸入你的名字: ";
    cin >> playerName;

    player.setName(playerName);

    cout<<"\n歡迎你, "<<player.getName() << endl;
    cout<<"一個"<<enemy.getName()<<"出現了!" << endl;

    battle();
}