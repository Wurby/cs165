###############################################################
# Program:
#     Project 07, Moon Lander
#     Brother Dudley, CS165
# Author:
#     Joshua Pearson
# Summary:
#     A moonlander game.
# Above and Beyond
#     I unfortunately ran out of time and couldn't even finish
#	  the base project. Didn't do more than an hour of work
#	  this week. Hopefully you check here first. There are no
# 	  changes from last week. Hopefully I save you a little
#	  time. 
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main Moon Lander game
###############################################################
a.out: driver.o ground.o game.o uiInteract.o uiDraw.o point.o lander.o velocity.o
	g++ driver.o ground.o game.o uiInteract.o uiDraw.o point.o lander.o velocity.o $(LFLAGS)
	tar -j -cf moonLander.tar makefile *.h *.cpp

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
#	 lander.o	   Handles the lander
#	 velocity.o	   Handles the speed and momentum
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

ground.o: ground.cpp ground.h
	g++ -c ground.cpp

game.o: game.h game.cpp uiDraw.h uiInteract.h point.h ground.h lander.h
	g++ -c game.cpp

driver.o: driver.cpp game.h uiInteract.h
	g++ -c driver.cpp

lander.o: lander.h lander.cpp velocity.h uiDraw.h point.h
	g++ -c lander.cpp

velocity.o: velocity.h velocity.cpp
	g++ -c velocity.cpp

###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o *.tar
