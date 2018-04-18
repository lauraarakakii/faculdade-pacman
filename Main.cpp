#include<iostream>
#include<string.h>
#include<stdio.h>
#include"Providers/AllegroProvider/AllegroProvider.h"
#include"App/Wall/Wall.h"
#include"App/Coin/Coin.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_native_dialog.h>

using namespace std;

int main(){

    /*int matriz[10][15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                          1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                          1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                          1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                          1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                          1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                          1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                          1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                          1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                          1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
  	*/


	AllegroProvider al_p;
	Wall h,h2,h3;
  Coin m,m2;
	al_p.setDisplay(800,600);
	al_p.loadDisplay();
	//al_p.setBackgroundColor(255,255,255);


	/*for(int i=0;i<10;i++)
    {
        for(int j=0;j<15;j++)
        {
            if((matriz[i][j])==1)
            {
                al_draw_bitmap(muro, j*TAM,i*TAM,0);
 
            }
            else
            {
                al_draw_bitmap(Coin, j*TAM,i*TAM,0);
            }
        }
    }*/


	h.setImage("wall.png",1,1);
	h.loadImage();
  h2.setImage("wall.png", 25, 1);
  h2.loadImage();
  h3.setImage("wall.png", 1, 50);
  h3.loadImage();
  m.setImage("coin.png", 1, 25);
  m.loadImage();
  m2.setImage("coin.png", 25, 25);
  m2.loadImage();
	al_flip_display();//Atualiza o Buffer da Tela
   	al_rest(5); //Tempo que a tela fica ativa (em segundos)
   	al_p.destroyDisplay();
	h.destroyImage();
	printf("compilou");
	return 0;
}