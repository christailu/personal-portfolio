//************************************
// Name: Christelle Mbemba
// Project Number: 2
// Description:
// Due Date: Febuary 9 2022
//************************************

#include <iostream>
using namespace std;
int main(){
	
	// //
    cout<< "Hello to the UNA computing program"<<endl;
    cout<<""<<endl;
	
	cout << "Please what is your Classification? Make a choice (1-3): " << "" << "1.Freshman" << "\t" << "2.Transfer Student" << "\t" << "3.Current student(una) " <<endl;
	
	//Declare varible //
	int statu,fresh,act;
	double gpa;
	cin >> statu;
	
	
	// establish the if statetement for input that is over te choice (greater than 3 and less than 1)//
	if ( statu>3 || statu<1){
	   cout << "Error while making choice" <<endl;
	}
	
    // *********if statement for freshman input//
	if (statu==1){
		cout <<"(You have selected Freshman) What do you want to use? (1-2): "<< "" << "1.GPA" << "\t" << "2.ACT"<<endl;       //choice for GPA or ACT
		cin >> fresh;
		if (fresh>2 || fresh<1){
			cout<< "Error While making choice"<<endl;
		}}
		if (fresh==1){
			cout<< "What is your GPA?: "<<endl;
			cin>> gpa;
			if(gpa >=3.0){                                    //condition for gpa
				cout <<"Wow ! is this for real-SB"<<endl;
			}
			else {
				 cout<< "We are sorry you are not eligible for this program"<<endl;
			}
		}
		else if(fresh==2){
			cout<< "What is your ACT?: "<<endl;
			cin>> act;
			if(act >=24){
				cout <<"Wow ! is this for real-SB"<<endl;
			}
			else {
				 cout<< "We are sorry you are not eligible for this program"<<endl;			
			
		}
		
	}
	//********* if statement for Tranfered student//
	else if(statu==2){
		cout<<"You selected Transfer student"<<endl;
		cout<< "What is your GPA?: "<<endl;
		cin>> gpa;                                      // input for GPA
		if(gpa >=3.0){                                  //condition for gpa
			cout <<"Wow ! is this for real-SB"<<endl;
		}
		else {
			 cout<< "We are sorry you are not eligible for this program"<<endl;
		
	}
    } 
    //******** if statement for Current student//
	else if(statu==3){
		cout<<"You have selected current student"<<endl;
		cout<< "What is your GPA?: "<<endl;
		cin>> gpa;
		if(gpa >=3.0 ){                                 //condition for gpa
			cout <<"Wow ! is this for real-SB"<<endl;
		}
		else {
			 cout<< "We are sorry you are not eligible for this program"<<endl;
		
	}
    }     
    return 0;	
}