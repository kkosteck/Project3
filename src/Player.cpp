/*Kacper Kostecki, 300236, projekt III
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include "functions.hpp"
#include "Player.hpp"
using namespace std;

void Player::setData(){
	cout<<"Player's: ";
	cout<<"name: ";
	inputSecurity(name);
	cout<<"surname: ";
	inputSecurity(surname);
	cout<<"age: ";
	age = inputSecurity();
	cout<<"former club: ";
	cin.ignore();
	getline(cin, formerClub);
	cout<<"years of activity: ";
	activityYears = inputSecurity();
}

ostream & operator<< (ostream &output, const Player &player){
	output<<"	Name: "<< player.name <<endl;
	output<<"	Surname: "<< player.surname <<endl;
	output<<"	Age: "<<player.age<<endl;
	output<<"	Former club: "<<player.formerClub<<endl;
	output<<"	Years of activity: "<<player.activityYears<<endl;
	return output;
}