#include "libc/screen.h"
#include "libc/kb.h"
#include "libc/string.h"
kmain()
{
       clearScreen();
       print("Peck kernel 1.0\nBy Rudra Saraswat\nStarting Tash\n");
       tash(0);	
}

tash(int i) {
	string ch;
	do
	{
	        print("\ntash $  ");
	        
	        ch = readStr();
	        if(strEql(ch, "tash"))
	        {
			tash(i+1);
	        }
		else if(strEql(ch, "exit"))
	        {}
	        else if(strEql(ch, "clear"))
	        {
	                clearScreen();
	        }
	        
	        else
	        {
	                print("\nBad command!\n");
	        }
	        
                print("\n");
        
       } while (!(strEql(ch, "exit")));
}
