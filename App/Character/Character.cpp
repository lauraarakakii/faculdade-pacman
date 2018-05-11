#include<iostream>
#include"Character.h"
#include<string.h>
#include<stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <cstring>

using namespace std;



Character::Character(){
	this->imageName = NULL;
	this->position_x = this->position_y = -1;
}

Character::~Character(){
	al_destroy_bitmap(this->imageName);
	// delete [] this->imageName;
}

void Character::setPositions(int x, int y){
	//al_install_keyboard();
	//al_init_image_addon();
	this->imageName = al_load_bitmap("Images/garuleft.png");
	this->position_x = x;
	this->position_y = y;
}

int Character::getPositionX(){
	return position_x;
}

int Character::getPositionY(){
	return position_y;
}


void Character::loadImage(){
	al_draw_bitmap_region(this->imageName, 0, 0, 25, 25, this->position_x*25,this->position_y*25,0);
}

void Character::destroyImage(){
	al_destroy_bitmap(this->imageName);
	this->imageName = NULL;
	this->position_y = this->position_x = -1;
}

void Character::waitEvent(ALLEGRO_EVENT_QUEUE* fila_eventos){
	al_wait_for_event(fila_eventos,&(this->event));
}

ALLEGRO_EVENT Character::getEvent(){
	return (this->event);
}

bool Character::eventKeyDown(){
	return ((this->event).type == ALLEGRO_EVENT_KEY_DOWN);
}

bool Character::eventKeyUp(){
	return ((this->event).type == ALLEGRO_EVENT_KEY_UP);
}

bool Character::eventCloseDisplay(){
	return ((this->event).type == ALLEGRO_EVENT_DISPLAY_CLOSE);
}
