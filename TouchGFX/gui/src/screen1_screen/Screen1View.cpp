#include <gui/screen1_screen/Screen1View.hpp>


// disabled
void Screen1View::initUART(){

}


Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    touchgfx_printf("screen 1 loaded \n");
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

/* uart init button */
/* add Wildcard range 0x20-0xFE to touchgfx otherwhise not working. */
void Screen1View::button3click(){
	touchgfx_printf("inint uart\n");

	/* print out int and text on UI*/
	 int some_int = 50;
	 Unicode::UnicodeChar list[TEXTAREA3_SIZE] = {0x42,0xE1, 0xE9, 0}; // tmp Unicode char array

	 const char* tmpp = "Hello World! "; // string to print

	 Unicode::strncpy(list, tmpp, TEXTAREA3_SIZE); // copt string to array.

	 Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s %d", list, some_int); // write out
	 textArea3.invalidate();

#ifndef SIMULATOR
	initUART();

#endif
}

void Screen1View::button2click()
{
}
