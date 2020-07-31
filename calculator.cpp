#include <iostream>

using namespace std;
int main()
{
    //Defining variables
    double first;
    double second;
    string opera;
    double fina;

    //Getting User Input
    cout<<"Enter First Number:\n";
    cin>>first;
    cout<<"Enter Operator:\n";
    cin>>opera;
    cout<<"Enter Second Number:\n";
    cin>>second;
    
    if(opera == "+")
        fina = first + second;
    else if (opera == "-")
        fina = first - second;
    else if (opera == "*")
        fina = first * second;
    else if (opera == "/")
        fina = first / second;
    else
        fina = 0;
    
    cout<<"Your answer is: "<<fina<<"\n";
}
