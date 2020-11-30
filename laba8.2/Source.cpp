#include <iostream>
#include <string>
using namespace std; string Faw(string a){	size_t  len;	int q;	size_t start = 0, finish;	start = a.find_first_of("0", start);	if (start == -1)	{		cout << "Nema spivpand";		return 0;	}	while (start= a.find_first_of("0", start) != -1)	{		q = start;		finish = a.find_last_not_of("0", start);		len = finish - start;		;		if (len>1)		{			a=a.erase(q, len);		}					}	return a;}int main(){	string a;

	cout << "Vvedit shos: ";
	getline(cin, a);	cout << Faw(a);}