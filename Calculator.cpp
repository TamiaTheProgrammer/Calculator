#include <iostream>
#include <iomanip>

using namespace std;

void Add(double Num1, double Num2)
{
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  
  string AddMoreAsk;
  double addMoreTotal = 0.0;
  double addMore = 0.0;

  // Add the first 2 numbers originally given in main
  addMoreTotal = Num1 + Num2;

  // Print the sum of the fist 2 numbers
  cout << "The sum of " << Num1 << " and " << Num2 << " is: " << addMoreTotal;
  cout << "" << endl;

  // Ask if the user wants to add more numbers
  cout << "Would you like to add more numbers? (y/n): ";
  cin >> AddMoreAsk;

  // Check if the reply is a valid reply. If not, ask again
  if(AddMoreAsk != "Y" || AddMoreAsk != "y" || AddMoreAsk != "N" || AddMoreAsk != "n")
    {
      while(AddMoreAsk != "Y" || AddMoreAsk != "y" || AddMoreAsk != "N" || AddMoreAsk != "n")
        {
          cout << "Please enter a valid answer. (Answer with either y or n): " << endl;
          cin >> AddMoreAsk;
        }
    }

  // If the user wants to add more numbers, ask for the number and add it to the total
  if (AddMoreAsk == "Y" || AddMoreAsk == "y")
  {  
    cout << "Please add another number: " << endl;
    cin >> addMore;

    addMoreTotal = addMore + Num1 + Num2;
    
    cout << "Do you want to add another number? (Y/N)" << endl;
    cin >> AddMoreAsk;
    
    
    while(AddMoreAsk == "Y" || AddMoreAsk == "y")
      {
        cout << "Please add another number: " << endl;
        cin >> addMore;
        addMoreTotal = addMoreTotal + addMore;
        cout << "Do you want to add another number? (Y/N)" << endl;
        cin >> AddMoreAsk;
      }
  }

  // Print the total of all the numbers added
  cout << "Your final total is: " << addMoreTotal << endl;
  
}

void Subtract(double Num1, double Num2)
{
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  
  string SubtractMoreAsk;
  double subtractTotal = 0.0;
  double subtractMoreTotal = 0.0;
  double subtractMore = 0.0;

  // Subtract the first 2 numbers originally given in main
  subtractMoreTotal = Num1 - Num2;

  // Print the difference of the fist 2 numbers
  cout << "The difference of " << Num1 << " and " << Num2 << " is: " << subtractTotal << endl;

  // Ask if the user wants to subtract more numbers
  cout << "Would you like to subtract more from this Total? (Y/N)" << endl;
  cin >> SubtractMoreAsk;

  // Check if the reply is a valid reply. If not, ask again
  if(SubtractMoreAsk != "Y" || SubtractMoreAsk != "y" || SubtractMoreAsk != "N" || SubtractMoreAsk != "n")
  {
    while(SubtractMoreAsk != "Y" || SubtractMoreAsk != "y" || SubtractMoreAsk != "N" || SubtractMoreAsk != "n")
      {
        cout << "Please enter a valid answer. (Answer with either y or n): " << endl;
        cin >> SubtractMoreAsk;
      }
  }

  // If the user wants to subtract more numbers, ask for the number and subtract it from the total
  if (SubtractMoreAsk == "Y" || SubtractMoreAsk == "y")
  {  
    cout << "Please add another number: " << endl;
    cin >> subtractMore;

    subtractMoreTotal = subtractMoreTotal - subtractMore;
    
    cout << "Do you want to add another number? (Y/N)" << endl;
    cin >> SubtractMoreAsk;

    while(SubtractMoreAsk == "Y" || SubtractMoreAsk == "y")
      {
        cout << "Please add another number: " << endl;
        cin >> subtractMore;
        subtractMoreTotal = subtractMoreTotal - subtractMore;
        cout << "Do you want to add another number? (Y/N)" << endl;
        cin >> SubtractMoreAsk;
      }
  }
  
  // Print the total of all the numbers added
  cout << "Your final total is: " << subtractMoreTotal << endl;
}


/*double Multiply()
{
  
}

double Divide()
{
  
}
*/
int main()
{
  cout << "This is a simple Calculator" << endl;

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  
  cout << "It can do 4 Main functions: " << endl;

  cout << "" << endl;
  
  cout << "1.Addition" << endl;
  cout << "2.Subtraction" << endl;
  cout << "3.Multiplication" << endl;
  cout << "4.Division" << endl;

  cout << "" << endl;

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


  cout << "Please enter your first number: " << endl;
  cout << "" << endl;
  double FirstNumber;
  cin >> FirstNumber;

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  cout << "Please enter your second number: " << endl;
  cout << "" << endl;
  double SecondNumber;
  cin >> SecondNumber;

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  cout << "Please enter the number of the function you want to use: " << endl;
  int ChooseFunction;
  cin >> ChooseFunction;
  cout << "" << endl;

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  if (ChooseFunction == 1)
  {
    cout << "You have chosen Addition!" << endl;
    Add(FirstNumber,SecondNumber);
  }

  if (ChooseFunction == 2)
  {
    cout << "You have chosen Subtraction" << endl;
    Subtract(FirstNumber, SecondNumber);
  }

  //if (ChooseFunction == 3)
  //{
    
  //}

  //if (ChooseFunction == 4)
  //{
    
  //}
}


