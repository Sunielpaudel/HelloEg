#include<iostream>
using namespace std;

void hello() {
	cout << "Hello World" << endl;
}
int sum(int num1, int num2) {
	int num3 = num1 + num2;

	return num3;
}

int main() {

	cout<<sum(3, 5)<<endl;

	hello();
}