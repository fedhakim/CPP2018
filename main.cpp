#include <iostream>

using namespace std;

int raisePower(int base, int power){
	int result = 1;
	for (int i = 0; i < power; i++){
	result *= base;
	}
return result;
}

void check (int number, int power){
int realPower = 0;

switch(number){
	case 1:
	 realPower = 2;
	 break;
	case 2:
	 realPower = 4;
	 break;
	case 3:
	 realPower = 8;
	 break;
	case 4:
	 realPower = 16;
	 break;
	}

if (number < 0){
	cout << "Ошибка! Степень меньше 0" << endl;
}
    if(power!=realPower){
		cout << "Ошибка " << power << "не равняется " << realPower << endl;
	}
	else{
		cout << "Ошибок не обнаружено" << endl;
    }
}

void check_all(){
	for(int power = 1; power <= 4; power++){
	int number = 2;
	int powerNum = raisePower(number, power);
	check(power, powerNum);
	}
}

int main(){
	check_all();
return 0;
}
