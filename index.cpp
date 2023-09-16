#include <iostream>
#include <windows.h>

using namespace std;

int Method1()

// method 1 where i genarate sound with the help of escape character
{

  for (int i = 0; i < 10; i++)
  {

    // When the loop runs, it will create a beep sound, and then it will repeat the same process 9 times .    
	cout <<"\n"<<  i << " Programming Fundamentals Task  \a \n";      // /a will genertate a default sound


    
	Sleep(2000);                                  // Every iteration  will run with a delay of 2 seconds.
  };
    return 0;

}

int Method2()
// method 2 where i genarate sound with the help of Beep() function where i pass two parameters of frequency

{

  for (int i = 0; i < 10; i++)
  {

    cout <<" \n"<< i << " Programming Fundamentals Task \n";
    Beep(200, 500); // this will also genertae a beep voice which will be diff for /a
    Sleep(2000);
  };
  return 0;
};

int main()
{
  // Here is the maian function, where I call both functions.
//  Method1();

   Method2();
}