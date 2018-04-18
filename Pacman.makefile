ALLEGRO_FLAGS=-L/usr/local/lib -lallegro `pkg-config --libs allegro-5 allegro_audio-5 allegro_dialog-5 allegro_image-5 allegro_memfile-5 allegro_primitives-5 allegro_acodec-5 allegro_color-5 allegro_font-5 allegro_main-5 allegro_physfs-5 allegro_ttf-5` 

ALLEGRO_INCLUDE= -I/usr/local/include/allegro5

all: AllegroProvider.o Wall.o Main.o
	g++ AllegroProvider.o Wall.o Main.o Moeda.o -o Pacman.exe $(ALLEGRO_INCLUDE) $(ALLEGRO_FLAGS)

Main.o: Main.cpp
	g++ -c Main.cpp $(ALLEGRO_INCLUDE) $(ALLEGRO_FLAGS)

AllegroProvider.o: Providers/AllegroProvider/AllegroProvider.h Providers/AllegroProvider/AllegroProvider.cpp
	g++ -c Providers/AllegroProvider/AllegroProvider.cpp $(ALLEGRO_INCLUDE) $(ALLEGRO_FLAGS)

Wall.o: App/Wall/Wall.h App/Wall/Wall.cpp
	g++ -c App/Wall/Wall.cpp $(ALLEGRO_INCLUDE) $(ALLEGRO_FLAGS)

Moeda.o: App/Moeda/Moeda.h App/Moeda/Moeda.cpp
	g++ -c App/Moeda/Moeda.cpp $(ALLEGRO_INCLUDE) $(ALLEGRO_FLAGS)

clean:
	rm *.o
	rm Pacman.exe 
