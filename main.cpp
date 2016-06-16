#include <iostream>
#include <cmath>

using namespace std;

void Setup();
void Game_Selection();
void Okey_selection();
void Batak_selection();
void Ihale_selection();
void King_selection();
void UBS_selection();


int main(int argc, char const *argv[])
{
	bool gameOver=false;

	Setup();
	Game_Selection();
	system("pause");
	if (gameOver==true)
	{
		return 0;
	}
}

void Game_Selection()
{
	int game_id;
	cout<<"Oyun Sec"<<endl<<"1-Okey 2-Batak 3-Ihale 4-King 5-Uc,Bes,Sekiz"<<endl;
	cin>>game_id;

	switch(game_id)
	{
		case 1: Okey_selection();
		case 2: Batak_selection();
		case 3: Ihale_selection();
		case 4: King_selection();
		case 5: UBS_selection();
	}
}

void Okey_selection()
{
	size_t num_players = 4;
	int min_score = 0;
	int max_score, select_score;
	bool gosterge;
	char gost;

	cout<<"Kactan duselim?"<<endl<<"1- 21  2- 41  3- 61  4- 81";
	cin>>select_score;
	switch(select_score)
	{
		case 1: max_score=21;
		case 2: max_score=41;
		case 3: max_score=61;
		case 4: max_score=81;
		default: max_score=21;
	}
	cout<<"Gostergeli/Gostergesiz?"<<endl<<"y/n"<<endl;
	cin>>gost;
	switch(gost)
	{
		case 'y': gosterge=true;
		case 'Y': gosterge=true;
		case 'n': gosterge=false;
		case 'N': gosterge=false;
	}

}