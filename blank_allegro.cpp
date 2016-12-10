/*
Base Game v6

Learning Objectives:
1. events and timer
2. extern variables

Copyright (c) 2016, Ali Arya
*/

//Using Allegro
//1- create a Win32 Project (no Console)
//2- include "allegro5/allegro.h"
//3- add allegro-5.0.10-monolith-md-debug.lib to Additional Dependencies, in Properties/Linker/Input
//4- In Linker/System set the SubSystem to Not Set if you want to see text window
//http://alleg.sourceforge.net/a5docs/5.0.10/
//

//libraries
#include <stdio.h>
//for sqrt (square root)
#include <math.h>
#include "allegro5/allegro.h"
//use image addon for loading images, dialog boxes, and primitive shapes
#include <allegro5/allegro_image.h>


//====================================================================
// Globals
//====================================================================

//global variable for display
ALLEGRO_DISPLAY* display = NULL; //ALLEGRO_DISPLAY is a "user defined type" in Allegro. * shows a pointer

								 //global variable for font



//initialzie Allegro components
void InitAllegro(int W, int H)
{

	//initialize allegro
	if (!al_init())
	{
		printf("failed to initialize allegro!\n");
	}

	//initialize display screen
	display = al_create_display(W, H);
	if (!display)
	{
		printf("failed to create display!\n");
		exit(0);
	}
	else
	{
		printf("ok");
		al_clear_to_color(al_map_rgb(0, 0, 0));
	}

	//initialize keyboard
	if (!al_install_keyboard())
	{
		printf("failed to install keyboard!\n");
		exit(0);
	}

	//initialize image addon
	if (!al_init_image_addon())
	{
		printf("failed to initialize image addon!\n");
		exit(0);
	}
}

//End and clean up Allegro components
void EndAllegro()
{
	al_destroy_display(display);

}


//main function
void main()
{
	///////////////////////////////////
	// INITIALIZE
	///////////////////////////////////

	//initialize allegro
	int sw = 640;
	int sh = 480;
	InitAllegro(sw, sh);

	//create main object
	

	///////////////////////////////////
	// LOOP (includes update and draw)
	///////////////////////////////////

	

	//clean up
	EndAllegro();
}