// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


class rstring {
public:
	void* reversestring(char *p, char *y) {
		char  *rp, *rxp, *yxp, *oldptr;
		int x = strlen(p);
		//rxp = (char  *)calloc(strlen(p) +1, sizeof( char ));
		yxp = y;
		oldptr = p;
		rp = &p[(strlen(p) - 1)];

		while (*p != '\0')
		{
			*yxp = *rp;
			yxp++;
			rp--;
			p++;


		}
		return NULL;
	}
	
};
	


int main()
{
	rstring *test = new rstring;
	char *rxp = (char  *)calloc(strlen("this is it") + 1, sizeof(char));
	test->reversestring("this is it", rxp);


	cout << rxp << endl;
	delete rxp;
    return 0;
}

