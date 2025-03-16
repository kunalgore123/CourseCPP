
#include "Functions.h"


int Add (int a, int b)
{
	return a+b;
}

void StringManipulation()
{
	/*string Name;

	cout << "enter your Name : " ;
	cin >> Name;
	string Greeting;
	Greeting = "Hello " + Name;
	cout << Greeting << endl;

	if (Name == "Kunal")
	{
	Greeting += " I Know you !!";
	}
	cout << Greeting << endl;
	int len = Greeting.length();
	*/

	/*string A = "A", a = "a";
	cout << (A + a);*/

	/*
	char a = 'a' , A = 'A';
	cout << "A = " << (int)A << endl << "a = " << (int)a << endl << "A - a = "<< (A - a) ;
	*/
	/*for (int Count = 0 ; Count <= 10000; Count++)
	{
	cout << Count << " = " << (char)Count << endl;
	}*/

	string name1 ,name2;

	cout << "enter 1st name : " ;
	//cin>> name1;
	getline(cin, name1);		// get string with spaces
	cout << "enter 2nd name : " ;
	//cin>> name2;
	getline(cin, name2);

	if (name1.length() == name2.length())
	{
		cout << "They are same length!!" << endl;

	}
	else if (name1.length() > name2.length())
	{
		cout << "first name is longer" << endl;
	}
	else 
	{
		cout << "second name is longer" << endl;
	}
	return;

}

void XMLFileImplementation()
{
	//WriteFile();
	ReadFile();
}

void WriteFile()
{
	ofstream myfile;

	myfile.open ("example.txt");
	myfile << "Writing this to a file.\n";


	//myfile.close();
}

void ReadFile()
{
	vector <string> XMLFileCopy;
	vector <int> positionOfSpecialWord;
	ifstream myfile ("example.txt");
	string line;
	int count = 0, foundCount = 0;
	int lineNumber = 0;
	size_t found ;
	string ModuleID = "ModuleID=";
	string doubleQoaut = "";
	if (myfile.is_open())
	{
		while (getline (myfile,line))
		{

			XMLFileCopy.push_back(line);
			// value = XMLFileCopy[lineNumber].find(ModuleID);
			/*if (value == 1)
			{
			count++;
			}*/

			//cout << XMLFileCopy[lineNumber] << '\n';
			lineNumber++;
		}


		string tempString;
		for (int count = 0; count < lineNumber; count++)
		{
			tempString = XMLFileCopy[count];
			{
				found = tempString.find(ModuleID);
				if (found != 4294967295) 
				{
					foundCount++;
					positionOfSpecialWord.push_back(found);
				}
				//found = 0;
			}
		}
		string::npos;
		myfile.close();
	}
	else 
		cout << "unable to opern a file";

}

void TypesOfFunctions()
{
	//Simple functions
	//Static functions
	//Const functions
	//Inline functions
	//Friend functions


}

void SampleExample1()
{
	int a;
	double long b;
	char c;
	float d;
	double e;
	int value = 1;
	//cin >> value;
	//while (value != 0)
	{
		cout << "Enter Your Values : ";
		cin >> a >> b >> c >> d >> e ;
		cout << endl << (int)a << endl << (double long)b << endl << (char)c << endl << (float)d << endl <<(double)e << endl << endl;
		//cout << "Do you want to continue ? press 0 : ";
		//cin >> value;
	}

	//return 0;
}

