// sa charbonne mgl c pas des lols.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iomanip>
#include "calculator.h"
#include "scientific.h"

#include <iostream>
#include <ctime>
#include <random>


using namespace std;


void pasdispo()
{

	std::cout << "Pas disponnible pour le moment :/ \n";

	std::cin.ignore();
	system("pause");
	
}


char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';

void Draw()
{
	system("cls");
	cout << "Tic Tac Toe " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Input()
{
	int a;
	cout << "Ecrit le chiffre ou tu veux mettre ton symbole : ";
	cin >> a;

	if (a == 1)
		matrix[0][0] = player;
	else if (a == 2)
		matrix[0][1] = player;
	else if (a == 3)
		matrix[0][2] = player;
	else if (a == 4)
		matrix[1][0] = player;
	else if (a == 5)
		matrix[1][1] = player;
	else if (a == 6)
		matrix[1][2] = player;
	else if (a == 7)
		matrix[2][0] = player;
	else if (a == 8)
		matrix[2][1] = player;
	else if (a == 9)
		matrix[2][2] = player;
}

void TogglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

char Win()
{

	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return '/';
}

void calculator()
{

	Calculator calc;
	Scientific sci;


	Calculator* calcPtr = &calc;


	bool sciActive = false;

	cout << "Bienvenue dans mon application de calculatrice\n\n"
		<< "Cette calculatrice a 2 modes, normal et scientifique.\n"
		<< "Vous pouvez le modifier à l'aide du mot-clé 'modifier'.\n\n"
		<< "Cette application a 2 autres mots-clés spéciaux, résultat et mémoire.\n"
		<< "résultat stocke le résultat du calcul précédent.\n"
		<< "mem vous permet de stocker et d'accéder à un numéro.\n"
		<< "Les deux peuvent être utilisés à la place des nombres lors des calculs.\n"
		<< "Ils sont tous deux locaux au mode que vous utilisez.\n";

	
	calcPtr->welcome();


	cout << setprecision(15);


	string input = "";
	while (cin >> input && input != "exit")
	{

		if (input == "change")
		{
			if (sciActive)
			{
		
				calcPtr = &calc;
				sciActive = false;
				cout << "\nSimple Calculator Activated";
			}
			else
			{

				calcPtr = &sci;
				sciActive = true;
				cout << "\nScientific Calculator Activated";
			}
		}
		calcPtr->parseOperation(input);
		calcPtr->welcome();
	}

}

void shoot()
{

	system("cls");
	std::srand(time(nullptr));

	int degats = std::rand() % 10;
	int degatsenemy = std::rand() % 10;
	int heal = std::rand() % 10;
	int hp = 10; //tes hp
	int hp2 = 10; //hp de lenemi
	int enemychoise = std::rand() % 2;
	int choise = 0;
	string p_name;

	std::cout << "\nChoisi un pseudo : ";
	std::cin >> p_name;


	for (int i = 0; i < 500; ++i)

	

	{
		


		std::cout << "\nChoisi 1 pour attaquer et 2 pour te heal : ";
		std::cin >> choise;
		std::cin.ignore();



		if (choise == 1)


		{
			hp2 -= degatsenemy;

			std::cout << "\n" << p_name << " a attack et maintenant l'enemi est a : " << hp2 << "hp's\n";




			//	hp -= degats;
			//	std::cout << "L'ennemie replique tu es maintenant a : " << hp << "hp's" << "et lui a : " << hp2 << "hp's";

		}

		if (choise == 2)

		{

			hp += heal;

			std::cout << "\n" << p_name << " tu t'es heal et mtn tu es a : " << hp << "hp's\n";

		}




		if (enemychoise == 1)
		{
			hp -= degats;
			std::cout << "\nL'enemi ta attack tu es a : " << hp << "hp's\n";
		}


		if (enemychoise == 2)
		{
			hp2 += heal;
			std::cout << "\nL'enemi viens de ce soigner et il est a  : " << hp2 << "hp's\n";
		}









		if (hp2 <= 0)
		{
			std::cout << "Donc, tu a win";
			break;
			std::cin.ignore();
		}

		if (hp <= 0)
		{
			std::cout << "Donc, tu a perdu";
			break;
			std::cin.ignore();
		}

	}

}

void mysterynumber()
{

	system("cls");
	std::srand(time(nullptr));

	int mysterynumber = std::rand() % 100;
	int max_try = 6;

	for (int i = 0; i < max_try; ++i)
	{
		std::cout << "Choisi un Nombre entre 1 et 100 : ";

		int number = 0;

		std::cin >> number;
		std::cin.ignore();


		if (mysterynumber == number)
		{
			std::cout << "Bien joue tu a trouve le numero mystere !" << std::endl;
			break;
		}

		else if (number > mysterynumber)
		{
			std::cout << "Trop grand" << std::endl;
		}

		else
		{
			std::cout << "Trop petit" << std::endl;
		}

		if (i == max_try - 1)
		{
			std::cout << "Perdu tu a plus d'essai" << std::endl;
		}
	}
}

void direbonjour()
{
	std::cout << "Hellooooo";

	std::cout << R"(   





         __      __   ______   __    __  ______   ______         _______   ________  __     __  __     __ 
        |  \    /  \ /      \ |  \  |  \|      \ /      \       |       \ |        \|  \   |  \|  \   |  \
        \$$\  /  $$|  $$$$$$\| $$\ | $$ \$$$$$$|  $$$$$$\      | $$$$$$$\| $$$$$$$$| $$   | $$| $$   | $$
         \$$\/  $$ | $$__| $$| $$$\| $$  | $$  | $$___\$$      | $$  | $$| $$__    | $$   | $$| $$   | $$
          \$$  $$  | $$    $$| $$$$\ $$  | $$   \$$    \       | $$  | $$| $$  \    \$$\ /  $$ \$$\ /  $$
           \$$$$   | $$$$$$$$| $$\$$ $$  | $$   _\$$$$$$\      | $$  | $$| $$$$$     \$$\  $$   \$$\  $$ 
           | $$    | $$  | $$| $$ \$$$$ _| $$_ |  \__| $$      | $$__/ $$| $$_____    \$$ $$     \$$ $$  
           | $$    | $$  | $$| $$  \$$$|   $$ \ \$$    $$      | $$    $$| $$     \    \$$$       \$$$   
            \$$     \$$   \$$ \$$   \$$ \$$$$$$  \$$$$$$        \$$$$$$$  \$$$$$$$$     \$         \$    
                                                                                                  
                                                                                                  
                                                                                                  )";
}





void choix()
{

	std::cout << R"(
					   *************************
					  *                         *
					  *	1 : S00N            *
					  *	2 : SH00T           *
					  *	3 : GUESSTHENUMBER  *
					  *	4 : TICTACTOE (TTT) *
					  *	5 : Calculatrice    *
					  *	                    *
					   *************************  )";

	std::cout << "\nTu veux jouer a ql jeux ? : ";


}


int main()


{

	direbonjour();



	int jeux = 0;




	choix();

	std::cin >> (jeux);

		if (jeux == 1)
		{
			pasdispo();
		}


		if (jeux == 2)
		{
			shoot();
		}
		

		if (jeux == 3)
		{
			mysterynumber();
		}
		

		if (jeux == 4)
		{
			Draw();
			while (1)
			{
				Input();
				Draw();
				if (Win() == 'X')
				{
					cout << "X gagne!" << endl;
					break;
				}
				else if (Win() == 'O')
				{
					cout << "O gagne!" << endl;
					break;
				}
				TogglePlayer();
			}
			system("pause");
			return 0;
		}

		if (jeux == 5)
		{
			calculator();
			return 0;
		}



		}
	
