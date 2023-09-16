First Programer in C++
In this program, I created two functions, Method1() and Method2(), that will generate a beep sound after every line of code is compiled. I am using a for loop here to avoid repetition.

Method1;

In this method, I generate beep voices with the help of \a, which is an escape character. and I run the loop nine times. then I used the sleep function, where the function will rest for 2 seconds, then it will again run the loop a second time. In the same process, a loop will run nine times. and our method 1 is completed.

Method2;

In method 2, instead of using \a, I used the beep() function, which will take two parameters of frequency Beep(200,500). We will get this function from <windows.h>. Same; I run the loop nine times, but the difference is that the Beep() sound is different from \a.
