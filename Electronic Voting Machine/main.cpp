#include <bits/stdc++.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

#define    nl		'\n'

void getStart() {
	cout << nl << nl << nl;
	for (int i = 1; i <= 30; ++i) cout << " ";
	for (int i = 1; i <= 30; ++i) cout << "==";
	cout << nl;
	for (int i = 1; i <= 55; ++i) cout << " ";
	cout << "WELCOME TO\n";
	for (int i = 1; i <= 46; ++i) cout << " ";
	cout << "ELECTRONIC VOTING MACHINE(EVM)\n";
	for (int i = 1; i <= 30; ++i) cout << " ";
	for (int i = 1; i <= 30; ++i) cout << "==";
	for (int i = 1; i <= 6; ++i) cout << nl;
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "# DEVELOPED BY #\n\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "MD. Sajjat Hossen\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "ID: 18CSE004\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "Department of Computer Science and Engineering.\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "Bangabandhu Sheikh Mujibur Rahman Science and Technology University.\n\n\n";
}

void banner() {
	cout << nl << nl << nl;
	for (int i = 1; i <= 30; ++i) cout << " ";
	for (int i = 1; i <= 13; i++) cout << "=";
	cout << " ELECTRONIC VOTING MACHINE(EVM) ";
	for (int i = 1; i <= 13; i++) cout << "=";
	for (int i = 1; i <= 3; ++i) cout << nl;
}

void menu() {
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=================MENU=================\n\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "======Please choose your option=======\n\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> AUTHORITY Panel-------------------[1]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> Voting----------------------------[2]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> EXIT------------------------------[3]\n\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "Enter your option : ";
}

void authorityMenu() {
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "============AUTHORITY MENU============\n\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "======Please choose your option=======\n\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> Log In---------------------------[1]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> Back-----------------------------[2]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> EXIT-----------------------------[3]\n\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "Enter your option : ";
	//printf("%s\n", );
}

void authorityLogIn() {
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "============AUTHORITY Log In============\n\n" << nl;
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "Please enter authority password : ";

}

void authorityAccessMenu() {
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "==========AUTHORITY ACCESS MENU=========\n\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=======Please choose your option========\n\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> Add Voter------------------------[1]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> Remove Voter---------------------[2]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> Add Candidate--------------------[3]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> Remove Candidate-----------------[4]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> Result---------------------------[5]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> Clear all Data-------------------[6]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> Back-----------------------------[7]\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "=> EXIT-----------------------------[8]\n\n";
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "Enter your option : ";
}

void Voting() {
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "===========WELCOME TO THE ELECTION===========" << nl << nl;
	for (int i = 1; i <= 33; ++i) cout << " ";
	cout << "==> Please enter your ID No:" << nl << nl;
	for (int i = 1; i <= 35; ++i) cout << " ";
	cout << "ID NO : ";
}

string input_name() {
	char ch;
	string name = "";
	while (true) {
		ch = getch();
		if (name.size() != 0 && ch == 13) {
    		break;
		} else if (ch == 8 && name.size() != 0) {
    		cout << "\b \b";
    		name.pop_back();
		} else if ((65 <= ch && ch <= 90) || (97 <= ch && ch <= 122) || ch == 32) {
    		cout << ch;
    		name += ch;
		}
	}
	return name;
}

string input_ID() {
	char ch;
	string ID = "";
	while (true) {
		ch = getch();
		if (ID.size() != 0 && ch == 13) {
    		break;
		} else if (ch == 8 && ID.size() != 0) {
    		cout << "\b \b";
    		ID.pop_back();
		} else if ((48 <= ch && ch <= 57)) {
    		cout << ch;
    		ID += ch;
		}
	}
	return ID;
}

string input_password() {
	char ch;
	string password = "";
	while (true) {
		ch = getch();
		if (password.size() != 0 && ch == 13) {
    		break;
		} else if (ch == 8 && password.size() != 0) {
    		cout << "\b \b";
    		password.pop_back();
		} else if ((65 <= ch && ch <= 90) || (97 <= ch && ch <= 122) || (48 <= ch && ch <= 57)) {
    		cout << "*";
    		password += ch;
		}
	}
	return password;
}

