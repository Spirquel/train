#coding:utf_8
#une variable ne doit pas être nommé avec un caractère spécial (é,î,etc.)

""" print() = affiche dans le terminal
    type() = permet de connaitre le type
    format() = permet de remplacer {} par une variable
    input() = permet de rentrer une valeur via le teminal"""

age_personne = 15
monnaie_personne = 158.36
nom_personne = "antony"
personne_agée = False #false ou true avec T et F

print(type(age_personne)) #affiche le type de la variable
print(type(monnaie_personne))
print(type(nom_personne)) #str = string 
print(type(personne_agée))

print("Age de la personne", age_personne, ".") #de base un espace est attribué après ,
print("Age de la personne ", age_personne)

text = "Age de la personne {} et elle à {} en monnaie" #si on colle "personne{}" alors la valeur s'affichant est collée à personne
print(text.format(age_personne, monnaie_personne))
print("nom de la personne est: {} et est-elle agée: {}".format(nom_personne, personne_agée))

cin = input("entrez quelque chose: ") #fonctionne comme un cin (en rentre une info au clavier) en c++ cependant ici on stock que du string
print("valeur entrée: {}".format(cin))

prix = input("entrez un nombre: ")
prix = int(prix) #ici on dit que le nombre entrée (considerer comme un string) est enfait un int et donc ici on le convertit
result = (prix * 25)/100 #taxe de 25%
print("valeur avec taxe:", result)