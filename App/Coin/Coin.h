#ifndef COIN_H
#define COIN_H
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <stdio.h>
class Coin {
/*----------------- File: Coin.h ---------------------+
|DESCRICAO DO ARQUIVO 								  |
| 													  |
| 													  |
| Implementado por “Victor Alcantara" em 17/04/2018|
+-----------------------------------------------------+ */
	private:
		ALLEGRO_BITMAP* imageName;
		float position_x, position_y;
		char* getPublic(char*);
	public:
		void setImage(char*,int, int);
		void loadImage();
		void destroyImage();

		Coin();
		~Coin();
};
#endif