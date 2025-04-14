#coding: utf-8

#dès qu'on voit une erreur ne pas hesiter à faire un except avec le nom de l'erreur

ageUser = input("entrez votre age: ")

try: #si c'est un int
    ageUser = int(ageUser)
except: #si c'est pas un int
    print("Age Incorrect")
else: #si ça passe (c'est un int) affiche
    print("tu as {} ans".format(ageUser))
finally: #peu importe si c'est try ou excepet ça va l'afficher
    print("FIN")

nb1 = 20
nb2 = input("nombre pour diviser {}: ".format(nb1))

try:
    nb2 = int(nb2)
    print("Division de {} par {} = {}".format(nb1, nb2, (nb1/nb2)))
except ZeroDivisionError: #en faisant ça, on dit que pour cette erreur on affiche ce print.
    print("On ne peut pas diviser par zero")
except ValueError: #ici ça indique que la personne à rentrez un string ou autre type incorrect
    print("Il faut entrer un nombre")
except :
    print("Valeur incorrect")
else:
    print("Merci d'avoir utiliser notre code")
finally:
    print("Fin du programme")

age = input("entrez votre age: ")
age = int(age)

if age < 10: #provoque une erreur (déjà existante dans l'arborescence python)
    raise ZeroDivisionError("t'as plus que ça mon copain") #on peut aussi mettre sans le commentaire

try: 
    ageUser2 = input("entrez votre age: ")
    ageUser2 = int(ageUser2)

    assert ageUser2 > 25
except AssertionError: #si age est < 25 alors on provoque l'erreur "AssertionError" 
    print("age < 25")