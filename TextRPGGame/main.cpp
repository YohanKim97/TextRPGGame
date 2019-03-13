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

	while (true)
	{
		system("cls");

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