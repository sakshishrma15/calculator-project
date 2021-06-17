 #include <iostream>
#include<cmath>
using namespace std;
void performSumOperation();
void performSubtractOperation();
void performMultiplicationOperation();
void performDivisionOperation();
void performRemainderDivisionOfTwoNO();
void performPercentageOperation();
void performSquareOperation();
void performSquareRootOperation();
void performCubeOperation();
void performFactOperation();
void performTrigonometricFunction();
void performExitOperation();

void performSumOperation(){
    int firstNumber;
    int secondNumber;
    int sum;
    cout<<"please enter first number";
    cin>>firstNumber;
    cout<<"please enter second number";
    cin>>secondNumber;
    sum=firstNumber+secondNumber;
    cout<<firstNumber<<"+"<<secondNumber<<"="<<sum;
}
void performSubtractOperation(){
    int firstNumber;
    int secondNumber;
    int difference;
    cout<<"please enter first number";
    cin>>firstNumber;
    cout<<"please enter second number";
    cin>>secondNumber;
    difference=firstNumber-secondNumber;
    cout<<difference;
}
void performMultiplicationOperation(){
    int firstNumber;
    int secondNumber;
    int multiplication;
    cout<<"please enter first number";
    cin>>firstNumber;
    cout<<"please enter second number";
    cin>>secondNumber;
    multiplication=firstNumber*secondNumber;
    cout<<multiplication;
}
void performDivisionOperation(){
    int firstNumber;
    int secondNumber;
    int division;
    cout<<"please enter first number";
    cin>>firstNumber;
    cout<<"please enter second number";
    cin>>secondNumber;
    division=firstNumber/secondNumber;
    cout<<division;
}
void performRemainderDivisionOfTwoN0(){
    int firstNumber;
    int secondNumber;
    int remainder;
    cout<<"please enter first number";
    cin>>firstNumber;
    cout<<"please enter second number";
    cin>>secondNumber;
    remainder=firstNumber%secondNumber;
    cout<<remainder;
}
void performPercentageOperation(){
    int totalMarks;
    int NumberOfSubjects;
    int percentage;
    cout<<"please enter your total marks";
    cin>>totalMarks;
    cout<<"please enter your number of subjects";
    cin>>NumberOfSubjects;
    percentage=totalMarks/NumberOfSubjects;
    cout<<percentage;
}
void performSquareOperation(){
    int number;
    int square;
    cout<<"please enter a number";
    cin>>number;
    square=number*number;
    cout<<square;
}
void performSquareRootOperation() {
    int number;
    int a;
    cout << "please enter a number";
    cin >> number;
    a = sqrt(number);
    cout<<a;
}
void performCubeOperation(){
    int a;
    int cube;
    cout << "please enter a number";
    cin >> a;
    cube = a * a * a;
    cout<<cube;
}
void performComplexNoOperation(){
    int real1;
    int real2;
    int imag1;
    int imag2;
    int a;
    int b;
    cout<<"enter the real part of first complex number"<<endl;
    cin>>real1;
    cout<<"enter the imag part of first complex number"<<endl;
    cin>>imag1;
    cout<<"enter the real part of second complex number"<<endl;
    cin>>real2;
    cout<<"enter the imag part of second complex number"<<endl;
    cin>>imag2;
    a=real1+real2;
    b=imag1+imag1;
    cout<<"addition of two complex number is:"<<a<<"+"<<b<<"i";
}
void performFactOperation(){
    int num;
    int fact=1;
    cout<<"enter the number";
    cin>>num;
    for(int i=num;i>=1;i--){
        fact=fact*i;
    }
    cout<<"factorial of "<<"num"<<"is="<<fact<<endl;

}
float inRadians(float degrees){
    return degrees *(3.14159/180);
}
void performTrigonometricFunction(){
    float degrees;
    float radians;
    cout<<"enter an angle in degrees";
    cin>>degrees;
    radians=inRadians(degrees);
    cout<<sin(radians)<<endl<<cos(radians)<<endl<<tan(radians)<<endl;
}
void performExitOperation(){
    cout<<"thank you for using sakshi's scientific calculator"<<endl;
}
int main() {
    int choice;
    cout << "welcome to sakshi's scientific calculator" << endl;
    cout << "1.addition" << endl;
    cout << "2.subtraction" << endl;
    cout << "3.multiplication" << endl;
    cout << "4.division" << endl;
    cout << "5.remainder of division of two numbers" << endl;
    cout << "6.percentage" << endl;
    cout << "7.square" << endl;
    cout << "8.cube" << endl;
    cout << "9.root" << endl;
    cout << "10.addition of two complex numbers" << endl;
    cout << "11.factorial";
    cout << "12.value of trigonometric functions" << endl;
    cout << "13.exit" << endl;
    cout << "which operation do you want to perform" << endl;
    reenter:
    cout<<"please enter your choice";
    cin>>choice;
    if(choice>=1 && choice<=13 )
        switch(choice){
        case 1:performSumOperation();
                break;
        case 2:performSubtractOperation();
                break;
        case 3:performMultiplicationOperation();
                break;
        case 4:performDivisionOperation();
                break;
        case 5:performRemainderDivisionOfTwoN0();
                break;
        case 6:performPercentageOperation();
                break;
        case 7:performSquareOperation();
                break;
        case 8:performCubeOperation();
                break;
        case 9:performSquareRootOperation();
                break;
        case 10:performComplexNoOperation();
                break;
        case 11:performFactOperation();
                break;
        case 12:performTrigonometricFunction();
                break;
        case 13:performExitOperation();
            break;
    }

    else{
      goto reenter;
    }
}