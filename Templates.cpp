



/*                

***************   TEMPLATES   ****************


*/


/* A template is simply a way to pass data type as a parameter so that
the same code doesn't get repeated for different data types.
*/

#include<iostream>
using namespace std;

//Syntax:

//template<typename generic_datatype>

template<class generic_datatype>
generic_datatype sum(generic_datatype a, generic_datatype b) {
	return a + b;
}

int main(){
	double n, m, z;
    //sum(n, m);
    cout <<"enter the first double to be added" << endl;
    cin >> n;
	cout <<"enter the second double to be added" << endl;
    cin >> m;
	cout << "the result of the summation is "<<sum(n, m) << endl;
}


// a single function can work for all data types
// even user defined types if operator '>' is overloaded

/*template <typename T>
T myMax(T x, T y){
	return (x > y)? x: y;
}
int main (){
	cout << myMax<int>(3,  7) <<endl;  // call the function myMax for datatype int
	cout << myMax<double>(3.0, 7.0) << endl; //call myMax for the datatype double
	cout << myMax<char>('g', 'e') << endl; //call myMax for the datatype chat
return 0;
}
*/


//Ex. 2