string input_date() {
	char ch;
	string date = "";
	while (true) {
		ch = getch();
		if (date.size() != 0 && ch == 13) {
    		break;
		} else if (ch == 8 && date.size() != 0) {
    		cout << "\b \b";
    		date.pop_back();
		} else if ((48 <= ch && ch <= 57) || ch == 45) {
    		cout << ch;
    		date += ch;
		}
	}
	return date;
}

void removeVoter(string ID) {
	string file_path = "voter\\voterList.txt";
	ifstream file_read;
	ofstream file_write;
	file_read.open(file_path);
	file_write.open("temp.txt");
	while (!file_read.eof()) {
		string s = "";
		file_read >> s;
		if (s != ID && s != "") {
			file_write << s << nl;
		}
	}
	file_read.close();
	file_write.close();
	remove(file_path.c_str());
	rename("temp.txt", file_path.c_str());
	file_path = "voter\\details\\";
	file_path += ID;
	file_path += ".txt";
	remove(file_path.c_str());
}

void removeCandidate(string symbol) {
	string file_path = "candidate\\symbol.txt";
	ifstream file_read;
	ofstream file_write;
	file_read.open(file_path);
	file_write.open("temp.txt");
	while(!file_read.eof()) {
		string s = "";
		getline(file_read, s);
		if (s != "" && s != symbol) {
			file_write << s << nl;
		}
	}
	file_read.close();
	file_write.close();
	remove(file_path.c_str());
	rename("temp.txt", file_path.c_str());

	file_path = "candidate\\candidateList.txt";
	file_read.open(file_path);
	file_write.open("temp.txt");
	while(!file_read.eof()) {
		string s1 = "", s2 = "";
		getline(file_read, s1);
		getline(file_read, s2);
		if (s1 != "" && s2 != "" && s2 != symbol) {
			file_write << s1 << nl;
			file_write << s2 << nl;
		}
	}
	file_read.close();
	file_write.close();
	remove(file_path.c_str());
	rename("temp.txt", file_path.c_str());

	file_path = "candidate\\idNameSymbol.txt";
	file_read.open(file_path);
	file_write.open("temp.txt");
	while(!file_read.eof()) {
		string s1 = "", s2 = "", s3 = "";
		getline(file_read, s1);
		getline(file_read, s2);
		getline(file_read, s3);
		if (s1 != "" && s2 != "" && s3 != "" && s3 != symbol) {
			file_write << s1 << nl;
			file_write << s2 << nl;
			file_write << s3 << nl;
		}
	}
	file_read.close();
	file_write.close();
	remove(file_path.c_str());
	rename("temp.txt", file_path.c_str());

	file_path = "candidate\\details\\";
	file_path += symbol;
	file_path += ".txt";
	remove(file_path.c_str());

	file_path = "election\\countVote\\";
	file_path += symbol;
	file_path += ".txt";
	remove(file_path.c_str());
}

