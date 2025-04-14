#coding: utf-8

def hello(nom): #definir uen fonction
    print("hello {}".format(nom))

hello("luck")

def appel(nom = "tom", chat = "salut"): #si on met rien dans les () alors on affiche tom : salut
    print("{} : {}".format(nom, chat))

appel("luke", "viens me voir") #si on en oublit un, alors il mettra celui par défaut

def description(nom, age, nationalite):
    print("{}, {} ans, {}".format(nom, age, nationalite))

description(25, "paul", "argent")
description(age = 25, nom = "paul", nationalite = "argentin") #permet de ranger peu importe l'ordre où on a rentrer les infos

def show_inventory(*list_items): #* veut dire que la list n'a pas de fin
    for item in list_items:
        print(item)

show_inventory("épée")
show_inventory("épée", "arc", "bouclier")
show_inventory("anneau", "water")

def calcul(nb1, nb2):
    print("{} + {} = {}".format(nb1, nb2, (nb1+nb2)))
    #on peut faire un return result

calcul(15, 30)

def plus_grand(nb1, nb2):
    if nb1 > nb2:
        return nb1
    elif nb1 < nb2:
        return nb2
    else:
        return "Égalité"

print(plus_grand(13, 27))

coucou = lambda:print("salut") #on peut mettre ce qu'on veut c'est le principe de la fonction lambda
coucou()

calcul = lambda a,b : a+b #ne peut etre utiliser que si on ecrit sur une ligne
print(calcul(15, 15))