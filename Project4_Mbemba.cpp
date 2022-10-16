//******************************
// Name: Christelle Mbemba
// Project Number: 4
// Description: Danny's Dinner Dash !
// Due Date: Febuary 23 2022
//************************************

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	
	int choice =1;                  // declacre choice of the restaurant
	
	
	ifstream x;                      
	string dash;
	double a, b, c, d, e;
	x.open("Dannys.txt");             // open the file for dash restaurant
	getline(x,dash);
	x >> a;                           //cin >>
	x >> b;
	x >> c;
	x >> d;
	x >> e;
	x.close();                       // close the file for dash
	double sub1 = 0;
	
	
	ifstream y;
	string steves;
	double f, g, h, i, j;
	y.open("Steves.txt");               // open file for steves restaurant
	getline(y,steves);
	y >>  f;
	y >>  g;
	y >>  h;
	y >>  i;
    y >>  j;
    y.close();                         // close file for steves restaurant
    double sub2 = 0;
    

	ifstream z;
	string barrys;
	double k, l, m, n, p;
	z.open("Barrys.txt");               // open file for barrys restaurant
	getline(z,barrys);
	z >>  k;
	z >>  l;
	z >>  m;
	z >>  n;
    z >>  p;
    z.close();                         // close file for barrys restaurant
    double sub3 = 0;   
    
					
	
	ofstream o;	
	o.open("outCML.txt");



	while ( choice != 0 ){
		
		cout << choice;
		
	cout <<"\t"<<"  WELCOME TO OUR KIOSK !! !"<<endl;
	cout << "*****************************************************" << endl;
    cout <<"\t"<< "Choose from Our Option Below: "<<endl<<endl;
    cout <<"1."<< dash << "\t" << "        2." << steves << endl ;
    cout <<"3." << barrys << "\t" << "0. Complete order"<< endl <<endl;
    cout << "Enter your choice: ";
	cin >> choice;
	cout <<endl;
	
	if ( choice ==1 ){
		int choice1 = 1;
		while (choice1 !=0){
			
		cout << "-------------------------------- "<< endl;		
		cout << "| Hey !welcome to Dinner's Dash! |"<< endl;
		cout << "-------------------------------- "<< endl;
		cout << " 1. Combo number 1 - $" << a << endl;
		cout << " 2. Combo number 2 - $" << b <<endl;
		cout << " 3. Combo number 3 - $" << c << endl;
		cout << " 4. Combo number 4 - $" << d << endl;
		cout << " 0. Quit"<< endl<< endl;
		
		cout << "Enter your choice: ";
		cin >> choice1;
		
		cout <<endl <<endl;
		
		if (choice1 ==1){
			cout << "You ordered Combo Number 1" <<endl;
			
			sub1 = a + sub1;
			cout << "Subtotal: $" << sub1 <<endl<<endl;
		}
		if (choice1 ==2)	{
			cout << "You ordered Combo Number 2" <<endl;
			
			sub1 =  b+ sub1;
			cout << "Subtotal: $" << sub1 <<endl<<endl;		
			
		}
		if (choice1 ==3)	{
			cout << "You ordered Combo Number 3" <<endl;
			
			sub1 =  c+ sub1;
			cout << "Subtotal: $" << sub1 <<endl<<endl;			
		
    	}
		if (choice1 ==4)	{
			cout << "You ordered Combo Number 4" <<endl;
			
			sub1 =  d+ sub1;
			cout << "Subtotal: $" << sub1 << endl<<endl;	    	
		
		}
        if (choice1 == 0){
			o <<"\t"<< "Thank you for your order !!" << endl <<endl;
   		 	o << dash << endl;		
			o << "----------------YOUR RECEIPT-----------------" << endl;	
			o <<endl;	
			o << "Subtotal "<<"                    :" << "\t"<<"$ " << sub1 <<endl;;
			o << "*Delivery Fee" <<"                :"<< "\t" <<"$ " << e << endl;
	
			o << "--------------------------------------------" << endl<<endl; 	
			o << fixed << setprecision(2) <<"*TOTAL BILL " <<"                 :"<< "\t" <<"$ "<< sub1 + e <<endl;
			o << endl<<endl;
			sub1 =0 ; 
                 //	o.close();   
        	
       	}	
	
	
       }

	
}


	if ( choice ==2 ){
		int choice1 = 1;
		while (choice1 != 0){
			
		cout << "-------------------------------- "<< endl;		
		cout << "| Hi !welcome to Speedy Steve's slices! |"<< endl;
		cout << "-------------------------------- "<< endl;
		cout << " 1. Combo number 1 - $" << f << endl;
		cout << " 2. Combo number 2 - $" << g <<endl;
		cout << " 3. Combo number 3 - $" << h << endl;
		cout << " 4. Combo number 4 - $" << i << endl;
		cout << " 0. Quit"<< endl <<endl;
		
		cout << "Enter your choice: ";
		cin >> choice1;
		
		cout << endl<< endl;
		
		if (choice1 ==1){
			cout << "You ordered Combo Number 1" <<endl;
			
			sub2 = f + sub2;
			cout << "Subtotal: $" << sub2 <<endl<<endl;
		}
		if (choice1 ==2)	{
			cout << "You ordered Combo Number 2" <<endl;
			
			sub2 =  g+ sub2;
			cout << "Subtotal: $" << sub2 <<endl<<endl;		
			
		}
		if (choice1 ==3)	{
			cout << "You ordered Combo Number 3" <<endl;
			
			sub2 =  h+ sub2;
			cout << "Subtotal: $" << sub2 <<endl<<endl;			
		
    	}
		if (choice1 ==4)	{
			cout << "You ordered Combo Number 4" <<endl;
			
			sub2 =  i+ sub2;
			cout << "Subtotal: $" << sub2 << endl<<endl;	    	
		
		}
        if (choice1 == 0){
			o <<"\t"<< "Thank you for your order !!" << endl <<endl;
   		 	o << steves << endl;		
			o << "----------------YOUR RECEIPT-----------------" << endl;	
			o <<endl;	
			o << "Subtotal "<<"                    :" << "\t"<<"$ " << sub2 <<endl;
			o << "*Delivery Fee" <<"                :"<< "\t" <<"$ " << j << endl;
	
			o << "--------------------------------------------" << endl<<endl; 	
			o << fixed << setprecision(2) <<"*TOTAL BILL " <<"                 :"<< "\t" <<"$ "<< sub2 + j <<endl;
			o << endl<<endl;
			sub2 =0 ; 
                 //	o.close();   
        	
       	}	
	
	
       }

	
}



	if ( choice ==3 ){
		int choice1 = 1;
		while (choice1 !=0){
			
		cout << "-------------------------------- "<< endl;		
		cout << "| Hey !wecome to Barry's bufallo'! |"<< endl;
		cout << "-------------------------------- "<< endl;
		cout << " 1. Combo number 1 - $" << k << endl;
		cout << " 2. Combo number 2 - $" << l <<endl;
		cout << " 3. Combo number 3 - $" << m << endl;
		cout << " 4. Combo number 4 - $" << n << endl;
		cout << " 0. Quit"<< endl<< endl;
		
		cout << "Enter your choice: ";
		cin >> choice1;
		
		cout <<endl <<endl;
		
		if (choice1 ==1){
			cout << "You ordered Combo Number 1" <<endl;
			
			sub3 = k + sub3;
			cout << "Subtotal: $" << sub3 <<endl<<endl;
		}
		if (choice1 ==2)	{
			cout << "You ordered Combo Number 2" <<endl;
			
			sub3 =  l+ sub3;
			cout << "Subtotal: $" << sub3 <<endl<<endl;		
			
		}
		if (choice1 ==3)	{
			cout << "You ordered Combo Number 3" <<endl;
			
			sub3 =  m+ sub3;
			cout << "Subtotal: $" << sub3 <<endl<<endl;			
		
    	}
		if (choice1 ==4)	{
			cout << "You ordered Combo Number 4" <<endl;
			
			sub3 =  n+ sub3;
			cout << "Subtotal: $" << sub3 << endl<<endl;	    	
		
		}
        if (choice1 == 0){
			o <<"\t"<< "Thank you for your order !!" << endl <<endl;
   		 	o << barrys << endl;		
			o << "----------------YOUR RECEIPT-----------------" << endl;	
			o <<endl;	
			o << "Subtotal "<<"                    :" << "\t"<<"$ " << sub3 <<endl;;
			o << "*Delivery Fee" <<"                :"<< "\t" <<"$ " << p << endl;
	
			o << "--------------------------------------------" << endl<<endl; 	
			o << fixed << setprecision(2) <<"*TOTAL BILL " <<"                 :"<< "\t" <<"$ "<< sub3 + p <<endl;
			o << endl<<endl;
			sub3 =0 ; 
                 //	o.close();   
        	
       	}	
	
	
       }

	
}

	
}

	o.close();
	
	return 0;
}