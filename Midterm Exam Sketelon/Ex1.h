/* ----------------------------------------------------------------------- */
/*                         Gerard Romeu Vidal                              */
/* ----------------------------------------------------------------------- */

#ifndef EX1_H
#define EX1_H

// Uncomment to test the exercise
#define TEST_EX1

/** Maximum number of items in the inventory. */
static const int MAX_ITEMS = 9;

/** Enumerated type for items. */
enum class Item {
	Food,
	Sword,
	Torch,
	Empty
};



// TO DO: Insert your code here

class Inventory {

private:
	Item items[MAX_ITEMS];

public:
	Inventory() {

		clear();
	}

	const void clear() {

		for (int i = 0; i < MAX_ITEMS; i++) {

			items[i] = Item::Empty;
		}
	}

	const void setItem(int index, Item item) {

			items[index] = item;
	}

	const Item itemAt(int index) const {

		return items[index];
	}

	const int itemCount(Item item) const {

		int count = 0;

		for (int i = 0; i < MAX_ITEMS; i++) {

			if (items[i] == item) {

				count++;
			}
		}
		

		return count;
	}

	const bool operator== (Inventory &inv) const
	{
		return
			itemCount(Item::Food) == inv.itemCount(Item::Food) &&
			itemCount(Item::Torch) == inv.itemCount(Item::Torch) &&
			itemCount(Item::Sword) == inv.itemCount(Item::Sword);
	}
};

#endif
