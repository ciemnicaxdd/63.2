#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

class klasa
{
	ifstream plik1;
 public:
	    void wczytaj();
	    bool check(int);
		klasa();



};
klasa::klasa()
{
	plik1.open("plik1.txt");
}
void klasa::wczytaj()
{
	vector <int> tablica;
	string x;
	int casual_numbers;
	if(plik1.good())
	     {
		while(!plik1.eof())
               {
			 plik1>>x;
			 bitset<32> bin(x);
        casual_numbers = bin.to_ulong();
        if(this->check(casual_numbers))
        {
				tablica.push_back(casual_numbers);
			}
		}
	}
	     cout<<tablica.size()<<"\n";


	              cout<<"minimalnie "<< *min_element(tablica.begin(), tablica.end());

              	cout<<"maksymalnie "<< *max_element(tablica.begin(), tablica.end());


}

bool klasa::check(int x)
{
vector <int> tablica2;
for(int i=2; i<=x/2; i++)
    {
    int c=x;
    while(c%i==0)
    {
    c=c/i;
    tablica2.push_back(c);
    }
	}
if(tablica2.size()==2)
	{
       return true;

	}
	    else
            {
		return false;

	}
}

int main(int argc, char** argv)
{


	klasa t1;

	t1.wczytaj();
	return 0;
}
