#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

//decribing some real world objects that is going to have attributes such as name, height etc
//as well as capabilities, such as the ability to eat etc
class Animal{     
	private: //means that these attributes are only accessible in this class
	    sdt::string name; 
	    double height;
	    double weight;
	    
	    static int numOfAnimals; //shared for all of the objects in the Animal class
	    //also things that the real world object can't do are static
	    
	public: //things accessible outside of the class
	std::string GetName() {return name;}
	void SetName(std::string name){this->name = name;} 
	double Getheight(){return height;}
	void SetHeight(double height){this->height = height;}
	double GetWeight(){return weight;}
	void SetWeight(double weight){this->weight = weight;}
	
	void SetAll(std::string, double, double); //allows the user to set/reset all of the values because the constructor will be used
	Animal(std::string, double, double) //this is a constructor, will be called each time an object is created, same name as a class
	Animal (); //this constructor is created for when no info is passed
	
	~Animal() //deconstructor, for releasing memory or different system resources
	static int GetNumOfAnimals(){return numOfAnimals;} //a method, will only be able to access the static numOfAnimals above
	void ToString(); //created soecifically to be overwritten 
};

int Animal::numOfAnimals = 0; //static field
void Animal::SetAll(std::string name, double height, double weight){
	this->name = name;
	this->weight = weight;
	this->height = height;
	Animal::numOfAnimals++;
}
