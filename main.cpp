#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	//seeds rand based on time
	srand(time(NULL));

	string name = ""; //player names
	char move_human, move_ai; //player moves
	int one_health = 10; //players health
	bool playing = true; //says if playing

	char possible_moves[3] = {'a', 's', 'p'};

	//introduction
	cout << "Welcome to Turn-Based Simulator\n";
	cout << "Please enter Player One's name: ";
	cin >> name; //player one name

	//game loop
	while(playing){
		//first player
		cout << name << " would you like to shield, attack or parry? (s/a/p)" << endl;
		cin >> move_human;

		cout << "AI's move is: " << possible_moves[rand() % 3] << endl;

		//game logic
		// if(move_one == 'a' && move_two == 'p'){
		// 	one_health -= 1;
		// }
		// else if(move_one == 'p' && move_two == 'a'){
		// 	two_health -= 1;
		// }
		// else if(move_one == 'a' && move_two == 'a'){
		// 	one_health -= 1;
		// 	two_health -= 1;
		// }

		cout << "Player One's health is: " << one_health << endl;

		//sleep(1000);
	}

	return 0;
}
