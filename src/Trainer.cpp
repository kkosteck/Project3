/*Kacper Kostecki, 300236, projekt III
prowadzący: Wiktor Kuśmirek
*/
#include <iostream>
#include "functions.hpp"
#include "Trainer.hpp"
using namespace std;

void Trainer::setData(){
	cout<<"Trainer's: "<<endl;
	cout<<"name: ";
	inputSecurity(name);
	cout<<"surname: ";
	inputSecurity(surname);
	cout<<"age: ";
	age = inputSecurity();
}

ostream & operator<< (ostream &output, const Trainer &t){
	output<<"Trainer: "<<endl;
	output<<"\tName: "<< t.name <<endl;
	output<<"\tSurname: "<< t.surname <<endl;
	output<<"\tAge: "<<t.age<<endl;
	return output;
}
