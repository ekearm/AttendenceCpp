#include "Atendance.h"
AttendanceRap:: AttendanceRap(){
	mAttendance.open("classList.csv");
	mMaster.open("master.txt");
	pHead = nullptr; 
}
AttendanceRap::~AttendanceRap() {
	storMasterList(mMaster, vStudent);
	mMaster.close();
	mAttendance.close();
	for (int i = 0; i < vStudent.size(); i++) {
		free(&vStudent[i]);
	}
}
void AttendanceRap::storMasterList(fstream &filestream, vector <Student> &list) {
	for (int i = 0; i < list.size(); i++) {
	}
}
int AttendanceRap::displayMenu(){
	int option = 0;

	cout << "1. Import Course List" << endl; 
	cout << "2. Load Master List" << endl;
	cout << "3. Store Master List" << endl;
	cout << "4. Mark Absences" << endl;
	cout << "5. Edit Absences" << endl;
	cout << "6. Generate Report" << endl;
	cout << "7. Exit" << endl;

	return option; 
}
void AttendanceRap::runApp() {

	int option = -1;
	while (option != 7) {
		option = displayMenu();
		switch (option) {
		case 1:
			this->importClassList();
			break;
		case 2:
			//this->loadMasterList(mMaster, );
			break;
		case 3:
			//store master list
			break;
		case 4:
			//mark absences
			break;
		case 5:
			//Edit Absences
			break;
		case 6:
			//generate report
			break;
		case 7:
			break;
		}
	}
}
void AttendanceRap::importClassList(){
	
	while (!mAttendance.eof()){
		Student *temp = new Student(); 
		mAttendance >> *temp;
		if (pHead = nullptr){
			pHead = temp;
		}
		else {
			temp->next = pHead;
			pHead = temp;
		}
	}
}
void AttendanceRap::loadMasterList(fstream &filestream, Student &list){
	
	for (int i = 0; i < mTraker; i++) {
		filestream << list;
	}
}
void AttendanceRap::printReport() {
	Student *hold = pHead;
	while (pHead != nullptr) {
	}
}
fstream & operator >> (fstream &lhs, Student &rhs){
	string buffer;
	string firstName, lastName; 
	//record number
	getline(lhs, buffer, ',');
	rhs.setRecordNum(stoi(buffer));
	//Id Number
	getline(lhs, buffer, ',');
	rhs.setIdNum(stoi(buffer));
	//Name
	getline(lhs, buffer, ',');
	firstName = buffer; 
	getline(lhs, buffer, ',');
	lastName = buffer; 
	rhs.setName(firstName + ' ' + lastName);
	//email
	getline(lhs, buffer, ',');
	rhs.setEmail(buffer);
	//Units
	getline(lhs, buffer, ',');
	rhs.setCredits(buffer);
	//Program
	getline(lhs, buffer, ',');
	rhs.setMajor(buffer);
	//Level
	getline(lhs, buffer, ',');
	rhs.setGrade(buffer);
	return lhs; 
}
fstream & operator << (fstream &lhs, Student &rhs) {
	lhs << rhs.getRecordNum() << ',' << rhs.getIdNum() << ',' << rhs.getName << ',' << rhs.getEmail() << ',' << rhs.getCredits << ',' << rhs.getMajor << ',' << rhs.getGrade << endl;
	return lhs; 
}