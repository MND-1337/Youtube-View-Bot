
#include <iostream>
#include <windows.h>


void urlfromvideo()
{
    system("start https://www.youtube.com/watch?v=ZRSAYoEVfrw");
}
int main()
{
    std::cout << "Youtube Tutorial #1 Code (viewbot)!\n";
    Sleep(2000);
    urlfromvideo();
    Sleep(15000); //15 is working :)
    system("taskkill /IM Chrome.exe /F"); //thats kill chrome after 25 secónds
    system("cls");
    main();
}

//this is the video i hope you enjoy the bot leave a like and subscribe