int main() {
	FILE *filepointer = NULL;
	ifstream file_read;
	ofstream file_write;
	system("Color B4");
	getStart();
	for (int i = 1; i <= 33; ++i) cout << " ";
	system("pause");
	while (1) {
		// Menu

		system("cls");
		banner();
		menu();
		char ch;
		string option = "";
		while (true) {
            ch = getch();
            if (option.size() != 0 && ch == 13) {
                break;
            } else if (ch == 8 && option.size() != 0) {
                cout << "\b \b";
                option.pop_back();
            } else if (ch > 48 && ch < 52) {
                cout << ch;
                option += ch;
            }
        }
        if (option == "1") {
        	// Authority Panel

        	bool authorityMenuback = 0;
        	while(!authorityMenuback) {
	        	system("cls");
	        	banner();
	        	authorityMenu();
	        	string authorityOption = "";
	        	while (true) {
		            ch = getch();
		            if (authorityOption.size() != 0 && ch == 13) {
		                break;
		            } else if (ch == 8 && authorityOption.size() != 0) {
		                cout << "\b \b";
		                authorityOption.pop_back();
		            } else if (ch > 48 && ch < 52) {
		                cout << ch;
		                authorityOption += ch;
		            }
	        	}
		        if (authorityOption == "1") {
		        		// Authority Log In Menu

		        		bool authorityLogInBack = 0;
			        	while (!authorityLogInBack) {
			        		system("cls");
			        		banner();
			        		authorityLogIn();
			        		string authorityPassword = input_password();
			        		bool ok = 0;
			        		string password;
			        		file_read.open("authority\\authorityPassword.txt");
			        		while (!file_read.eof()) {
			        			file_read >> password;
			        			if (authorityPassword == password) {
			        				ok = 1;
			        				break;
			        			}
			        		}
			        		file_read.close();
			        		if (ok) {
			        			// correct password

			        			cout << nl << nl;
			        			for (int i = 1; i <= 33; ++i) cout << " ";
			        			cout << "----------------x------------------" << nl << nl;
			        			for (int i = 1; i <= 33; ++i) cout << " ";
			        			cout << "========> Access Granted <=========\n";
			        			for (int i = 1; i <= 33; ++i) cout << " ";
			        			cout << "==> Welcome to Authority Access.<==" << nl << nl;
			        			for (int i = 1; i <= 33; ++i) cout << " ";
			        			cout << "----------------x------------------" << nl << nl;
			        			for (int i = 1; i <= 33; ++i) cout << " ";
			        			system("pause");
			        			bool authorityAccessMenuback = 0;
			        			 // Authority Access Menu

			        			while (!authorityAccessMenuback) {
			        				system("cls");
			        				banner();
			        				authorityAccessMenu();
			        				char ch;
			        				string authorityAccessMenuOption = "";
									while (true) {
							            ch = getch();
							            if (authorityAccessMenuOption.size() != 0 && ch == 13) {
							                break;
							            } else if (ch == 8 && authorityAccessMenuOption.size() != 0) {
							                cout << "\b \b";
							                authorityAccessMenuOption.pop_back();
							            } else if (ch > 48 && ch < 57) {
							                cout << ch;
							                authorityAccessMenuOption += ch;
							            }
							        }
							        if (authorityAccessMenuOption == "1") {
							        	// Add Voter
							        	
							        	system("cls");
							        	banner();
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "==============> ADD VOTER <==============" << nl << nl;
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "## Please enter the following information:" << nl << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	string name, fname, mname, b_date, ID_no, district;
							        	cout << "NAME : ";
							        	name = input_name();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "Father's Name : ";
							        	fname = input_name();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "Mother's Name : ";
							        	mname = input_name();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "Date of birth(dd-mm-yyyy) : ";
							        	b_date = input_date();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "ID No : ";
							        	ID_no = input_ID();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "District : ";
							        	district = input_name();
							        	cout << nl;
							        	bool isVoterList = 0;
							        	string list_ID;
							        	file_read.open("voter\\voterList.txt");
							        	while (!file_read.eof()) {
							        		list_ID = "";
							        		file_read >> list_ID;
							        		if (list_ID == ID_no && list_ID != "") {
							        			isVoterList = 1;
							        			break;
							        		}
							        	}
							        	file_read.close();
							        	if (isVoterList) {
							        		// already in the voter list

							        		cout << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		cout << "-------------------------x--------------------------" << nl << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		cout << "==>## This voter is already in the Voter list. ##<==" << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		cout << "==>## Try another one. ##<==" << nl << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		cout << "-------------------------x--------------------------" << nl << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		system("pause");
							        	} else {
							        		// not in the voter list

							        		string file_name = "voter\\details\\";
							        		file_name += ID_no;
							        		file_name += ".txt";
							        		filepointer = fopen(file_name.c_str(), "w");
							        		fprintf(filepointer, "%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n\n", "Name:", name.c_str(), "Father's Name:", fname.c_str(), "Mother's Name:", mname.c_str(), "Date of Birht:", b_date.c_str(), "ID:", ID_no.c_str(), "District:", district.c_str());
							        		fclose(filepointer);
							        		filepointer = fopen("voter\\voterList.txt", "a+");
							        		fprintf(filepointer, "%s\n", ID_no.c_str());
							        		fclose(filepointer);
							        		cout << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		cout << "-------------x------------" << nl << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		cout << "==> SUCCESSFULLY ADDED <==\n" << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		cout << "-------------x------------" << nl << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		system("pause");
							        	}

							        } else if (authorityAccessMenuOption == "2") {
							        	// Remove Voter

							        	system("cls");
							        	banner();
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "=============REMOVE VOTER=============" << nl << nl;
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "=> Enter the ID you want to remove: ";
							        	string remove_id = input_ID();
							        	bool okayToRemove = 0;
							        	file_read.open("voter\\voterList.txt");
							        	while (!file_read.eof()) {
							        		string s = "";
							        		file_read >> s;
							        		if (s == remove_id && s != "") {
							        			okayToRemove = 1;
							        			break;
							        		}
							        	}
							        	file_read.close();
							        	if (okayToRemove) {
							        		cout << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "--------------x--------------" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "===> SUCCESSFULLY REMOVE <===" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "--------------x--------------" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		removeVoter(remove_id);
							        		system("pause");

							        	} else {
							        		cout << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "-------------------------x-------------------------" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "=> Wrong ID No. Please try again with correct ID No." << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "-------------------------x-------------------------" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		system("pause");
							        	}
							        } else if (authorityAccessMenuOption == "3") {
							        	// Add Candidate

							        	system("cls");
							        	banner();
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "============> ADD CANDIDATE <============" << nl << nl;
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "## Please enter the following information:" << nl << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	string name, fname, mname, b_date, ID_no, symbol, district;
							        	cout << "NAME : ";
							        	name = input_name();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "Father's Name : ";
							        	fname = input_name();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "Mother's Name : ";
							        	mname = input_name();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "Date of birth(dd-mm-yyyy) : ";
							        	b_date = input_date();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "ID No : ";
							        	ID_no = input_ID();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "District : ";
							        	district = input_name();
							        	cout << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "Symbol : ";
							        	symbol = input_name();
							        	bool isCandidateList = 0;
							        	file_read.open("candidate\\candidateList.txt");
							        	while (!file_read.eof()) {
							        		string s1 = "", s2 = "";
							        		getline(file_read, s1);
							        		getline(file_read, s2);
							        		if (s2 == symbol && s1 != "" && s2 != "") {
							        			isCandidateList = 1;
							        			break;
							        		}
							        	}
							        	file_read.close();
							        	file_read.open("candidate\\idNameSymbol.txt");
							        	while (!file_read.eof()) {
							        		string s1 = "", s2 = "", s3 = "";
							        		getline(file_read, s1);
							        		getline(file_read, s2);
							        		getline(file_read, s3);
							        		if (s1 == ID_no && s1 != "" && s2 != "" && s3 != "") {
							        			isCandidateList = 1;
							        			break;
							        		}
							        	}
							        	file_read.close();
							        	if (isCandidateList) {
							        		// incorrect information

							        		cout << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "--------------------x--------------------" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "==>## Your information is incorrect. ##<==" << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "==>## Try Again. ##<==" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "--------------------x--------------------" << nl;
							        		cout << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		system("pause");
							        	} else {
							        		// correct information

							        		string file_name = "candidate\\details\\";
							        		file_name += symbol;
							        		file_name += ".txt";
							        		filepointer = fopen(file_name.c_str(), "w");
							        		fprintf(filepointer, "%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n\n", "Name:", name.c_str(), "Father's Name:", fname.c_str(), "Mother's Name:", mname.c_str(), "Date of Birht:", b_date.c_str(), "ID:", ID_no.c_str(), "District", district.c_str(), "Symbol:", symbol.c_str());
							        		fclose(filepointer);
							        		filepointer = fopen("candidate\\candidateList.txt", "a+");
							        		fprintf(filepointer, "%s\n", name.c_str());
							        		fclose(filepointer);
							        		filepointer = fopen("candidate\\candidateList.txt", "a+");
							        		fprintf(filepointer, "%s\n", symbol.c_str());
							        		fclose(filepointer);
							        		filepointer = fopen("candidate/idNameSymbol.txt", "a+");
							        		fprintf(filepointer, "%s\n", ID_no.c_str());
							        		fprintf(filepointer, "%s\n", name.c_str());
							        		fprintf(filepointer, "%s\n", symbol.c_str());
							        		fclose(filepointer);
							        		file_name = "election\\countVote\\";
							        		file_name += symbol;
							        		file_name += ".txt";
							        		filepointer = fopen(file_name.c_str(), "w");
							        		fclose(filepointer);
							        		filepointer = fopen("candidate\\symbol.txt", "a+");
							        		fprintf(filepointer, "%s\n", symbol.c_str());
							        		fclose(filepointer);
							        		cout << nl << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		cout << "------------x-------------" << nl << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		cout << "==> SUCCESSFULLY ADDED <==\n" << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		cout << "------------x-------------" << nl;
							        		cout << nl;
							        		for (int i = 1; i <= 36; ++i) cout << " ";
							        		system("pause");
							        	}
							        } else if (authorityAccessMenuOption == "4") {
							        	// Remove Candidate

							        	system("cls");
							        	banner();
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "============REMOVE CANDIDATE============" << nl << nl;
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "=> Enter the SYMBOL of the candidate you want to remove: ";
							      		string remove_symbol = input_name();
							      		bool okayToRemove = 0;
							        	file_read.open("candidate\\symbol.txt");
							        	while (!file_read.eof()) {
							        		string s = "";
							        		getline(file_read, s);
							        		if (s == remove_symbol && s != "") {
							        			okayToRemove = 1;
							        			break;
							        		}
							        	}
							        	file_read.close();
							        	if (okayToRemove) {
							        		cout << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "--------------x--------------" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "===> SUCCESSFULLY REMOVE <===" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "--------------x--------------" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		removeCandidate(remove_symbol);
							        		system("pause");

							        	} else {
							        		cout << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "--------------------------x--------------------------" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "=> Wrong SYMBOL. Please try again with correct SYMBOL." << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		cout << "--------------------------x--------------------------" << nl << nl;
							        		for (int i = 1; i <= 33; ++i) cout << " ";
							        		system("pause");
							        	}
							        } else if (authorityAccessMenuOption == "5") {
							        	// Result

							        	system("cls");
							        	banner();
							        	long long total_vote = 0, blank_vote = 0;
							        	file_read.open("election\\isVoted.txt");
							        	while (!file_read.eof()) {
							        		string s = "";
							        		file_read >> s;
							        		if (s != "")
							        			++total_vote;
							        	}
							        	blank_vote = total_vote;
							        	file_read.close();
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "=========WELCOME TO THE ELECTION RESULTS=========" << nl << nl;
							        	for (int i = 1; i <= 35; ++i) cout << " ";
							        	cout << "==> Total Voting ------------ " << total_vote  << " Vote" << nl << nl;
							        	file_read.open("candidate\\candidateList.txt");
							     		string file_path = "";
							        	while (!file_read.eof()) {
							        		string candidate_name = "", candidate_symole = "";
							        		getline(file_read, candidate_name);
							        		getline(file_read, candidate_symole);
							        		long long cnt_vote = 0;
							        		if (candidate_name != "" && candidate_symole != "") {
							        			file_path = "election\\countVote\\";
								        		file_path += candidate_symole;
								        		file_path += ".txt";
								        		ifstream file_read_1;
								        		file_read_1.open(file_path.c_str());
								        		while (!file_read_1.eof()) {
								        			string s = "";
								        			file_read_1 >> s;
								        			if (s != "")
								        				++cnt_vote;
								        		}
								        		file_read_1.close();
								        		blank_vote -= cnt_vote;
								        		for (int i = 1; i <= 35; ++i) cout << " ";
								        		cout << "==> " << candidate_name << " [" << candidate_symole << "]----------- " << cnt_vote << " Vote" << nl << nl;
							        		}
							        	}
							        	file_read.close();
							        	if (total_vote > 0) {
							        		for (int i = 1; i <= 35; ++i) cout << " ";
							        		cout << "==> Empty Choice [BLANK]------------" << blank_vote << " Vote" << nl;
							        	}
							        	cout << nl;
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "----------------------------------x-----------------------------------" << nl << nl;
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "--// Thank you for using digital Electronic Voting Machine (EVM). //--" << nl << nl;
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "----------------------------------x-----------------------------------" << nl << nl;
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	system("pause");

							        } else if (authorityAccessMenuOption == "6") {
							        	// Clear all Data

							        	system("cls");
							        	banner();
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "============RESET MENU============" << nl << nl;
							        	for (int i = 1; i <= 33; ++i) cout << " ";
							        	cout << "==> Are you want to clear all the data ?" << nl << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "=> YES----------------[1]" << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "=> NO-----------------[2]" << nl << nl;
							        	for (int i = 1; i <= 36; ++i) cout << " ";
							        	cout << "Enter your option : ";
							        	string yesno = "";
							        	while (true) {
								            ch = getch();
								            if (yesno.size() != 0 && ch == 13) {
								                break;
								            } else if (ch == 8 && yesno.size() != 0) {
								                cout << "\b \b";
								                yesno.pop_back();
								            } else if (ch > 48 && ch < 51) {
								                cout << ch;
								                yesno += ch;
								            }
								        }
								        if (yesno == "1") {
								        	// clear data(yes)
								        	
								        	string remove_path = "voter\\details\\";
								        	file_read.open("voter\\voterList.txt");
								        	while (!file_read.eof()) {
								        		string s, p = "";
								        		p = remove_path;
								        		file_read >> s;
								        		if (s != "") {
								        			p += s;
								        			p += ".txt";
								        			remove(p.c_str());
								        		}
								        	}
								        	file_read.close();
								        	file_write.open("voter\\voterList.txt");
								        	file_write.close();

								        	remove_path = "candidate\\details\\";
								        	file_read.open("candidate\\symbol.txt");
								        	while (!file_read.eof()) {
								        		string s = "", p = remove_path;
								        		getline(file_read, s);
								        		if (s != "" && s != "BLANK") {
								        			p += s;
								        			p += ".txt";
								        			remove(p.c_str());
								        		}
								        	}
								        	file_read.close();

								        	remove_path = "election\\countVote\\";
								        	file_read.open("candidate\\symbol.txt");
								        	while (!file_read.eof()) {
								        		string s = "", p = remove_path;
								        		getline(file_read, s);
								        		if (s != "") {
								        			p += s;
								        			p += ".txt";
								        			remove(p.c_str());
								        		}
								        	}
								        	file_read.close();

								        	file_read.close();
								        	file_write.open("candidate\\candidateList.txt");
								        	file_write.close();

								        	file_read.close();
								        	file_write.open("candidate\\idNameSymbol.txt");
								        	file_write.close();

								        	file_read.close();
								        	file_write.open("candidate\\symbol.txt");
								        	file_write << "BLANK" << nl;
								        	file_write.close();

								        	file_read.close();
								        	file_write.open("election\\isVoted.txt");
								        	file_write.close();

								        	file_read.close();
								        	file_write.open("election\\countVote\\BLANK.txt");
								        	file_write.close();

								        	cout << nl << nl;
								        	for (int i = 1; i <= 35; ++i) cout << " ";
								        	cout << "-------------------x-------------------" << nl << nl;
								        	for (int i = 1; i <= 35; ++i) cout << " ";
								        	cout << "==> SUCCESSFULLY CLEAR ALL THE DATA <==" << nl << nl;
								        	for (int i = 1; i <= 35; ++i) cout << " ";
								        	cout << "-------------------x-------------------" << nl << nl;
								        	for (int i = 1; i <= 33; ++i) cout << " ";
								        	system("pause");

								        } else {
								        	// not clear data
								        }
							        } else if (authorityAccessMenuOption == "7") {
							        	// Back from Authority Access Menu

							        	authorityAccessMenuback = 1;
							        } else if (authorityAccessMenuOption == "8") {
							        	//exit

							        	cout << nl << nl;
        								for (int i = 1; i <= 33; ++i) cout << " ";
							        	exit(1);
							        }
			        			}
			        			authorityLogInBack = 1;

			        		} else {
			        			// incorrect password

			        			cout << nl << nl;
			        			for (int i = 1; i <= 33; ++i) cout << " ";
			        			cout << "------------------x------------------" << nl << nl;
			        			for (int i = 1; i <= 33; ++i) cout << " ";
			        			cout << "==## Your password is incorrect. ##==" << nl << nl;
			        			for (int i = 1; i <= 33; ++i) cout << " ";
			        			cout << "------------------x------------------" << nl << nl;
			        			for (int i = 1; i <= 33; ++i) cout << " ";
			        			cout << "=> Try again-------------------[1]\n";
								for (int i = 1; i <= 33; ++i) cout << " ";
								cout << "=> Back---------------------------[2]\n";
								cout << nl;
								for (int i = 1; i <= 33; ++i) cout << " ";
								cout << "Enter your option : ";
			        			string op = "";
								while (true) {
						            ch = getch();
						            if (op.size() != 0 && ch == 13) {
						                break;
						            } else if (ch == 8 && op.size() != 0) {
						                cout << "\b \b";
						                op.pop_back();
						            } else if (ch > 48 && ch < 51) {
						                cout << ch;
						                op += ch;
						            }
						        }
						        if (op == "1") {
						        	system("cls");
						        } else if (op == "2") {
						        	authorityLogInBack = 1;
						        }
			        		}
			        		//if (ok) break;
			        	}
		        } else if (authorityOption == "2") {
		        	// Back from authority log in menu

		        	system("cls");
		        	authorityMenuback = 1;
		        } else if(authorityOption == "3"){
		        	// exit

		        	cout << nl << nl;
        			for (int i = 1; i <= 33; ++i) cout << " ";
		        	exit(1);
		        }
        	}
        } else if (option == "2") {
        	// Voter Menu

        	system("cls");
        	banner();
        	Voting();
        	string ID_no = input_ID();
        	bool isVoted = 0;
        	bool isVoterList = 0;
        	file_read.open("voter\\voterList.txt");
        	while (!file_read.eof()) {
        		string s = "";
        		file_read >> s;
        		if (s == ID_no && s != "") {
        			isVoterList = 1;
        		}
        	}
        	file_read.close();
        	file_read.open("election\\isVoted.txt");
        	while (!file_read.eof()) {
        		string s = "";
        		file_read >> s;
        		if (s == ID_no && s != "") {
        			isVoted = 1;
        		}
        	}
        	file_read.close();
        	if (isVoterList == 0) {
        		// is not in the voter list

        		cout << nl << nl;
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		cout << "---------------------x---------------------" << nl << nl;
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		cout << "==> You are not in the voter list.\n";
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		cout << "==> Check again and try with correct ID No." << nl << nl;
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		cout << "---------------------x---------------------" << nl << nl;
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		system("pause");
        	} else if (isVoted == 1) {
        		// already voted

        		cout << nl << nl;
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		cout << "-------------x-------------" << nl << nl;
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		cout << "==> You have already voted.\n";
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		cout << "==> You can not vote again." << nl << nl;
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		cout << "-------------x-------------" << nl << nl;
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		system("pause");
        	} else if (isVoterList == 1 && isVoted == 0) {
        		// voting panel

        		cout << nl << nl;
        		for (int i = 1; i <= 33; ++i) cout << " ";
        		cout << "----------------x-----------------" << nl << nl;
        		for (int i = 1; i <= 33; ++i) cout << " ";
			    cout << "========> Access Granted <=========\n";
				for (int i = 1; i <= 33; ++i) cout << " ";
				cout << "====> WELCOME TO THE ELECTION <====" << nl << nl;
				for (int i = 1; i <= 33; ++i) cout << " ";
				cout << "----------------x-----------------" << nl << nl;
				for (int i = 1; i <= 33; ++i) cout << " ";
				system("pause");
				bool completeVote = 0;
				// completing vote

				while (!completeVote) {
					system("cls");
					banner();
					for (int i = 1; i <= 33; ++i) cout << " ";
					cout << "========WELCOME TO THE ELECTION========" << nl << nl;
					for (int i = 1; i <= 33; ++i) cout << " ";
					cout << "## Name of Candidates and their Symbol. ##\n";
					for (int i = 1; i <= 33; ++i) cout << " ";
					cout <<"--// NAME-----------------------------[SYMBOL] //--" << nl;
					file_read.open("candidate\\candidateList.txt");
					string name, symbol;
					while (!file_read.eof()) {
						getline(file_read, name);
						getline(file_read, symbol);
						if (name != "" && symbol != "") {
							for (int i = 1; i <= 33; ++i) cout << " ";
							cout << "==> " << name << "-----------------[" << symbol << "]" << nl;
						}
					}
					file_read.close();
					for (int i = 1; i <= 33; ++i) cout << " ";
					cout << "==> Empty Choice-------------------[BLANK]" << nl;
					cout << nl;
					for (int i = 1; i <= 33; ++i) cout << " ";
					cout << "Please enter your candidate symbol : ";
					symbol = input_name();
					bool symbolOk = 0;
					file_read.open("candidate\\symbol.txt");
					while (!file_read.eof()) {
						string s = "";
						getline(file_read, s);
						if (s == symbol && s != "") {
							symbolOk = 1;
							break;
						}
					}
					file_read.close();
					if (symbolOk) {
						// complete vote

						completeVote = 1;
						string file_path = "election\\countVote\\";
						file_path += symbol;
						file_path += ".txt";
						filepointer = fopen(file_path.c_str(), "a+");
						fprintf(filepointer, "%s\n", ID_no.c_str());
						fclose(filepointer);
						filepointer = fopen("election\\isVoted.txt", "a+");
						fprintf(filepointer, "%s\n", ID_no.c_str());
						fclose(filepointer);
						cout << nl << nl;
						for (int i = 1; i <= 33; ++i) cout << " ";
						cout << "-----------------x-----------------" << nl << nl;
						for (int i = 1; i <= 33; ++i) cout << " ";
						cout << "===> SUCCESSFULLY VOTED <===" << nl;
						for (int i = 1; i <= 33; ++i) cout << " ";
						cout << "===> THANK YOR FOR GIVING VOTE <===" << nl << nl;
						for (int i = 1; i <= 33; ++i) cout << " ";
						cout << "-----------------x-----------------" << nl;
					} else {
						// not complete vote

						cout << nl << nl;
						for (int i = 1; i <= 33; ++i) cout << " ";
						cout << "----------------x----------------" << nl << nl;
						for (int i = 1; i <= 33; ++i) cout << " ";
						cout << "==> You have entered wrong symbol." << nl;
						for (int i = 1; i <= 33; ++i) cout << " ";
						cout << "==> Please Try Again." << nl << nl;
						for (int i = 1; i <= 33; ++i) cout << " ";
						cout << "----------------x----------------" << nl;
					}
					cout << nl;
					for (int i = 1; i <= 33; ++i) cout << " ";
					system("pause");
				}
        	}
        } else if (option == "3") {
        	// Exit

        	cout << nl << nl;
        	for (int i = 1; i <= 33; ++i) cout << " ";
        	exit(1);
        }
	}
	return 0;

}
