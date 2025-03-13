// #include<iostream>
// using namespace std;

// int main (){
//     float principal, rate, time, simpleIntrest;

//     // Input values
//     cout << "Enter principal amount: ";
//     cin >> principal;
//     cout<<" Enter annual intrest Rate (in the percentage): ";
//     cin >> rate;
//     cout << "Enter time(in years): ";
//     cin >> time;

//     // calculate simple intrest
//     simpleIntrest = (principal*rate*time)/100;
    
//     //OUTPUT RESULT
//     cout << "Simple intrest: " << simpleIntrest << endl;
//     return 0;
// }

// max of two numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int num_1, num_2;
//     cout << "Enter the first number: ";
//     cin >> num_1;
//     cout << "Enter the second number: ";
//     cin >> num_2;

//     if (num_1 > num_2) {
//         cout << "Maximum number is " << num_1 << endl;
//     } 
//     else if (num_1 < num_2) {
//         cout << "Maximum number is " << num_2 << endl;
//     } 
//     else { 
//         cout << "Both numbers are equal" << endl;
//     }

//     return 0;
// }


// factorial of number n

# include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0){
        cout<< "Fctorial is not defined for negative numbers"<< endl;
    }
    else{
        cout << "Factorial of " <<  n <<" is "<< factorial(n) <<endl;
    }

    return 0;

}