/*
Problem Statement sockMerchant() 
John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers representing the color of each sock, 
determine how many pairs of socks with matching colors there are.

For example, there are  socks with colors . There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .
Function Description

Complete the sockMerchant function in the editor below. It must return an integer representing the number of matching pairs of socks that are available.

sockMerchant has the following parameter(s):

n: the number of socks in the pile
ar: the colors of each sock
Input Format

The first line contains an integer , the number of socks represented in .
The second line contains  space-separated integers describing the colors  of the socks in the pile.

Constraints

where 
Output Format

Return the total number of matching pairs of socks that John can sell.

Sample Input

9 10 20 20 10 10 30 50 10 20
Sample Output

3

*/
// Complete the sockMerchant function below.
int sockMerchant() 
{
	vector<int> ar ;
	ar.push_back(20);
	ar.push_back(4);
	ar.push_back(5);
	ar.push_back(5);
	ar.push_back(5);
	ar.push_back(6);
	ar.push_back(6);
	ar.push_back(4);
	ar.push_back(1);
	ar.push_back(4);
	ar.push_back(4);
	ar.push_back(3);
	ar.push_back(6);
	ar.push_back(6);
	ar.push_back(3);
	ar.push_back(6);
	ar.push_back(1);
	ar.push_back(4);
	ar.push_back(5);
	ar.push_back(5);
	ar.push_back(5);
	int n = ar.size();
	vector <int> uniqueValue; // Vector for unique values from given unber of inputs
	vector <int> numberOfOccurences; // vector for how may occuences for each unique values 
	sort(ar.begin(),ar.end());	//  Sorting given number of vectors 

	///START Logic for getting unique values and there number of occurences
	for (int outerCount = 0; outerCount < n; outerCount++)
	{
		uniqueValue.push_back(ar[outerCount]);
		numberOfOccurences.push_back(0); // initializing vector along with uniqueValue
		int valueCount = 0;
		for (int innerCount = outerCount ; innerCount < n; innerCount++)
		{
			if (ar[outerCount] == ar[innerCount])
			{
				valueCount++;
				numberOfOccurences.at(uniqueValue.size() - 1) = valueCount; // Updating value at vector location on basis of unique Value
			}
			else
			{
				outerCount = innerCount - 1; // Assign value for outer count
				break;
			}
		}
	}
	/// END

	int itr = numberOfOccurences.size();
	int pairCount = 0; // Contains Pairs of socks
	int index = 0; // index for vector position
	while(index < itr)
	{
		if (numberOfOccurences[index] % 2 == 0 || numberOfOccurences[index] > 2)
		{
			pairCount += numberOfOccurences[index]/2;
		}
		index++;
	}
	return pairCount;
}


class Fuctions
{
	int a;
	MEMORYSTATUSEX memInfo;
	//DWORDLONG totalPhysMem = memInfo.ullTotalPhys;
	/*
	memInfo.ullTotalPhys();

	PROCESS_MEMORY_COUNTERS_EX pmc;
	GetProcessMemoryInfo(*/
};

class Addition : public Fuctions
{

};

class HotelRoom 
{
public:
	HotelRoom(int bedrooms, int bathrooms) 
		: bedrooms_(bedrooms), bathrooms_(bathrooms) {}

	// int get_price() 
	virtual int get_price() // this function needs to be virtual so that call can go to child class function
	{
		return 50*bedrooms_ + 100*bathrooms_;
	}
private:
	int bedrooms_;
	int bathrooms_;
};

class HotelApartment : public HotelRoom 
{
public:
	HotelApartment(int bedrooms, int bathrooms) 
		: HotelRoom(bedrooms, bathrooms) {}

	int get_price() 
	{
		return HotelRoom::get_price() + 100;
	}
};

int mainForHotel() 
{
	int n;
	cin >> n;
	vector<HotelRoom*> rooms;
	for (int i = 0; i < n; ++i) 
	{
		string room_type;
		int bedrooms;
		int bathrooms;
		cin >> room_type >> bedrooms >> bathrooms;
		if (room_type == "standard") 
		{
			rooms.push_back(new HotelRoom(bedrooms, bathrooms));
		} else 
		{
			rooms.push_back(new HotelApartment(bedrooms, bathrooms));
		}
	}

	int total_profit = 0;
	for (auto room : rooms) 
	{
		total_profit += room->get_price();
	}
	cout << total_profit << endl;

	for (auto room : rooms) 
	{
		delete room;
	}
	rooms.clear();

	return 0;
}

int largest_proper_divisor(int n) throw(invalid_argument)
{
	if (n == 0 || n == 1) 
	{
		throw invalid_argument("largest proper divisor is not defined for n=0");
		//throw n;
	}
	for (int i = n/2; i >= 1; --i) 
	{
		if (n % i == 0) 
		{
			return i;
		}
	}
	return -1; // will never happen
}

void process_input(int n) 
{
	try 
	{
		int d = largest_proper_divisor(n);
		cout << "result=" << d << endl;
	}
	catch(int a)
	{
		std::cerr << "largest proper divisor is not defined for n=" << a << endl;
	}
	catch(const std::invalid_argument& ia)
	{
		std::cerr << "largest proper divisor is not defined for n=" << ia.what() << endl;
	}
	cout << "returning control flow to caller" << endl;
}

int mainCppExceptionHandling() 
{
	int n;
	cin >> n;
	process_input(n);
	return 0;
}

int mainMalloc()
{
	int *ptr;
	ptr = (int*) malloc(5*sizeof(int));
	if(!ptr)
	{
		cout << "Memory Allocation Failed";
		exit(1);
	}
	cout << "Initializing values..." << endl << endl;
	for (int i=0; i<5; i++)
	{
		ptr[i] = i*2+1;
	}
	cout << "Initialized values" << endl;
	for (int i=0; i<5; i++)
	{
		/* ptr[i] and *(ptr+i) can be used interchangeably */
		cout << *(ptr+i) << endl;
	}
	free(ptr);
	return 0;
}

