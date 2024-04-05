#include <iostream> 
#include <limits> // for numeric_limits 
using namespace std; int main() { char op; float num1, num2, result; 
do { cout << "Enter operator (+, -, *, /) or q to quit: "; 
cin >> op;
 if(op == 'q' || op == 'Q') { 
        cout << "Exiting calculator program."; break;
 } if (op != '+' && op != '-' && op != '*' && op != '/') { 
        cout << "Invalid operator! Please try again." << endl; cin.clear(); 
            // Clear the error flag 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                     // Discard invalid input continue; // 
                          Restart the loop } 
                               cout << "Enter two numbers: "; cin >> num1 >> num2;
                                     switch(op) { case '+': result = num1 + num2; break;
                                            case '-': result = num1 - num2; break; 
                                                   case '*': result = num1 * num2; break;
                                                        case '/': if (num2 != 0) result = num1 / num2;
                                                              else { cout << "Error! Division by zero." << endl;
                                                                     continue; // Restart the loop } 
                                                                            break; } cout << "Result: " << result << endl;
} while(true); return 0; }
 
 