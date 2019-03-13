#include <iostream>
#include <time.h>

using namespace std;

enum MAIN_MENU
{
	MM_NONE,
	MM_MAP,
	MM_SHOP,
	MM_INVENTORY,
	MM_EXIT
};

#define NAME_SIZE 32

enum JOB
{
	JOB_NONE,
	JOB_KNIGHT,
	JOB_ARCHER,
	JOB_MAGICIAN,
	JOB_END
};


struct _tagPlayer
{
	char	strPlayerName[NAME_SIZE];
	char	strJobTitle[NAME_SIZE];
	JOB		eJob;
	int		iAttackMin;
	int		iAttactMax;
	int     iArmorMin;
	int		iArmorMax;
	int		iHP;
	int		iHPMax;
	int		iMP;
	int		iMPMax;
	int		iExp;
	int		iLevel;

};

struct _tagMonster
{
	char strMonsterName[NAME_SIZE];
	int		iAttackMin;
	int		iAttactMax;
	int     iArmorMin;
	int		iArmorMax;
	int		iHP;
	int		iHPMax;
	int		iMP;
	int		iMPMax;
	int		iExp;
	int		iGoldMin;
	int		iGoldMax;
	int		iLevel;
};


enum MAP_LEVEL
{
	ML_NONE,
	ML_EASY,
	ML_NORMAL,
	ML_HARD,
	ML_NIGHTMARE,
	ML_RETURN
};

int main()
{

	srand((unsigned int)time(0));

	// Take Player game character job Information
	_tagPlayer tPlayer = {};


	//Get Player Name before go into the game
	cout << " Player Name :  " << endl;

	// - 1 if Player typed longer than available
	cin.getline(tPlayer.strPlayerName, NAME_SIZE - 1);

	int iJob = JOB_NONE;
	
	while (iJob == JOB_NONE)
	{
		system("cls");

		cout << " 1. Knight " << endl;
		cout << " 2. Archer " << endl;
		cout << " 3. Magician " << endl;
		cout << " Select Job Class " << endl;

		cin >> iJob;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');

			continue;
		}

		else if (iJob <= JOB_NONE || iJob >= JOB_END)
		{
			iJob = JOB_NONE;
		}
	}

	while (true)
	{
		system("cls");

		cout << " ================================== Lobby ================================== " << endl;
		cout << " 1. Map Selection " << endl;
		cout << " 2. Store " << endl;
		cout << " 3. Check Inventory " << endl;
		cout << " 4. EXIT Game  " << endl;
		cout << " Choose the Menu:  " << endl;

		int iInput;
		cin >> iInput;

		if (cin.fail())
		{
			cin.clear();

			cin.ignore(1024, '\n');

			continue;

		}

		if (iInput == MM_EXIT)
		{
			cout << " Game End " << endl;
			break;
		}

		switch (iInput)
		{
		case MM_MAP:

			while (true)
			{
				system("cls");

				cout << " ================================== Map ================================== " << endl;
				cout << " 1. Easy Mode " << endl;
				cout << " 2. Normal Mode " << endl;
				cout << " 3. Hard Mode " << endl;
				cout << " 4. Nightmare Mode " << endl;
				cout << " 5. Return to the First Menu " << endl;
				cout << " Choose the Menu:  " << endl;

				cin >> iInput;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1024, '\n');

					continue;
				}

				if (iInput == ML_RETURN)
				{
					break;
				}

			}
			
			break;
		default:
			break;
		}

	}

	return 0;
}