// predict the output:

#include <iostream>
using namespace std;
int main() {
int number = -4;
char result;
result = number > 0 ? 'P' : 'N';//this condition become false and result get N
cout << result << endl;
return 0;
}
//output
// N