string findNextPalinDate (string input) 
{
	// Write your code here
	string dateString = "", monthString = "";
	dateString = input.at(0);
	dateString.resize(2,input.at(1));
	monthString = input.at(3);
	monthString.resize(2, input.at(4));
	int DateInt = stoi(dateString);
	int monthInt = stoi(monthString);
	int reverseMonth ;
	// Finding palindrome of month
	reverseMonth  = monthInt/10 + 10*(monthInt%10);

	if (DateInt <= 60 && monthInt <= 30)
	{
		if (DateInt< reverseMonth)
			return AppendZeroToDate(to_string(reverseMonth) + ":" + monthString);
		else
		{
			monthInt++;
			reverseMonth  = monthInt/10 + 10*(monthInt%10);
			return AppendZeroToDate(to_string(reverseMonth) + ":" + to_string(monthInt));
		}
	}
	else
	{
		return "Invalid Input !!!";
	}


	return 0;
}


string AppendZeroToDate(string date)
{
	vector <string> dateString;
	string result ;
	int dateCount = date.length();
	for (int counter = 0 ; counter < dateCount ; counter++ )
		result.push_back(date.at(counter));
	if (result.length()<5)
	{
		/// find position of :
		int position = 0;
		for (int counter = 0 ; counter < dateCount ; counter++ )
		{
			char str = date.at(counter);
			if (str != ':')
			{
				position++;
			}
			else
				break;
		}
		if (position == 1)
		{
			result.insert(0,"0");
		}
		if (position == 2)
		{
			result.insert(3,"0");
		}
	}
	return result;
}

typedef int MyInt;

int mainPalindromicDates() 
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	string input;
	//getline(cin, input);

	string out_;
	out_ = findNextPalinDate("30:03"/*input*/);
	cout << out_;

	MyInt i;
	i = 9;
	i = 6874654654;
	return 0;
}

void xlFileOperation()
{
	ofstream MyExcelFile;
	MyExcelFile.open("test.csv");

	MyExcelFile << "First Name, Last Name, Middle Initial" << endl;
	MyExcelFile << "Michael, Jackson, B." << endl;


	MyExcelFile.close();
}


#pragma startup func1 
#pragma exit func2 

void func1() 
{ 
	printf("Inside func1()\n"); 
} 

void func2() 
{ 
	printf("Inside func2()\n"); 
} 

int preprocessorDirectivesDemo() 
{ 
	func1(); 
	func2(); 
	printf("Inside main()\n"); 

	return 0; 
} 


struct  record
{
public:
	char Name[20];
	int UniqueID;
	int Size;
};

std::vector< record> Records;
void load()
{
	record copper1 = {"COPPER_1_F", 34001, 5};
	Records.push_back(copper1);
	record copper2 = {"COPPER_2_F", 25002, 50};
	Records.push_back(copper2);
	record silver1 = {"SILVER_1_F", 30100, 100};
	Records.push_back(silver1);
	record Gold2 = {"GOLD_2_F", 24216, 100};
	Records.push_back(Gold2);
	record copper10 = {"COPPER_1_O", 35000, 5};
	Records.push_back(copper10);
	record silver10 = {"SILVER_1_O", 32927, 100};
	Records.push_back(silver10);
	record bronz10 = {"BRONZE_1_O", 25125, 50};
	Records.push_back(bronz10);
	record gold1 = {"GOLD_1_F", 26584, 100};
	Records.push_back(gold1);
	record copper2F = {"COPPER_2_F", 34999, 5};
	Records.push_back(copper2F);
	record bronz1F = {"BRONZ_1_F", 25000, 50};
	Records.push_back(bronz1F);
	record Gold2O = {"GOLD_2_O", 28999, 100};
	Records.push_back(Gold2O);
	record Gold1 = {"GOLD_2_O", 27888, 100};
	Records.push_back(Gold1);
}

void Display()
{
	cout << "Below Are the records :- " << endl;
	cout << "Record Name \tUnique ID \tSize" << endl;
	int Minimum =Records.at(0).UniqueID, Maximum = Records.at(0).UniqueID;
	for(auto eachRecord:Records)
	{
		if (eachRecord.UniqueID <=  Minimum )
			Minimum = eachRecord.UniqueID;
		if (eachRecord.UniqueID >=  Maximum )
			Maximum = eachRecord.UniqueID;
		cout << eachRecord.Name << ",  \t" << eachRecord.UniqueID << ",\t\t" << eachRecord.Size << endl;
	}
	cout << "Minimum UniqueID  = " << Minimum << "  Maximum UniqueID = " << Maximum << endl;
}

