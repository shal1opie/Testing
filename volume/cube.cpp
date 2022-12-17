#include <iostream>

using namespace std;

void cheers(int n){
for (integer i = 0; i < n; i) { //скобка
cout << "Cheers! "; // cout вместо cou тчк с зпт
cout << endl;
};

double cube(double x)
{
return x * x * x;
};

int main(){
cheеrs(5); // вызов функции
cout << "Give me a number: ";
double side;
cin >> side;
double volume = cube(side); // вызов функции // неправильное название переменной
cout « "A " « side «"-foot cube has a volume of ";
cout « volume << " cubic feet.\n";
cheers (cub(2));
return 0; //ретурн
}
