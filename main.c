#include <agb_lib.h>
#include "l1.h"
#include "player.h"
int16 lx;
int16 rx;
int16 y;
int level;
int px, py;
int dir;
int newframe;

int GetPixel3rev(int y, int x)
{
    return videoBuffer[y * 240 + x];
}

int PlayerTouchingColor(u16* color)
{
    if ((GetPixel3rev(py + 1 + y, px + 8 + lx) == color)OR(GetPixel3rev(py + 2 + y, px + 8 + lx) == color)OR(GetPixel3rev(py + 3 + y, px + 8 + lx) == color)OR(GetPixel3rev(py + 4 + y, px + 8 + lx) == color)OR(GetPixel3rev(py + 5 + y, px + 8 + lx) == color)OR(GetPixel3rev(py + 6 + y, px + 8 + lx) == color)OR(GetPixel3rev(py + 7 + y, px + 8 + lx) == color)OR(GetPixel3(px + 1 + lx, py + 8 + y) == color)OR(GetPixel3(px + 2 + lx, py + 8 + y) == color)OR(GetPixel3(px + 3 + lx, py + 8 + y) == color)OR(GetPixel3(px + 4 + lx, py + 8 + y) == color)OR(GetPixel3(px + 5 + lx, py + 8 + y) == color)OR(GetPixel3(px + 6 + lx, py + 8 + y) == color)OR(GetPixel3(px + 7 + lx, py + 8 + y) == color)OR(GetPixel3(px + 1 + lx, py + y) == color)OR(GetPixel3(px + 2 + lx, py + y) == color)OR(GetPixel3(px + 3 + lx, py + y) == color)OR(GetPixel3(px + 4 + lx, py + y) == color)OR(GetPixel3(px + 5 + lx, py + y) == color)OR(GetPixel3(px + 6 + lx, py + y) == color)OR(GetPixel3(px + 7+lx,py+y) == color)) {
        return 1;
    }
    else {
        return 0;
    }
}

void bottomcol()
{
    if((GetPixel3(px+1+lx,py+8+y)==0x6F7B)OR(GetPixel3(px+2+lx,py+8+y)==0x6F7B)OR(GetPixel3(px+3+lx,py+8+y)==0x6F7B)OR(GetPixel3(px+4+lx,py+8+y)==0x6F7B)OR(GetPixel3(px+5+lx,py+8+y)==0x6F7B)OR(GetPixel3(px+6+lx,py+8+y)==0x6F7B)OR(GetPixel3(px+7+lx,py+8+y)==0x6F7B)OR(GetPixel3(px + 1 + lx, py + 8 + y) == 0x3DEF)OR(GetPixel3(px + 2 + lx, py + 8 + y) == 0x3DEF)OR(GetPixel3(px + 3 + lx, py + 8 + y) == 0x3DEF)OR(GetPixel3(px + 4 + lx, py + 8 + y) == 0x3DEF)OR(GetPixel3(px + 5 + lx, py + 8 + y) == 0x3DEF)OR(GetPixel3(px + 6 + lx, py + 8 + y) == 0x3DEF)OR(GetPixel3(px + 7 + lx, py + 8 + y) == 0x3DEF)OR(GetPixel3(px + 1 + lx, py + 8 + y) == 0x5ef7)OR(GetPixel3(px + 2 + lx, py + 8 + y) == 0x5ef7)OR(GetPixel3(px + 3 + lx, py + 8 + y) == 0x5ef7)OR(GetPixel3(px + 4 + lx, py + 8 + y) == 0x5ef7)OR(GetPixel3(px + 5 + lx, py + 8 + y) == 0x5ef7)OR(GetPixel3(px + 6 + lx, py + 8 + y) == 0x5ef7)OR(GetPixel3(px + 7 + lx, py + 8 + y) == 0x5ef7)) {
        py -= 1;
        y = 0;
        if (keyDown(KEY_A)) {
            y = -4.05;
        }
    }
}



void rightcol()
{
	if ((GetPixel3rev(py + 1 + y, px + 8 + lx) == 0x6F7B)OR(GetPixel3rev(py + 2 + y, px + 8 + lx) == 0x6F7B)OR(GetPixel3rev(py + 3 + y, px + 8 + lx) == 0x6F7B)OR(GetPixel3rev(py + 4 + y, px + 8 + lx) == 0x6F7B)OR(GetPixel3rev(py + 5 + y, px + 8 + lx) == 0x6F7B)OR(GetPixel3rev(py + 6 + y, px + 8 + lx) == 0x6F7B)OR(GetPixel3rev(py + 7 + y, px + 8 + lx) == 0x6F7B)OR(GetPixel3rev(py + 1 + y, px + 8 + lx) == 0x3DEF)OR(GetPixel3rev(py + 2 + y, px + 8 + lx) == 0x3DEF)OR(GetPixel3rev(py + 3 + y, px + 8 + lx) == 0x3DEF)OR(GetPixel3rev(py + 4 + y, px + 8 + lx) == 0x3DEF)OR(GetPixel3rev(py + 5 + y, px + 8 + lx) == 0x3DEF)OR(GetPixel3rev(py + 6 + y, px + 8 + lx) == 0x3DEF)OR(GetPixel3rev(py + 7 + y, px + 8 + lx) == 0x3DEF)OR(GetPixel3rev(py + 1 + y, px + 8 + lx) == 0x5ef7)OR(GetPixel3rev(py + 2 + y, px + 8 + lx) == 0x5ef7)OR(GetPixel3rev(py + 3 + y, px + 8 + lx) == 0x5ef7)OR(GetPixel3rev(py + 4 + y, px + 8 + lx) == 0x5ef7)OR(GetPixel3rev(py + 5 + y, px + 8 + lx) == 0x5ef7)OR(GetPixel3rev(py + 6 + y, px + 8 + lx) == 0x5ef7)OR(GetPixel3rev(py + 7 + y, px + 8 + lx) == 0x5ef7)) {
		if (keyDown(KEY_A)) {
            y = -5;
            lx = 5;
        }
        else {
            rx = 0;
            px -= 2;
        }
    }
}

