#include <iostream>
#include <string>
void printStars(int count) 
{
	for (int i = 0; i < count; i ++) 
	{
        	cout << "*";
	}
	cout << endl;
}
int main()
{
	printStars({"Hello", "World", "in", "a", "frame"}, 50);
	return 0;
)