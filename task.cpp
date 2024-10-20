#include <iostream>
#include <vector>
#include <array> 
using namespace std;

class Student {
	string name;
	array<int, 4> scores; // static (olcusu sabitdir)
	vector<int> dynamicScores;
}// dynamic

class Book{
    string title;
    string author;
}
public:
	Student(string name,array<int,4> scores,vector<int> dynamicScores = {})
	{
		this->name = name;
		this->scores = scores;
		this->dynamicScores = dynamicScores;
	}

	void addDynamicScores(int score) {
		dynamicScores.push_back(score);
	}

	void display() {
		cout << " Title: " << this->name << endl;
		cout << " Scores (Array) : " << endl;
		for (int score : scores )
		{
			cout << score << endl;
		}
		cout << " Scores (Vector) : " << endl;
		for (int score : dynamicScores)
		{
			cout << score << endl;
		}
		cout << "--------------------" << endl;
	}
};

int main() {
	
	array<int, 4> scores = { 91,92,93,94 };
	Student student("Javid", scores);
	student.addDynamicScores(99);

	student.display();


	// Task
	// class Book -> title, author,  
	// array for static reviews
	// vector for dynamic reviews
	
	//display
	//addDynamicScores
}

