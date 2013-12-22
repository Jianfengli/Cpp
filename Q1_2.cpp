#include <iostream>
using namespace std;

void swap (char &p, char &q){
	p = p ^ q;
	q = p ^ q;
	p = p ^ q;
}

void swap1(char *p, char *q){
	char temp = *p;
	*p = *q;
	*q = temp;

}

void reverse(char* s)
{
	if (!s) return;
	char * p = s, *q = s;
	while (*q) ++q;
	--q;
	while(p < q)
	{
		swap(*p++, *q--);
	}
}
int main(){
	char s[] = "0123";
	char t[] = "abcd";
	//cout << s << endl;
	//swap (s,t);
	swap(s[0],s[3]);
	//cout << s << endl;
	//cout << t << endl;
	cout << s << endl;
	return 0;
}