#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>

enum class EnemyType // Strongly-typed enum for enemy types
{
	ZOMBIE,
	VAMPIRE,
	GHOST,
	WEREWOLF,
	MAX
};

struct Enemy // Enemy structure to hold its properties
{
	EnemyType type;
	std::string name;
	int health;

	std::string getEnemyTypeString() //Special function to convert an enemy type into a string
	{
		switch (type)
		{
		case EnemyType::ZOMBIE: return "zombie";
		case EnemyType::VAMPIRE: return "vampire";
		case EnemyType::GHOST: return "ghost";
		case EnemyType::WEREWOLF: return "werewolf";
		default: return "";
		}
	}
};

bool operator==(const Enemy &a, const Enemy &b) // Operator == overloaded to compare to enemy objects
{
	return a.name == b.name && a.type == b.type;
}

static Enemy CreateRandomEnemy() // Function that returns a new randmly created enemy
{
	static const int MAX_LIFE{ 500 }; // Maximum life an enemy can have statically created
	static const std::string NAMES[]{ // List of possible enemy names statically created
		"Gertrudiz",
		"Pancracia",
		"Anacleto",
		"Hipolito",
		"Eustaquio",
		"Fulgencia"
	};

	return Enemy{ // Returns an enemy with random attributes
		static_cast<EnemyType>(rand() % static_cast<int>(EnemyType::MAX)),
		NAMES[rand() % (sizeof NAMES / sizeof std::string)],
		rand() % MAX_LIFE
	};
}

int main()
{
	srand(static_cast<unsigned>(time(nullptr)));
	const int MAX_ENEMIES{ 5 }; // Maximum number of enemies the array can hold
	Enemy enemies[MAX_ENEMIES]; // FIxed empty array of enemies
	
	{ // Initialitzation of each enemy in the array
		int i{ 0 };
		while (i < MAX_ENEMIES)
		{
			enemies[i] = CreateRandomEnemy();
			int j{ i - 1 };
			while (j >= 0)
			{
				if (enemies[i] == enemies[j])
				{
					--i;
					break;
				};
				j--;
			};
			++i;
		}

	}

	// Print the array of enemies
	std::cout << "List of enemies:\n";
	for (auto &enemy : enemies)
	{
		std::cout << enemy.name <<
			" is a " << enemy.getEnemyTypeString() <<
			" whose life is " << enemy.health << std::endl;
	}

    return 0;
}

