/* ----------------------------------------------------------------------- */
/*                          GERARD ROMEU VIDAL                               */
/* ----------------------------------------------------------------------- */

#ifndef DIABLO2_H
#define DIABLO2_H
#include <string.h>

//////////////CHARACTER
class Character
{
private:
	char name[25];

protected:
	int lifePoints;

public:
	Character(const char* nameP, int HP) {

		strcpy_s(name, nameP);
		lifePoints = HP;
	}

	~Character(){}

	const char* getName() const {

		return name;
	}

	int getLifePoints() const {

		return lifePoints;
	}

	virtual int physicalAttack() const = 0;
	virtual int magicAttack() const = 0;
	virtual void applyDamage(int physicalDamage, int magicDamage) = 0;
};


//////////////BARBARIAN
class Barbarian : public Character {

public:
	Barbarian() : Character("Barbarian", 20){}

	int physicalAttack() const override {

		int physicalAtt = 10;
		return physicalAtt;
	}

	int magicAttack() const override {

		int magicalAtt = 0;
		return magicalAtt;
	}

	void applyDamage(int physicalDamge, int magicDamage) override {

		if ((physicalDamge - 5) > 0){ 
			
			lifePoints -= physicalDamge - 5;
		}

		if ((magicDamage - 0) > 0) {

			lifePoints -= magicDamage;
		}

		if (lifePoints < 0) {

			lifePoints = 0;
		}
	}
};


//////////////PALADIN
class Paladin : public Character {

public:
	Paladin() : Character("Paladin", 15) {}

	int physicalAttack() const override{

		int physicalAtt = 3;
		return physicalAtt;
	}

	int magicAttack() const override{

		int magicalAtt = 3;
		return magicalAtt;
	}

	void applyDamage(int physicalDamge, int magicDamage) override {

		if ((physicalDamge - 5) > 0) {

			lifePoints -= physicalDamge - 5;
		}

		if ((magicDamage - 5) > 0) {

			lifePoints -= magicDamage - 5;
		}

		if (lifePoints < 0) {

			lifePoints = 0;
		}
	}
};

//////////////WIZARD
class Wizard : public Character {

public:
	Wizard() : Character("Wizard", 12) {}

	int physicalAttack() const override{

		int physicalAtt = 0;
		return physicalAtt;
	}

	int magicAttack() const override{

		int magicalatt = 15;
		return magicalatt;
	}

	void applyDamage(int physicalDamge, int magicDamage) override {

		if ((physicalDamge - 0) > 0) {

			lifePoints -= physicalDamge;
		}

		if ((magicDamage - 5) > 0) {

			lifePoints -= magicDamage - 5;
		}

		if (lifePoints < 0) {

			lifePoints = 0;
		}
	}
};

//////////////EVALUATE ATTACK
void evaluateAttack(Character* attacker, Character* defender)
{
	defender->applyDamage(attacker->physicalAttack(), attacker->magicAttack());
}

#endif