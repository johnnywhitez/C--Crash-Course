#include <iostream>

using namespace std;


//Stage 6 functions
//
//void Whitez() {
//	cout<< "Welcome Whitez"<<endl;
//}

//void Whitez(string name, int age){
//	cout << "Hello " << name <<" you are "<<age <<endl;
//}


	// Stage 7
//double cube(double num) {
//	return num * num * num;
//}


// stage 9 
// case and breaks 
//
//string getDaysoftheWeek(int dayNum) {
//	string dayName;
//	
////	if(dayNum == 0) {
////		dayName == "Sunday";
////	} else if (dayNum == 1) {
////		dayName == "Monday";
////	}
////	 basic structure  on making else if cases
//
////  switch cases
//switch(dayNum) {
//	case 0:
//		dayName =  "Sunday";
//		break;
//	case 1:
//		dayName =  "Monday";
//		break; 	
//	case 2:
//		dayName =  "Tuesday";
//		break; 	
//	case 3:
//		dayName =  "wednesday";
//		break; 	
//	case 4:
//		dayName =  "Thursday";
//		break; 	
//	case 5:
//		dayName =  "Friday";
//		break; 	
//	case 6:
//		dayName =  "saturday";
//		break; 
//	default:
//		dayName = "Invalid";
//}
//	return dayName;
//}

		 /// stage 11 //
		 // exponents // power number 
		 
//int whitez(int BaseNum, int PowerNum) {
//		int result = 1;
//		for(int i = 0;  i < PowerNum; i++) {
//		 	result = result * BaseNum;
//		 	// where result will now be equal to BaseNum due to the looping ++
//			}
//			return result;
//		 }


			// Stage 15 
//class Book {
//	public: 
//		string title;
//		string author;
//		int pages;
//		Book(string name){
//			cout << name << endl;
//		}
//};
//

			// stage 15 

//class Book {
//	public: 
//		string title;
//		string author;
//		int pages;
//		
//		// error handling where no book details are passed in
//		Book(){
//			title = "No Title Found";
//			author = "No Author Found";
//			pages = 0;
//			
//			
//		}
//		
//		Book(string aTitle, string aAuthor, int aPages){
//			title = aTitle;
//			author = aAuthor;
//			pages = aPages;
//		}
//};
//	// class specification  

		//stage 16

class student {
	public: 
	string name;
	string major;
	double gpa;
	
	student(string aName, string aMajor, double aGpa) {
		name = aName;
		major = aMajor;
		gpa = aGpa;
	}
	
