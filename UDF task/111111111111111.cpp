#include<iostream>
#include<string.h>
using namespace std;

class shape{
	protected:
		int height;
		int width;
		
	public:
		void setShapedata{
		cout << endl;	 
		cout << "Enter width: ";
		cin >> width;
		cout << "Enter height: ";
		cin >> height;
	}
};

class Tringle : public Shape{
	
	public: 
		void getTringle(){
			cout << "Tringle: " << (1/2*height*width);
	}
};
class Rectangle : public Shape{
	
	public: 
		void getRectangle(){
			cout << "Rectangle: " << (height*width);
	}
};

int main(){

	Tringle obj1;
	obj1.getTringle();
	Rectangle obj2;
	obj2.getRectangle();
}


