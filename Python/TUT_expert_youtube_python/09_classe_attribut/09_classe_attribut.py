#coding: utf-8

class Human:
    def __init__(self, _prenom, _age=15):
        #pass #signifi que la methode fait rien
        print("création d'un humain")
        self.prenom = _prenom
        self.age = _age


print ("lancement projet")

h1 = Human("antonio", 25) #affiche "création d'un humain" grace à self car self représente la classe de l'objet (si objet créé alors self est activé)
print("prenom: {}, age: {} ans".format(h1.prenom, h1.age))

h2 = Human("partice") #on aura l'age entrée par défaut, si y a rien d'entrée alors ça crache
print("prenom: {}, age: {} ans".format(h2.prenom, h2.age))
h2.prenom = "patrick" #on peut changer le prenom sans passer par un get
print("prenom: {}, age: {} ans".format(h2.prenom, h2.age))