#include<iostream>
using namespace std;

int main(){
	
	char grade;
	int n=0;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student ["<< n+1 <<"]: ";
		cin >> grade; 
		if(grade=='0'){ 
			break;
		}if(grade=='A'){ 
			count[0]++;
			n++;
		}else if(grade=='B'){ 
			count[1]++;
			n++;
		}else if(grade=='C'){ 
			count[2]++;
			n++;
		}else if(grade=='D'){ 
			count[3]++;
			n++;
		}else if(grade=='F'){ 
			count[4]++;
			n++;
		}else{ 
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	cout << "In total "<< n <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] <<" ";	
					
	
	return 0;
}
