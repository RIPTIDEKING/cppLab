#include <iostream>
using namespace std;

class game{
	public:
		int player_no;
		static	int s_player_no;
};

int game::s_player_no;
int main(){
	game g;
	cout << "Enter Player no.(static): ";
	cin >> game::s_player_no;
	cout << "No. of player in a game(static): " << game::s_player_no <<endl;
	cout << "Enter Player no.: ";
	cin >> g.player_no;
	cout << "No. of player in a game: "<<g.player_no;
	
}
