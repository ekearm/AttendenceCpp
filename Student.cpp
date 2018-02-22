#include "Atendance.h"
//Constructor
Student::Student(){
	this->mRecordNum = 0;
	this->mIdNum = 0;
	this->mName = "";
	this->mEmail = "";
	this->mCredits = "";
	this->mMajor = "";
	this->mGrade = "";
}
Student::Student(Student &copy) {

}
int Student::getRecordNum(){
	return this->mRecordNum;
}
int Student::getIdNum(){
	return this->mRecordNum;
}
string Student::getName(){
	return this->mName;
}
string Student::getEmail() {
	return this->mEmail;
}
string Student::getCredits(){
	return this->mCredits;
}
string Student::getMajor() {
	return this->mMajor;
}
string Student::getGrade(){
	return this->mGrade;
}
void Student::setRecordNum(int studentsRecord){
	mRecordNum = studentsRecord;
}
void Student::setIdNum(int studentsIDNum) {
	mIdNum = studentsIDNum;
}
void Student::setName(string studentsName) {
	mName = studentsName;
}	
void Student::setEmail(string studentsEmail) {
	mEmail = studentsEmail;
}
void Student::setCredits(string studentsCredits) {
	mCredits = studentsCredits;
}
void Student::setMajor(string studentsMajor) {
	mMajor = studentsMajor;
}
void Student::setGrade(string studentsGrade) {
	mGrade = studentsGrade;
}
void Student::markAbsent(string Name) {
	int abs;
	cout << "What student was absent" << endl;
	cin >> abs;
	this->getName();
}