#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

//decribing some real world objects that is going to have attributes such as name, height etc
//as well as capabilities, such as the ability to eat etc
class Animal{     
	private: // private means that these attributes are only accessible in this class but cannot be accessed, even by a class that inherits the attricuted of the Animal class unlike "protected" wherer they can be accessed
	    std::string name; 
	    double height;
	    double weight;
	    
	    static int numOfAnimals; //shared for all of the objects in the Animal class
	    //also things that the real world object can't do are static
	    
	public: //things accessible outside of the class
	std::string GetName() {return name;}
	void SetName(std::string name){this->name = name;} 
	double GetHeight(){return height;}
	void SetHeight(double height){this->height = height;}
	double GetWeight(){return weight;}
	void SetWeight(double weight){this->weight = weight;}
	
	void SetAll(std::string, double, double); //allows the user to set/reset all of the values because the constructor will be used
	Animal(std::string, double, double); //this is a constructor, will be called each time an object is created, same name as a class
	Animal (); //this constructor is created for when no info is passed
	
	~Animal(); //deconstructor, for releasing memory or different system resources/called when deleting an abject
	static int GetNumOfAnimals(){return numOfAnimals;} //a method, will only be able to access the static numOfAnimals above
	void ToString(); //created specifically to be overwritten 
};

int Animal::numOfAnimals = 0; //static field
void Animal::SetAll(std::string name, double height, double weight){
	this->name = name;
	this->weight = weight;
	this->height = height;
	Animal::numOfAnimals++;
}

Animal::Animal(std::string name, double height, double weight){
	this->name = name;
	this->weight = weight;
	this->height = height;
	Animal::numOfAnimals++;
}
//in case the user creates an animal and assigns no attrib to it, the defaut will be:

Animal::Animal(){
	this->name = " ";
	this->weight = 0;
	this->height = 0;
	Animal::numOfAnimals++;
}
Animal::~Animal(){ //deconstructor
	std::cout << "Animal " << this-> name << " is DYEL mode\n";
}
void Animal::ToString(){  //ToString will be overwritten here by a the Harsh class
    std::cout << this -> name << " is " << this -> height << " cms tall and "
              << this -> weight << " kgs in weight\n";

}

class Human: public Animal{  //will inherite from the Animal class
	private:
		std::string sound = "Woof";
	public:
	void MakeSound(){
		std::cout << "The Human "<<
		this->GetName() << "says " <<
		this->sound << "\n";
		
	}	
	Human(std::string, double, double, std::string); //here adding the sound
	Human(): Animal(){}; //default constructor that will do the same thing as the Animal default constructor which is setting everything to zero (go check)
	void ToString(); //overrite ToString so that it does Human specific things
};

//creating the constructor outside of the above class definition:
Human::Human(std::string name, double height, double weight, std::string sound):
	Animal(name, height, weight){
		this->sound = sound;  //here Animel can initialize the name, height and weight but cannot initialize the sound, so we make a constrictor specific to it 
	}
	
void Human::ToString(){  //ToString will be overwritten here by a the Harsh class
    std::cout << this -> GetName() << " is " << this -> GetHeight() << " cms tall and "
              << this -> GetWeight() << " kgs in weight and says (sound-wise) "	//using GetName instead of "name" will allow us to use the data in Animal since we cannot access the private attributes in the class Animal in line 11
              << this -> sound << "\n";
          }
//actually using this will 
int main()
{
	Animal Moot;
	Moot.ToString();
	Moot.SetHeight(160);
	Moot.SetWeight(100);
	Moot.SetName("Moot");
	Moot.ToString();
	Animal Harsch("Harsch", 180, 80);
	Harsch.ToString();
	Human Joey("Joey", 120, 90, "Woooooooooofo");
	Joey.ToString();
	
	//create a static method/function so we can see how any objects were created ultimately
	std::cout << "Number of Animals " <<
	Animal::GetNumOfAnimals() << "\n";
	return 0;
	
}

















