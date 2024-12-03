// December3_2024-1436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using std::cout; 
using std::vector; 
using std::string; 

struct Shoe
{
	double price; 
	string brandName; 
	int numberOfStars; 
};

struct Person //as in "structure"  
{
	string name; 
	int age;
	string height; //ex: 5 feet 9 inches 
	//char eyeColor; //Br -> Brown, and Bl -> Blue

	double amountOfMoneyInBankAccount; 

	//add attributes, as desired 
};

void printPeople(const vector<Person>& people)
{
	//people[0].age = 12; 

	cout << "Name\tAge\tHeight\tAmount of money in account\n";
	for (const auto& currentPerson : people)
	{
		cout << currentPerson.name << "\t"
			<< currentPerson.age << "\t"
			<< currentPerson.height << "\t"
			<< currentPerson.amountOfMoneyInBankAccount << "\n";
	}
}


int main()
{
	Person me = {"Seth", 36, "5 feet, 9 inches", 3000.50};
	Person you = {"Jacob Ball", 21, "Tall", 99'999.99};
	Person someOtherPerson; 
	
	vector<Person> people = { me, you, someOtherPerson };

	printPeople(people); 
	
	//vector<int> nums = { 1, 2, 3, "adsfasdf"};
}