bool  getRecord(int UID)
{
	for(auto eachRecord:Records)
	{
		if (eachRecord.UniqueID ==  UID )		
		{
			cout << eachRecord.Name << ", \t" << eachRecord.UniqueID << ", \t" << eachRecord.Size << endl;
			return true;
		}
	}
	cout << "Record not found for [Unique ID "  << UID << " ]" << endl;
	return false;
}

int DolatAssignment()
{
	load();
	string option;
	int UniqueID;
	Display();
	do 
	{
		cout << "You want to find Record? (y/n)" << endl;	
		cin >> option;
		if (option == "Y" || option == "y" )
		{		
			cout << "enter UniqueID : " << endl;
			cin >> UniqueID;
			getRecord(UniqueID);
		}
		else if 	(option == "N" || option == "n" )
		{
			break;
		}
		else 
		{
			cout << "Please enter valid input Y or y or N or n" << endl;
		}
	}while(option == "Y" || option == "y");
	cout << "Thanks have a nice day!!!" << endl;
	return true;
}

void PointerArithmaticInterviewQuestion()
{
	int arr[4] = {5,3,2,4};
	int *ptr = arr +1;
	cout << *ptr +9 << endl;  // What it will print
}

//
//		Considerations
//		AACII charecters for alphabets and numbers
//		A to Z --> 65 to 90
//		a to z --> 97 to 122
//		0 to 9 --> 58 to 57

//////////////////////////////////////////////////////////////////////
// Problem statement
//		You are provided with a null terminating string. return the letter(a-z or A-Z) which occures most often. Count lowercase and uppercase as the same letter. 
//		Retuen the uppercase version. If the string has no letters which occurs most offen.
//		For Example:
//		most_common("AAaaBBB") should return letter A
//		most_common("12 34") should return the null charecter
//		most_common("aaAABBBB") can return A or B
//		
////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////
//Description : This fucntion will check whether perticular charecter is allready present in string or not
//
// param[in] vector <char > chars : vectors of charecters
// param[in]  char charecter				: Charecter to be searched
//	return	true		: if charecter is present
//				false	: if charecter is not present
////////////////////////////////////////////////////////
bool IsCharecterExists(vector <char > chars, char charecter)
{
	for(char ch : chars){
		if(ch == charecter)
			return true;
	}
	return false;
}

//////////////////////////////////////////////////////
//Description : This fucntion will check for most common charecter present in the string
//
// param[in] string str :String as input
//	return	char : most comon charecter in string
//				null	: if letter is not present in string
//
////////////////////////////////////////////////////////
char most_common(string str)
{
	int StringLength = str.length();		// length  of string
	vector <char > chars;						// vectors which will stores unique numbers
	for (int i =0; i< StringLength;i++)// iterate over each string charecter
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && !IsCharecterExists(chars, str[i]))  // check for Capital letter
		{
			chars.push_back(str[i]);
		}
		else if (str[i] >= 'a'&& int(str[i]) <= 'z')
		{
			if(!IsCharecterExists(chars, str[i]-32)) // treat small and capitle letter as same
				chars.push_back(str[i]-32);
		}
	}
	int maxCount = 0, count ;
	char maxChar ='\0';

	if (chars.begin() == chars.end() ){			// if string dont have English alphbets then reuren null
		return '\0';
	}
	else{
		for(char ch : chars){						// Iterate over each unique charecter present in string
			count = 0;
			for (int i =0; i< StringLength;i++){	// copare each unique charececter	 with string
				if (str[i] == ch || str[i]-32 == ch)
					count++;
			}
			if(count >= maxCount){				// Compare for maximum number of charecters
				maxCount = count;
				maxChar = ch;
			}
		}	
	}
	return maxChar;
}
//////////////////////////////////////////////////////
//Description : This fucntion is main function to check string sample and finding most common charecter in string
//							this function covers all sample test cases
//	return	void
////////////////////////////////////////////////////////
void FindStringOccurence()
{
	cout << "Sample testcases \n" ;
	cout << "String\t\t" <<  "most common charecter \n";

	string str = "AAaaBBB";
	cout << str << "\t\t"<< most_common(str) <<endl;
	str = "12 34";
	cout << str << "\t\t"<< most_common(str) <<endl;
	str = "aaAABBBB";
	cout << str << "\t"<< most_common(str) <<endl;

}


vector <bool> decToBinary(uint16_t num){
	vector <bool> BinaryNum;
	int operationStatus;
	for (int i = 15 ; i >= 0; i--)
	{
		operationStatus = num >> i;	// right shift i times 
		if (operationStatus & 1)		//digit found to be 1
			BinaryNum.push_back(1);
		else										//digit found to be 0
			BinaryNum.push_back(0);
	}
	return BinaryNum;
}

