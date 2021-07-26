



/*                

***************   TEMPLATES   ****************


*/


/* A template is simply a way to pass data type as a parameter so that
the same code doesn't get repeated for different data types.
*/

#include<iostream>
using namespace std;

// a single function can work for all data types
// even user defined types if operator '>' is overloaded

template <typename T>
T myMax(T x, T y){
	return (x > y)? x: y;
}
int main (){
	//cout << myMax(int 3,  int 7) <<endl;  // call the function myMax for datatype int
	cout << myMax(double 3.0, double 7.0) << endl; //call myMax for the datatype double
	cout << myMax(char 'g', char 'e') << endl; //call myMax for the datatype chat
return 0;
}