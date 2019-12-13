
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
		cout << "They are same !!" << endl;

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

int mainPalindromicDates() 
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	string input;
	//getline(cin, input);

	string out_;
	out_ = findNextPalinDate("30:03"/*input*/);
	cout << out_;
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
