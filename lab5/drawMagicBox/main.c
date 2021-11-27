#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }
void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}
int main()
{
    int size;
    printf("Enter Size Of Matrix: ");
    scanf("%d", &size);
    drawMagicBox(size);
    printf("\n");
    return 0;
}

void drawMagicBox(int size) {
    if(size %2 ==0 || size <=2){
        textattr(0x04);
        printf("ERROR: Size Should Be Odd And Greater Than OR Equal 3");
        textattr(0x07);
        return;
    }
    int row, col;
    for(int i=1; i<= size * size; i++) {
        if(i == 1){
            col=(size/2) +1;
            row=1;
        } else if((i-1)% size ==0) {
            row++;
        } else {
            row--;
            col--;
            if(col <=0) col = size;
            if(row <=0) row = size;
        }
        gotoxy(col *size, row *2);
        printf("%d", i);
    }
}
