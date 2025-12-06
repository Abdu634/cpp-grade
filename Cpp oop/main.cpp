#include <iostream>
using namespace std;
class result{
	int score;
	
	public:
	 result (int sScore ){
	 	score = sScore;
	 }
	 void checkGrade(){
	 	if(score > 90 && score <100){
	 		cout<<"A";
		 }
	 	else if (score > 80 && score < 89){
		 	cout<<"B";
			 }
		 	else if (score >70 && score < 79){
		 		cout<<"C";
			 }
			 else if(score > 60 && score <69){
	 		cout<<"D";
		 }
		 
		 
	 }

};

int main(){
	result r1(99);
	r1.checkGrade();
	result r2(88);
	r2.checkGrade();
	result r3(77);
	r3.checkGrade();
	result r4(66);
	r4.checkGrade();

}
