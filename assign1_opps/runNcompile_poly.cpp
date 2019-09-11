#include <iostream>
using namespace std;

class Vechile{
	public:
		int wheel;
		string color;
		int horsePower;
		int maxSpeed;
		int gears;
		int seats;
		
		virtual void desGet(string c,int horsePow){
			wheel = 4;
			color = c;
			horsePower = horsePow;
			gears = 5;
			maxSpeed = 200;
			seats = 5;
		}
		
		void gearsSet(){
			gears = 0;
			maxSpeed = 200;
		}
		
		void gearsSet(int g){
			gears = g;
			maxSpeed = 40*g;
		}
		virtual void show(){
			cout << "This Vechile has "<< wheel <<" Wheel and it's color is: "<< color<<endl;
			cout << "Horse Power: " << horsePower<<endl;
			cout << "gears: "<<gears<<endl;
			cout << "max speed: "<<maxSpeed<<endl;
			cout << "seats: "<<seats<<endl;
		}
};
class Car:public Vechile{
	void desGet(string c,int horsePow){
		wheel = 4;
		color = c;
		horsePower = horsePow;
		gearsSet(6);
		seats = 5;	
	}
	
	void show(){
		cout << "This Car has "<< wheel <<" Wheels and it's color is: "<< color<<endl;
		cout << "Horse Power: " << horsePower<<endl;
		cout << "gears: "<<gears<<endl;
		cout << "max speed: "<<maxSpeed<<endl;
		cout << "seats: "<<seats<<endl;
		}
};

class Scooty:public Vechile{
	void desGet(string c,int horsePow){
		wheel = 2;
		color = c;
		horsePower = horsePow;
		gearsSet();
		seats = 2;	
	}
	
	void show(){
		cout << "This Scoot has "<< wheel <<" Wheels and it's color is: "<< color<<endl;
		cout << "Horse Power: " << horsePower<<endl;
		cout << "gears: "<<gears<<endl;
		cout << "max speed: "<<maxSpeed<<endl;
		cout << "seats: "<<seats<<endl;
		}
};
int main(){
	Vechile *v1,*v2;
	Car c;
	Scooty s;
	v1 = &c;
	v2 = &s;
	v1->desGet("Red",600);
	v2->desGet("Blue",100);
	v1->show();
	v2->show();
}