uint16_t  getHoures(vector <bool> binaryNumber)
{
	uint16_t num = 0;

	return num;

}
///////////////////////////////////////////////////////////////////////////
//		Problem statement
//		Sixteen bits are used to encode a time (hours and minutes) in the following way
//		the 4 least significant bits are the units digit of the number of minutes.
//		the next 3 bits are the tens digit of the number of minutes.
//		the next 4 bits are the units digit of the number of houres.
//		the next 2 bits are the tens digit of the number of houres.
//		the most significant 3 bits (the "check bits") must be 1, then 0, then 1.
//		Comlete the "extract" function, which has the following behaviour.
//		if the check bits are incorrect, return 0 and do nothing.
//		if the check bits are correct, write the number of houres and minutes and return 1.
//		Assume that the caller has allocated "houres" and "minutes" appropriately.

//		bits representation
//		GFEDDCCC CBBBAAAA		--> Binary form
//		(AAAA) + 10*(BBB)			--> miuntes
//		(CCCC) + 10*(DD)			--> hour
//		E and G --> must be 1
//		F --> must be 0
///////////////////////////////////////////////////////////////////////////
int extract(uint16_t data, int *houres, int *minutes){
	int p1, p2, p3;

	cout << (1^3) ;
	int num = 65000;
	cout << "decimal of" << num << " is " ;
	vector <bool > binaryNumber = decToBinary(num);
	for (bool b : binaryNumber)
		cout << b;
	if (binaryNumber[0] == 1 && binaryNumber[1] == 0 && binaryNumber[2] == 1){

		cout << "number of houres : " << getHoures(binaryNumber) << endl;

	}
	else 
		return 0;

	return 1;
}

void bitManipulation()
{
	int houres = 2;
	int minutes = 15;
	extract(35, &houres, &minutes);

}

class SizeA 
{
	char c;
	int a;
	double d;
	char b; 	

};

class SizeB : public SizeA
{
	char c;
	char b;
};

//void fun (int a, int b){
//
//}
void fun (int *a, int *b){

}
void fun (int &a, int &b){

}

void SizeOfOperatorDemo()
{
	int a =5;
	int b = 6;
	//fun(5,4);
	fun(&a, &b);

	SizeB ObjB;
	SizeA ObjA;
	cout << "Size of Class SizeB " << sizeof(SizeB) << endl;
	cout << "Size of object of class SizeB " << sizeof(ObjB) << endl;

	cout << "Size of Class SizeA " << sizeof(SizeA) << endl;
	cout << "Size of object of class SizeA " << sizeof(ObjA) << endl;

	//int a =10;
	int *ptr = &a;
	cout << "Size of int pointer " << sizeof(int *) << endl;
	cout << "Size of int  " << sizeof(int ) << endl;
	cout << "Size of int double " << sizeof(double) << endl;
	cout << "Size of int char " << sizeof(char) << endl;
}

class MyClass {
	int a, b;

public:
	MyClass(int i)
	{
		cout << "parameterized Constructor called... " << endl;
		this->a = i;
		this->b = i;
	}
	MyClass& operator= (MyClass const &obj)
	{
		cout << "Copy Constructor called... " << endl;
		this->a = obj.a;
		this->b = obj.b;

		return  *this;
	}
	void display()
	{
		std::cout << " a = " << this->a << " b = " << this->b << "\n";
	}
};

