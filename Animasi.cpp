#include <ncurses.h>
#include <windows.h>

int main(){
	initscr();
	
	mvprintw(0,27,"Harap Tunggu Sebentar\n");
	printw("\n");
	
	for(int i=1; i<=100; i++){
			printw("|");
			refresh();
			Sleep(100);
	}
	
	mvprintw(4,27,"Firman");
	refresh();
	Sleep(5000);
	
	mvprintw(4,33," Ahmad");
	refresh();
	Sleep(5000);
	
	mvprintw(4,39," Bayumi");
	refresh();
	Sleep(5000);

	mvprintw(6,20,"Terima Kasih Telah Bersedia Menunggu");
	
	getch();
	endwin();
}