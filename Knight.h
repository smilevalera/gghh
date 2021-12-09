#pragma once
#include<iostream>
#include<ctime>
using namespace std;
class Knight {
private:
	string name;
	int hp;
	int damage;
	int armor;
	int critical;
public:
	Knight(string fname, int fhp, int fdamage, int farmor, int fcritical) {
		name = fname;
		hp = fhp;
		damage = fdamage;
		armor = farmor;
		critical = fcritical;
	}
	~Knight() {
		cout << "Knight destroyed\n";
	}
	string getName() { return name; }
	int getHp() { return hp; }
	int getArmor() { return armor; }
	int getDamage() {
		int chance = rand() % 100 + 1;
		if (chance >= 1 && chance <= critical) return damage * 2;
		
		else return damage;
		
	}
	int getCritical() { return critical; }
	void setName(string fname) { name = fname; }
	void setHp(int fhp) { hp = fhp; }
	void setDamge(int fdamage) { damage = fdamage; }
	void setArmor(int farmor) { armor = farmor; }
	void setCritical(int fcritical) { critical = fcritical; }
	void printKnight() {
		cout << "Knight " << name << " has " << hp << " hp\n";
	}

};
