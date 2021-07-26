#include <iostream> 
using namespace std; 



// INTRO //

//In contrast to OOP there is Procedural Programming that devides the program 
//into a set of functions, so the data is stored in a number of variables 
//the functions operate on this data, this style is simplea and "low level",
//meaning that it doesn't incorporate a level f abstraction.
//this style is referred to as "spaghetti code", where there are many
//interdependencies between the variables that the pprogrammer will have to
//copy and paste the same code over and over again and any change in one of the 
//variables will emply changing it in every place where it had appeared
//making things more confusing to the programmer and making the program 
//prone to bugs and errors.

// Encapsulations //

// related variables and functions are grouped into a unit, 
//which is called an object, an object contains:

// variables = properties
// functions = methods


#include<graphics.h>
#include<conio.h>
int main()
{
int gmode= DETECT ,gm;
initgraph(&gmode,&gm,"c://tc//bgi");
readimagefile("encaps1.png",100,100,300,300);// use your pic name instead of saad and save your pic //and code in same folder.......
getch();
closegraph();
}


//Encapsulation example:

//procedural:
let baseSalary = 30_000;
let overtime = 10;
let rate = 20;

function getWage(baseSalary, overtime, rate) {
	return baseSalary = (overtime * rate);
}

//OO:


let employee = {
	baseSalary: 30_000,
	overtime: 10,
	rate: 20,        //object properties
	getWage: function() {
		return this.baseSalary + (this.overtime * this.rate);
	}
};

employee.getWage();

//Another Encapsuation example:

class EncapsulationExample { 
    private: 
        // we declare a as private to hide it from outside 
        int number1; 
        
        public: 
        // set() function to set the value of a 
        void set(int input1) 
        { 
            number1 = input1; 
        } 
        
        // get() function to return the value of a 
        int get() 
        { 
            return number1; 
        } 
}; 

// main function 
int main() 
{ 
    EncapsulationExample myInstance; 
    myInstance.set(10);
    cout << myInstance.get() << endl; 
    return 0; 
} 



// Abstraction //

//For simpler interface, this one is obvious by looking at any OO program
//it also reduces the impact of change, entailing that the private code or public 
//code is not touched in the rest of the program, so if changes are made  
//somewhere in the code this will not necessarily cause a chain reaction elsewhere

class Summation { 
   private: 
      // private variables 
      int myNum1, myNum2, myNum3 
   public: 
      void sum(int inNum1, int inNum2) 
      { 
          myNum1 = inNum1; 
          myNum2 = inNum2; 
          myNum3 = myNum1 + myNum2; 
          cout << "Sum of the two number is : " << myNum3< <endl; 
      } 
}; 
int main() 
{ 
    Summation mySum; 
    mySum.sum(5, 4); 
    return 0; 
} 
//In this case the variables myNum1, myNum2 and myNum3 are private, thereby in accessible 
//to any code other than the  summation


// Inheritance //

//It's somply a method that allows the elimination of redundant code
//entailing the possibility of inheriting similar !!Properties + Methods!! fronn
//one class to the other, instead of redefining them everytime a similar class is
//declared



// Polymorphism //

//applying a method that morphs depending on the object
//in other words, refactoring long/ugly switch/case statements




//ACCESS MODIFIERS


//Access modifiers are keywords in OOP languages that set accessibility of classes, methods and other
//members. Access modifiers are used to implement encapsulation. The three major modifiers are public,
//private and protected

//PUBLIC ACCESS
//This is the primary and default modifier. When a class is defined as public, it is accessible to every other
//class set as public and to classes of other access modifiers too. It has no scope restriction. If there's a
//need to debug a public class, the bug could be from anywhere and any package in the code.

//PROTECTED ACCESS
//rotected methods can only be accessed by the class they are defined in 
//and any other sub or inherited CLASS

//PRIVATE ACCESS
//A private method is one that is available only to the class it is defined in. Private methods are usually the
//easiest to debug as bugs are contained only within the method.