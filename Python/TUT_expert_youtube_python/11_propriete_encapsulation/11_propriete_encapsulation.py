#coding: utf-8

class Human:
    def __init__(self, nom, age):
        print("Creation Human")
        self._nom = nom
        self._age = age

    def _get_age(self): #voir age
        return "{} {}".format(self._age, "ans") #ça fonctionne aussi

    def _set_age(self, nouvel_age): #changer age
        if nouvel_age < 0:
            self._age = 0
        else:
            self._age = nouvel_age

    def _del_age(self): #supprimer age
        del self._age
    
    #property(<getter>, <setter>, <deleter>, <helper>)
    age = property(_get_age, _set_age, _del_age)

h1 = Human("varo", 12)

print(h1._get_age())
help(Human) #affiche ce que contient la classe