void ConversionConsructure()
{
	MyClass object(10);

	object.display();

	// Single parameter conversion constructor is invoked.
	object = 20;

	object.display();

	MyClass Obj = object;	
	object.display();

	Obj = 30;	
	object.display();
}
/**
* Definition for singly-linked list.
* 
* 
* 
* 
* 
* 
* };
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbersOld(ListNode* l1, ListNode* l2) 
{
	auto countl1 = 0, countl2 = 0;
	unsigned long long suml1= 0,suml2 =0;
	//double suml1= 0,suml2 =0;
	ListNode * temp = l1;
	while(temp != nullptr )
	{
		suml1 = suml1 + temp->val *pow(10,countl1);
		countl1 ++;			
		temp = temp->next;
	}
	temp = l2;
	while(temp != nullptr )
	{
		suml2 = suml2 + temp->val *pow(10,countl2);
		countl2 ++;			
		temp = temp->next;
	}
	auto result = suml1 + suml2;
	//ListNode *resultNode = new ListNode((double)((result)%(10)));
	ListNode *resultNode = new ListNode((result)%(10));
	result = result/10;

	temp = resultNode;

	while(result)
	{
		resultNode->next =new ListNode(result %10);
		resultNode = resultNode->next;

		result = result/10;
	}

	return temp;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	ListNode *temp = nullptr;
	if (l1 != nullptr || l2 != nullptr)
		temp = new ListNode();
	ListNode *original = temp ;
	int carry = 0, borrow = 0;
	while(l1 != nullptr || l2 != nullptr)	// we have to sum both the list thats why checking when both are null then only goes out of loop
	{
		if (l1 == nullptr)
			l1 = new ListNode();
		if (l2 == nullptr)
			l2 = new ListNode();
		if (l1->val + l2->val + carry > 9)	// check if sum becomes two digit
		{
			borrow = (l1->val + l2->val + carry) % 10;			
			carry = (l1->val + l2->val + carry) / 10;	// carry for future
			temp->val = borrow;					// update borrow
		}
		else 
		{
			temp->val = l1->val + l2->val + carry;
			carry = 0;
		}		
		// pont to next node
		l1 = l1->next;
		l2 = l2->next;
		if (l1 != nullptr || l2 != nullptr)
		{
			temp->next = new ListNode();
			temp = temp->next ;
		}
	}
	if (carry != 0)
	{
		temp->next = new ListNode(carry);
	}
	return original;
}

void SingleLinkedList()
{
	int a = 10;
	ListNode *l1 = new ListNode(4);
	l1->next = new ListNode(3);

	ListNode *l2 = new ListNode(9);
	l2->next = new ListNode(8);
	l2->next->next = new ListNode(5);
	/*l2->next->next->next = new ListNode(9);
	l2->next->next->next->next  = new ListNode(9);
	l2->next->next->next->next->next = new ListNode(9);
	l2->next->next->next->next->next->next  = new ListNode(9);
	l2->next->next->next->next->next->next->next  = new ListNode(9);
	l2->next->next->next->next->next->next->next->next  = new ListNode(9);
	l2->next->next->next->next->next->next->next->next->next  = new ListNode(9);*/
	addTwoNumbers(l1,l2);
}

class A{
public :
	virtual void fun1() {cout << "Welldone... " << endl;}
	void fun2(){cout << "fun2() in A" << endl;}
};

class B: public A{
public :
	void Display(){cout << "Welldone... " << endl;}
	void fun2(){cout << "fun2() in B" << endl;}
	//int fun1() {cout << "Welldone... " << endl; return 1;} // we can not have different return type for overriden function
};

void InheritanceExample(){
	A *a = new B();
	a->fun2();
	//a->fun1();
	B *b = dynamic_cast<B*>(new A());

}

void DanglingPointer(){
	int a = 10;
	int *ptr = new int(a);
	cout << "before Delete ..."<< endl;
	cout << ptr <<endl;
	cout << a << endl;
	cout << &a << endl;

	delete ptr;
	cout << "after Delete ..."<< endl;
	cout << ptr <<endl;
	cout << a << endl;
	cout << &a << endl;
}

template <typename T1, typename T2>
//template <typename T1, typename T2, typemane T3>
T1 AddWithTemplate(T1 a, T2 b)
//T3 AddWithTemplate(T1 a, T2 b)
{
	cout << "a is of :"<<  typeid(a).name() << endl;
	cout << "b is of :"<<  typeid(b).name() << endl;
	return a +b;
}

void TemplateDemo()
{
	cout << "Addition is " << AddWithTemplate(4.5,5) << endl;
	cout << "Addition is " << AddWithTemplate(4,5.5) << endl;

	//cout << "Addition of chars " << AddWithTemplate('A','B');

	//const type_info& t1 = typeid(4);
	cout << "4 is of :"<<  typeid(4).name() << endl;
	B a;
	cout << "a is of :"<<  typeid(a).name() << endl;
}

class Car{
	int model;
public:
	void SetModel(int model){		
		this->model = model;
	}
	void PrintModel()	{
		cout << "Model is " << model << endl;
	}
};
void ThisDemo(){
	Car obj;
	obj.SetModel(5);
	obj.PrintModel();
	//obj.model;
}

class pureVirtual{
public:
	virtual void fun () = 0 ;
};

class derived : public pureVirtual{
public:
	virtual void fun() = 0;    
};

class child : public derived{
public:
	void fun(){
		cout << "I am here..." << endl;
	}
};

int inheritanceConcept() {
	// your code goes here
	child c;	
	c.fun();
	return 0;
}

class ExceptionDemo {
public:
	ExceptionDemo() {
		std::cout << "Contructor called " << std::endl;
		//throw 22;
	}
	~ExceptionDemo() {
		std::cout << "Distructor called " << std::endl;
		//throw 22;
		try{
			throw 22;
		}
		catch(int a){
			cout << a;
		}
	}
};


