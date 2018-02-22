#include <iostream>
#include <vector>
#include<fstream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;
using std::cin;
using std::cout;
using std::fstream;
using std::string;
using std::vector;

class Student //Node
{
public:
	//Constructor
	Student();
	//Copy constructor
	Student(Student &copy);
	//getters
	int getRecordNum();
	int getIdNum();
	string getName();
	string getEmail();
	string getCredits();
	string getMajor();
	string getGrade();
	//setters
	void setRecordNum(int studentsRecord);
	void setIdNum(int studentsIDNum);
	void setName(string studentsName);
	void setEmail(string studentsEmail);
	void setCredits(string studentsCredits);
	void setMajor(string studentsMajor);
	void setGrade(string studentsGrade); 
	//Linker variable
	Student*next;
	//Function
	void markAbsent(string Name);
private:
	int mRecordNum;
	int mIdNum;
	string mName;
	string mEmail;
	string mCredits;
	string mMajor;
	string mGrade;
};

class AttendanceRap {

public:
	//constructor
	AttendanceRap();
	int displayMenu();
	//functions
	void runApp();
	void printReport();
	//destructor
	~AttendanceRap();

private:
	//Pointers
	Student *pHead;
	//functions
	void importClassList();
	void loadMasterList(fstream &filestream, Student &list);
	void storMasterList(fstream &filestream, vector <Student> &list);
	//Vectors
	vector <Student> vStudent;
	//Member variables
	fstream mAttendance;
	fstream mMaster;
	int mTraker; 
};

//overloading 
fstream & operator >> (fstream &lhs, Student &rhs);
fstream & operator << (fstream &lhs, Student &rhs);
