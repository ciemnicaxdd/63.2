#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class klasa
{

	ifstream plik1;
    public:


		klasa();
         bool check_if_good(string x);
		void zplik1u();

};
klasa::klasa()
{
	plik1.open("plik1.txt");
}
void klasa::zplik1u()
{
string number;
int counter=0;
if(plik1.good())
    {
    while(!plik1.eof())
    {
        plik1>>number;
        if(this->check_if_good(number))
        {
				counter++;
        }
		}
	}
	cout<<counter;
}
bool klasa::check_if_good(string number)
{
for(int i=0; i<number.length(); i++)
    {
    if(number[i]=='1' && number[i+1]=='1')
    {
         return false;
    }
	}
	return true;
}

int main(int argc, char** argv)
{
	klasa t1;
	t1.zplik1u();
	return 0;
}
