i = 0

while i < 5:
    print("phrase") #affiche 5 fois phrase
    i += 1

launch_game = True
while launch_game:
    choixMenu = input("> ") 

    if choixMenu == "again":
        print("le jeu continue")
        continue #reste dans la boucle

    elif choixMenu == "quit":
        print("arrêt du jeu")
        break #quitte la boucle

    else:
        print("Commande introuvable")

print("a bientot...")

sentence = "salut"

for letter in sentence:
    print(letter) #affiche salut lettre en lettre en verticale
    if letter == "l":
        print("pas sympa")