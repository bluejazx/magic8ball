#include <iostream>

int main()
{
  //variables for each response
  std::string rep1 = "Yes - definitely. \n";
  std::string rep2 = "It is decidely so. \n";
  std::string rep3 = "Without a doubt. \n";
  std::string rep4 = "Reply hazy, try again. \n";
  std::string rep5 = "Ask again later. \n";
  std::string rep6 = "Better not tell you now. \n";
  std::string rep7 = "My sources say no. \n";
  std::string rep8 = "Outlook not so good. \n";
  std::string rep9 = "Very doubtful. \n";
  std::string question;

  //generates a pseudorandom number for 9 possible cases
  srand (time(NULL));
  int num = rand() % 9;

  //gets the users question
  std::cout << "Enter your quetsion down below and the Magic8Ball will answer: \n";
  std::cin >> question;
  
  //outputs an answer out of 9 possibilities
  switch (num)
  { 
    case 1:
      std::cout << rep1;
      break;
    case 2:
      std::cout << rep2;
      break;
    case 3:
      std::cout << rep3;
      break;
    case 4:
      std::cout << rep4;
      break;
    case 5:
      std::cout << rep5;
      break;
    case 6:
      std::cout << rep6;
      break;
    case 7:
      std::cout << rep7;
      break;
    case 8:
      std::cout << rep8;
      break;
    case 9:
      std::cout << rep9;
      break;
    default:
      std::cout << rep1;
    }
}