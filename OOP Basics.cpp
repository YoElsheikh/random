#include <iostream> 
using namespace std; 


//////////////////////////////////////////////////////////////////
////////////////////// INTRO ////////////////////////////////////
////////////////////////////////////////////////////////////////

/*In contrast to OOP there is Procedural Programming that devied the program 
into a set of functions, so the data is stored in a number of variables 
the functions operate on this data, this style is simplea and "low level",
meaning that it doesn't incorporate a level f abstraction.
this style is referred to as "spaghetti code", where there are many
interdependencies between the variables that the pprogrammer will have to
copy and paste the same code over and over again and any change in one of the 
variables will emply changing it in every place where it had appeared
making things more confusing to the programmer and making the program 
prone to bugs and errors.*/

/////////// Encapsulations /////////

// related variables and functions are grouped into a unit, 
//which is called an object, an object contains:

// variables = properties
// functions = methods




//Encapsulation example:

//procedural:
let baseSalary = 30_000;
let overtime = 10;
let rate = 20;

function getWage(baseSalary, overtime, rate) {
	return baseSalary = (overtime * rate);
}

// in OO:
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



//////////// Abstraction ////////////////

/*For simpler interface, this one is obvious by looking at any OO program
it also reduces the impact of change, entailing that the private code or public 
code is not touched in the rest of the program, so if changes are made  
somewhere in the code this will not necessarily cause a chain reaction elsewhere*/

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


///////////////// Inheritance ///////////////

/*It's somply a method that allows the elimination of redundant code
entailing the possibility of inheriting similar !!Properties + Methods!! fronn
one class to the other, instead of redefining them everytime a similar class is
declared*/

class A
{
public:
    int x;
protected:
    int y;
private:
    int z;
};
 
class B : public A //same as class A but the private properties are not accessible
{
    // x is public
    // y is protected
    // z is not accessible from B
};
 
class C : protected A  //sets public and protected to protected but still z is not accessible
{
    // x is protected
    // y is protected
    // z is not accessible from C
};
 
class D : private A   // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};


///// Types of Inheritance:

/// 1.Single Inheritance:
/* A class is allowed to inherit from only one class. i.e. one sub class is inherited by
 one base class only.*/
 
//Syntax:
 class subclass_name : access_mode base_class
{
  //body of subclass
};

//Example:

// base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// sub class derived from a single base classes
class Car: public Vehicle{
 
};
 
// main function
int main()
{  
    // creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}

/// 2.Multiple Inheritance:

//Syntax:
class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  //body of subclass
};

//Example:
// first base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// second base class
class FourWheeler {
  public:
    FourWheeler()
    {
      cout << "This is a 4 wheeler Vehicle" << endl;
    }
};
 
// sub class derived from two base classes
class Car: public Vehicle, public FourWheeler {
 
};
 
// main function
int main()
{  
    // creating object of sub class will
    // invoke the constructor of base classes
    
    Car obj;
    return 0;
}


/// 3. Multilevel Inheritance:
// base class
class Vehicle
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// first sub_class derived from class vehicle
class fourWheeler: public Vehicle
{  public:
    fourWheeler()
    {
      cout<<"Objects with 4 wheels are vehicles"<<endl;
    }
};
// sub class derived from the derived base class fourWheeler
class Car: public fourWheeler{
   public:
     Car()
     {
       cout<<"Car has 4 Wheels"<<endl;
     }
};
 
// main function
int main()
{  
    //creating object of sub class will
    //invoke the constructor of base classes
    Car obj;
    return 0;
}














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