int ExceptionQuestion() {
	try 
	{
		ExceptionDemo a;
		//ExceptionDemo *ptr = new ExceptionDemo();
		throw 32;
		int k = 10;
		int &b = k;
		//delete ptr;

	} catch(int a) {
		std::cout << a;
	}
}
class CopyClass
{
public:
	int myVariable;
	int *ptr;
	CopyClass(){
		myVariable = 0;
		ptr = new int();
		*ptr  = myVariable + 10;
		cout<< "Default contructor called... " << endl;}
	CopyClass(int num){
		myVariable = num;
		ptr = new int();
		*ptr  = myVariable + 10;
		cout<< "Parameterized contructor called... " << endl;}
	~CopyClass(){		
		delete ptr;
		cout << "Destructor called...  " << endl;}
	//copy contructor
	CopyClass(const CopyClass & obj){
		myVariable = obj.myVariable;
		ptr = new int();
		*ptr  = myVariable + 20;
		cout << "copy Contructor called... " << endl;
	}
	// assignment operator overider
	CopyClass&  operator= (const CopyClass &obj){
		if (this != &obj){
			this->myVariable = obj.myVariable;
			*(this->ptr) = *(obj.ptr) + 30; 
			cout << "Assignment operator copy Contructor called... " << endl;
			return *this;
		}
	}
	// + operator overider
	CopyClass  operator+ (const int num){	
		this->myVariable += num;
		cout << "+ operator Overload called... " << endl;
		return *this;

	}
};

void CopyContructorDemo()
{
	CopyClass obj(10);
	{
		CopyClass obj1 = obj;
	}

	CopyClass obj2;
	obj2 = obj;
	obj2 = obj + 2;

} 
class SmartClass
{
public:
	SmartClass(){cout<< "Default contructor called... " << endl;}
	~SmartClass(){cout << "Destructor called...  " << endl;}
	//int *ptr;
	void Print(){cout<< "Hello" << endl;}

};

void SmartPointerDemo(){
	{
		unique_ptr<SmartClass > ptr ( new SmartClass());
		//unique_ptr<SmartClass > ptr =  std::make_unique<SmartClass>();
		unique_ptr<SmartClass > ptr1 ( new SmartClass());
		//ptr1= ptr;
		ptr1 = move(ptr);
		ptr->Print();
		ptr1->Print();
	}
	{
		shared_ptr<SmartClass> ShrPtr (new SmartClass());
		shared_ptr<SmartClass> ShrPtr1 (new SmartClass());
		ShrPtr1 = ShrPtr;
		ShrPtr->Print();
		ShrPtr1->Print();
	}
}

void ArithmaticPointerOperationsDemo(){
	const char *arr[]={"c","c++","java","VBA"};
	const char *(*ptr)[4]=&arr;
	cout<<++(*ptr)[2]<<endl;

	int x=5;
	int y=++x*x--;
	cout<<x<<" "<<y<<endl;
	y=++x*++x;
	cout<<x<<" "<<y<<endl;
	int z=++y + --y;
	cout<<y<<" "<<z<<endl;

}

void ExtractSubstring(){

	/*while(AfxExtractSubString())
	{

	}*/
}

//2
//4
//8
//16
//32
// 
//8 test cases are passed out of 10
//
//BETACan’t read the text? 
//Switch
// theme
//
//1. Coding - Chocolate Puzzle - CPP
//A teacher decided to motivate all her students for their grades by giving them chocolates. On the first day, she gave a certain number of chocolates and on the next day, she gave twice the number of chocolates she gave on the previous day and she doubled the number of chocolates every day. On the last day, she distributed all the chocolates she bought. Determine on which day the teacher distributed exactly (1/n)th of the total number of chocolates given the number of chocolates distributed on the first day, the day on which all the chocolates are completely distributed and n. If 1/n gives a floating point consider the rounded value of it.
//
// 
//Function Description
//
// 
//
//Complete the function appreciation in the editor below. The function appreciation has the following parameter(s):
//
//An integer denoting the number of chocolates distributed initially (on the first day).
//An integer denoting the day on which all the chocolates are completely distributed.
//An integer n denoting the part of the total number of chocolates.
//Write the code to determine the day on which the teacher distributed exactly (1/n)th of the total number of chocolates given the number of chocolates distributed on the first day, the day on which all the chocolates are completely distributed and n. The function is expected to return an integer.
//
// 
//
//Input Format For Custom Testing
//Sample Case 0
//Sample Input For Custom Testing
//
//2
//5
//2
//Sample Output
//
//5
//Explanation
//
//In this case, the number of chocolates distributed initially (on the first day) is 2, the number of chocolates distributed on second day is 2*2 = 4, the number of chocolates distributed on third day is 4*2 = 8, the number of chocolates distributed on fourth day is 8*2 = 16 and at last the number of chocolates distributed on fifth day is 16*2 = 32.
//
//So, the total number of chocolates is 62 (2+4+8+16+32) and 1/2th of total chocolates is 31 (62/2 = 31). Finally the teacher completed the distribution of 31 chocolates on the 5th day.
//
//Sample Case 1
//Sample Input For Custom Testing
//
//6
//3
//5
//Sample Output
//
//2
//Explanation
//
//In this case, the number of chocolates distributed initially (on the first day) is 6, the number of chocolates distributed on second day is 6*2 = 12 and at last the number of chocolates distributed on third day is 12*2 = 24. So, the total number of chocolates is 42 (6+12+24) and 1/5th of total chocolates is 8 (42/5 = 8.4 take as 8). Finally the teacher completed the distribution of 8 chocolates on the 2th day.
int appreciation(int initial_chocolates, int last_day, int n) {    
	int sum = initial_chocolates;
	int commulative_sum = sum;
	int day_counter = last_day;

	while(day_counter != 1){
		sum = sum * 2;  
		commulative_sum = commulative_sum + sum;
		day_counter--;
	}
	int result_sum = (commulative_sum/n);

	sum = initial_chocolates;
	commulative_sum = sum;
	day_counter = last_day;
	int result = 1;

	while(day_counter != 1){
		sum = sum * 2;  
		commulative_sum = commulative_sum + sum;
		result++;   
		if (result_sum <= commulative_sum)			
			break;	

		day_counter--;		 
	}
	return result;
}

