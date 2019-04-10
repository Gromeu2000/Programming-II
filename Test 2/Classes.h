/* ----------------------------------------------------------------------- */
/*                         Gerard Romeu Vidal                              */
/* ----------------------------------------------------------------------- */

#ifndef CLASSES_H
#define CLASSES_H

// TO DO: Implement the base class Battalion here
class Battalion {

protected:
	const char* name;

public:
	Battalion(const char* nameP) : name(nameP){}

	const char* getName() const {

		return name;
	}

	virtual int combatValue() const = 0;
};


// TO DO: Implement the derived class Infantry here
class Infantry : public Battalion {

private:
	int bayonetSoldiers;
	int musketSoldiers;

public:
	Infantry(const char* nameP, int bS, int mS) : Battalion(nameP), bayonetSoldiers(bS), musketSoldiers(mS) {}

	int combatValue() const {

		return bayonetSoldiers + musketSoldiers * 2;
	}
};


// TO DO: Implement the derived class Chivalry here
class Chivalry : public Battalion {

private:
	int lightChivalry;
	int heavyChivalry;

public:
	Chivalry(const char* nameP, int lC, int hC) : Battalion(nameP), lightChivalry(lC), heavyChivalry(hC){}

	int combatValue() const {

		return lightChivalry * 3 + heavyChivalry * 4;
	}
};


// TO DO: Implement the derived class Artillery here
class Artillery :public Battalion {

private:
	int mortars;
	int cannons;

public:
	Artillery(const char* nameP, int m, int c) : Battalion(nameP), mortars(m), cannons(c) {}

	int combatValue() const {

		return mortars * 5 + cannons * 6;
	}
};


const char* victoryInBattlefield(Battalion* div1, Battalion* div2)
{
	// TO DO: introduce the code of the function here
	if (div1->combatValue() > div2->combatValue()) {

		return div1->getName();
	}

	if (div1->combatValue() < div2->combatValue()) {

		return div2->getName();
	}

	else {
		
		return "Same combat value";
	}
}

#endif // CLASSES_H