void leftcol()
{
    if ((GetPixel3(px + lx, py + 1 + y) == 0x6F7B)OR(GetPixel3(px + lx, py + 2 + y) == 0x6F7B)OR(GetPixel3(px + lx, py + 3 + y) == 0x6F7B)OR(GetPixel3(px + lx, py + 4 + y) == 0x6F7B)OR(GetPixel3(px + lx, py + 5 + y) == 0x6F7B)OR(GetPixel3(px + lx, py + 6 + y) == 0x6F7B)OR(GetPixel3(px + lx, py + 7 + y) == 0x6F7B)OR(GetPixel3(px + lx, py + 1 + y) == 0x3def)OR(GetPixel3(px + lx, py + 2 + y) == 0x3def)OR(GetPixel3(px + lx, py + 3 + y) == 0x3def)OR(GetPixel3(px + lx, py + 4 + y) == 0x3def)OR(GetPixel3(px + lx, py + 5 + y) == 0x3def)OR(GetPixel3(px + lx, py + 6 + y) == 0x3def)OR(GetPixel3(px + lx, py + 7 + y) == 0x3def)OR(GetPixel3(px + lx, py + 1 + y) == 0x5ef7)OR(GetPixel3(px + lx, py + 2 + y) == 0x5ef7)OR(GetPixel3(px + lx, py + 3 + y) == 0x5ef7)OR(GetPixel3(px + lx, py + 4 + y) == 0x5ef7)OR(GetPixel3(px + lx, py + 5 + y) == 0x5ef7)OR(GetPixel3(px + lx, py + 6 + y) == 0x5ef7)OR(GetPixel3(px + lx, py + 7 + y) == 0x5ef7)) {
		if (keyDown(KEY_A)) {

            y = -5;
            rx = 5;
        }
        else {
    lx = 0;
    rx = 0;
            px += 1;
        }
    }
}

void topcol()
{
    if ((GetPixel3(px + 1 + lx, py + y) == 0x6F7B)OR(GetPixel3(px + 2 + lx, py + y) == 0x6F7B)OR(GetPixel3(px + 3 + lx, py + y) == 0x6F7B)OR(GetPixel3(px + 4 + lx, py + y) == 0x6F7B)OR(GetPixel3(px + 5 + lx, py + y) == 0x6F7B)OR(GetPixel3(px + 6 + lx, py + y) == 0x6F7B)OR(GetPixel3(px + 7 + lx, py + y) == 0x6F7B)OR(GetPixel3(px + 1 + lx, py) == 0x3DEF)OR(GetPixel3(px + 2 + lx, py) == 0x3DEF)OR(GetPixel3(px + 3 + lx, py) == 0x3DEF)OR(GetPixel3(px + 4 + lx, py) == 0x3DEF)OR(GetPixel3(px + 5 + lx, py) == 0x3DEF)OR(GetPixel3(px + 6 + lx, py) == 0x3DEF)OR(GetPixel3(px + 7 + lx, py) == 0x3DEF)OR(GetPixel3(px + 1 + lx, py) == 0x5ef7)OR(GetPixel3(px + 2 + lx, py) == 0x5ef7)OR(GetPixel3(px + 3 + lx, py) == 0x5ef7)OR(GetPixel3(px + 4 + lx, py) == 0x5ef7)OR(GetPixel3(px + 5 + lx, py) == 0x5ef7)OR(GetPixel3(px + 6 + lx, py) == 0x5ef7)OR(GetPixel3(px + 7 + lx, py) == 0x5ef7)) {
        py += 1;
        y = 0;
    }
}

void die()
{
    px = 0;
    py = 144;
    lx = 0;
    rx = 0;
    y = 0;
}
void physics()
{
    MoveSprite(&sprites[0], px, py);
    y+=0.25;
    if (keyDown(KEY_LEFT)) {
        x -= 0.5;
    }
    if (keyDown(KEY_RIGHT)) {
        x += 0.5;
    }
    x *= 0.9;
    px += x;
    py += y;
    bottomcol();
    leftcol();
    rightcol();
    topcol();
    if(PlayerTouchingColor(0x001F)==1) {
        die();
    }
    if(py<0) {
        py=0;
        y=0;
    }
    if(py>160) {
        die();
    }
    if(px<0) {
        px=0;
        rx=0;
        lx=0;
    }
    if(px>232) {
        rx=0;
        lx=0;
    }
	newframe = 0;
}

int main()
{
    SetMode(MODE_3|BG2_ENABLE|OBJ_ENABLE|OBJ_MAP_1D);
    loadSpriteGraphics((void*)player, 32);
    loadSpritePal((void*)playerPalette);
    initSprite(0, SIZE_8, 0);
    drawbitmap3((void*)l1Bitmap);
    die();
    while(1) {
		if (newframe == 1)
		{
			physics();
		}else{
			CopyOAM();
			newframe = 1;
		}
    }
    return 0;
}