	bool hasHonors(){
		if(gpa >= 3.5){
			return true;
		}
		return false;
	}
};

		
int main() {
	cout << "Hello World -- Welcome to Whitez Crash Course" <<endl;

//**	First Stage *//
//	string name ;
//	cout << "Enter your Name: ";
//	getline(cin, name);
//	
//	cout <<"Hello "<<name<<endl;
//	
//	
	//Second Stage
	
//	
//	double num1, num2;
//	double cal;
//	cout << "Enter Num1: ";
//	cin >> num1;
//	
//	cout << "Enter num2: ";
//	cin >> num2;
//	
//	cal = num1 + num2 ;
//	
//	cout<<"Cal is: "<<cal<<endl;
//	
//	
//	

   // Third Stage 
   
//   string color, noun, celebrity;
//   
//   cout << "Enter Color: ";
//   getline(cin, color);
//   cout <<"Enter Plural Noun: ";
//   getline(cin, noun);
//   cout << "Enter Celebrity: ";
//   getline(cin, celebrity);
//   
//   
//   cout << "______________________________"<< endl;
//   cout <<  "Roses are: "<< color << endl;
//   cout << noun <<" Are Blue"<<endl;
//   cout << "why should i love " << celebrity <<endl;
//	
	 
	 //Fourth Stage 
	 
	 //cout << " Stage Four" << endl;
	 
	 // getting index
	 
	 // getting index from string 
//	 
//	 string bookworm = "Whitez";
//	 bookworm[3] = '$';	
//	cout << "New Bookworm is : "<< bookworm[3]<<endl;
//	cout << "New Bookworm is: " << bookworm<<endl;
//	
//	//make user enter new index value
//	cout << "Enter New Bookworm:";
//	cin>>bookworm[3];
//	cout << "New Bookworm is: " << bookworm<<endl;
//	cout << bookworm.find("e", 0)<<endl;// find to find index value 
//	cout << bookworm.substr(2, 1)<<endl; //substring remove from index start first parameter is where index starts and second to continue count index..
//	
//	// find your substr
//	cout << "_______"<<endl;
//	string bookwormSub;
//	bookwormSub = bookworm.substr(2,3);
//	cout << bookwormSub;
//	


		// Stage Five
		
		//Arrays Index
		
// 	int luckyNum[20] = {4, 8, 8, 5 ,6};
////	 getting index for arrays
//	luckyNum[0];
//	cout << luckyNum[1]<<endl;
//	
//// change index value of arrays 
//
//	luckyNum[2] = 100;
//	
//	cout << "New Num index is : "<< luckyNum[2];
	
	
	// Stage 6 functions
	
	//functions are declared off main
	// callouts in main to .exe	
	
//	  Whitez();
// 	Whitez("Justice#", 45);	// where justice# is the string value and 45 is int age.


			// Stage 7 Return 	Statements
			
//			cout << cube(6.0); // return value of num declare and cout 
//


			///Stage 8 
			
		// If statements 
		
//		bool isAlpha = true;
//		bool isgirl = false;
//		
//		if(isAlpha == true ) {
//			cout << "Yes its True "<<endl;
////		} if (isAlpha == isgirl){
////			cout << "is false" <<endl;
////		} if (isAlpha || isgirl) {
////			cout << " or is : " << endl;
//		} else if (isAlpha && isgirl){
//			cout << "We are true" << endl;
//		} else {
//			cout << " We are not true " << endl;
//		}
//	


		// Stage 9
		
		// Case  and break statements
		
//		cout <<"Your day is: " <<getDaysoftheWeek(200)<<endl;
//		
		
	/// stage 10 
	
	///while  and For loops
	
	
//	int index = 1;
//	do {
//			cout << "Whitez Stage 1000"<<endl;
//	index++;
//	}
//	while (index <= 4);{
//	cout << "Whitez Stage 10"<<endl;
//	index++;
//	}

// loops 
//
//int index = 1;
//for(int i = 1; index <= 5; ) {
//}
//	
//}

// For Loops
//
		// while loop
//int index = 1;
//while (index <= 5) {
//	cout <<"your index is : "<<  index <<endl;
//	index++;
//}
		//for loop
//
// for (int i = 1; i <= 5; i++ ){
// 	cout <<"i is : " << i <<endl;
// }
//

		///with arrays
		
//		int whitez[] = {1, 2, 3, 4, 6, 8};
//		for(int i = 0; i < 5; i++) {
//			cout << whitez[i] <<endl;
//			cout <<"enter number: ";
//			cin >> whitez[2];
//		}

		 //stage 11
		 
//		 //exponents
//		 cout <<"Power is: " <<whitez(4,2);

		
		/// stage 12
		
		/// 2d arrays and nested for loop
		
		
		// 2d array 
		
		
//		//where first [] = the size of the array
//		// where first [] = the number of elements in each array
//		// numberGrid array size must be defined and the size of elements inside too  
//		int numberGrid[3][2] = {
//		{1, 2},
//		{3, 4},
//		{5, 6}	
//		};
//	cout <<"NumberGrid: "<<  numberGrid[0][1] <<endl;
//		// where first [0] first index(0) of array 
//		// second [1] second index of the element in the first array (0) 
//		
//		
//		// nested for loop
//		 for(int i = 0; i < 3; i++) // array size
//		  {
//		 	for (int j =  0; j < 2; j++) // array elements size
//			 {
//		 		cout << numberGrid[i][j];
//			 }  // print in next lines 
//			 cout <<endl;
//		 }
//		 
		 // stage 13
		 
		 // comments
	// single line 
	
	/* 
	multi
	line	
	*/
	
			// Stage 14
	
	// pointers
	
//	int age = 10;
//	double gpa = 2.78;
//	string name =  "Mike";
//	cout << "Meemory Address/Pointer is: " << &gpa;
//	// where & is the pointer to get the hex value . memory address

//	 // creating pointer variables
//	 int age = 22;
//	 string name = "Whitez";
//	 double gpa = 2.4;
//	 
//	 //declering pVariables
//	 // p used to set diff
//	 int *pAge = &age;
//	 double *pGpa = &gpa;
//	 string *pName = &name;
//	 
//	 cout << "pAge is: "<< pAge<<endl;
//	 cout << "pgpa is: "<< pGpa<<endl;
//	 cout << "pname is: "<< pName<<endl;
//	 

		// dereference pointers
		
	// get the actual value of the pointer 
	
//	int age = 3;
//	int *pAge = &age;
//	
//	cout << "dereference value is: "<<*pAge<<endl;
//	cout << "dereference value is: "<<*&age<<endl;
//	// where * is the dereference 
//	
	
		
		//	stage 15
		
		//classes and objects 
		
		// object actual instance
		
//	Book Book1("Whitez List Books");
//	Book1.title = "Johnny The Barbarian";
//	Book1.author = "Whitez";
//	Book1.pages = 59;
//	
//	Book Book2("Whitez list books 2"); // ("name") 
//	Book2.title = "Adventure Town";
//	Book2.author = "Whitez";
//	Book2.pages = 80;
	
//	cout << Book1.title<<endl;
//	cout << Book2.pages<<endl;
//		


		 //Constructors Functions
		 
//	Book Book1("Harry P", "JK Hop", 80);
//
//	Book Book2("Harry J", "JK Hoppy", 80);
//	Book Book3;
//	
//	cout << Book1.title<< " -- "<<Book1.author<<"-- "<<Book1.pages<<endl;
//	
//	// where error handling will be passed in
//	cout << Book3.title;

		// stage 16 
		
		// instance 
		// object functions 
		
	student student1("Just", "Business", 3.6);
	student student2("Just2", "Home Econs", 3.0);
	
	cout << student2.hasHonors()<<endl;
	cout << student1.hasHonors()<<endl;
	

	return 0;
}