template <class T> class vector_inserter{
public:
    std::vector<T>& v;
    vector_inserter(std::vector<T>& v):v(v){}
    vector_inserter& operator,(const T& val){v.push_back(val);return *this;}
};
template <class T> vector_inserter<T> operator+=(std::vector<T>& v,const T& x){
    return vector_inserter<T>(v),x;
}

// demo on all STL Concepts and there usage
// 1. initialization ways
// 2. adding element dynamically
// 3. usange in loops (for, While,....)
// 4. usage, getting element from perticular position 
// 5. prebuild sorting techniques possible if any
// 6. iterator usage
int STLDemo(){

	vector <int> myVector ;//= {3, 4, 5, 6}; // This is not possible before
	
	myVector += 1,2,3,4;// using overloading for adding elements via initializer list

	// initializing vector using loop
	for (int i = 0; i < 5 ; i++){
		myVector.push_back(i);
	}

	// insert element at begining
	myVector.insert(myVector.begin(),0);
	// insert element at end
	myVector.insert(myVector.end(), 99);

	cout << "Below are the vector elements : (using vector size) " << endl;
	for (int i = 0; i < myVector.size() ; i ++){
		cout << myVector[i] << endl;
	}
	
	vector <int> :: iterator itrMyVector;
	cout << "below are the vector elements : (using iterators) " << endl;
	for (itrMyVector = myVector.begin(); itrMyVector < myVector.end(); itrMyVector++){
		cout << *itrMyVector << endl;  
	}

	 map<string,int> Map;
    map<string,int>::iterator itrMap = Map.begin();
	Map.insert(pair<string,int>("ABC",1));
	Map.insert(pair<string,int>("DEF",2));
	Map.insert(pair<string,int>("GHI",3));

	
   for (auto itr = Map.begin(); itr != Map.end(); itr++){
       cout << itr->first << " " << itr->second << endl;               
   }

    /*strcpy(itrMap->first, "ABC");
    itrMap->second = 1;*/

	return 0;
}

//
//int codePractice(){
//	int var = 10;//	int *ptr = &var;//	int var2 = 30;//	ptr = &var2;//	int ** ptr1 ;//	int * ptr2 = &var;//	ptr1 = &ptr2;//	// What will be output of below//	cout << **ptr1 << endl;//	cout << *ptr2 << endl;//	cout << *ptr << endl;//
//	return 0;
//}

int reverseNumber()
{
	int num;
	cout << "Enter Number to Reverse:- " ;
	cin >> num;
	int sum = 0;
	int counter = 0;
	while(num /10 != 0){
		sum = pow(10,counter)* sum + (num % 10);
		num = num /10;
		counter++;
	}
	cout << endl << "reverse Number is " << sum << endl;

	return 1;
}


class Parent {
public:
	void run() {}
	Parent() {
	
	}
	~Parent() {


	}
};
class Child :public Parent{
public:
	void run() {};
	Child* ptr;//= new int();
	Child() {
		ptr = this;
	}
	~Child() {
		delete ptr;
		ptr = nullptr;
	}
};
void virtualDestructor() {
	{
		Parent* bPtr = new Child();
	}

}