CC=gcc
CFLAGS=-W -Wall
EXEC = jeu
all: $(EXEC)

jeu: jeu.o  affiche.o init.o aleatoire.o jouer_un_coup.o joueur_contre_joueur.o
	$(CC)  -o jeu jeu.o affiche.o init.o aleatoire.o jouer_un_coup.o  joueur_contre_joueur.o $(LDFLAGS)

jeu.o: jeu.c
	$(CC)  -o jeu.o -c jeu.c  $(LDFLAGS) 
	
affiche.o: affiche.c affiche.h
	$(CC) -o affiche.o -c affiche.c $(LDFLAGS)

jouer_un_coup.o: jouer_un_coup.c jouer_un_coup.h
	$(CC) -o jouer_un_coup.o -c jouer_un_coup.c $(LDFLAGS)
	
joueur_VS_joueur.o: joueur_contre_joueur.c joueur_contre_joueur.h
	$(CC) -o joueur_contre_joueur.o -c joueur_contre_joueur.c $(LDFLAGS)
	
init.o: init.c init.h
	$(CC)  -o init.o -c init.c $(LDFLAGS) 
		
aleatoire.o: aleatoire.c aleatoire.h
	$(CC)  -o aleatoire.o -c aleatoire.c $(LDFLAGS) 


clean:
	rm -rf *.o  $(EXEC)
