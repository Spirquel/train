#coding: utf-8

"""
methode d'instance (on utilise self)= methode où il faut create un objet et agir dans cette methode
methode de classe (on utilise cls)= utilise une classe pour modifune methode qui modif un param dans la class (propre à la class et non à l'objet)
methode statique = methode créée et qui peut être lue, mais cependant pas changer (hormis dans la classe)
"""

class Human:

    lieu_habitation = "earth"

    def __init__(self, nom, age): #constructeur
        self.nom = nom
        self.age = age
    
    def parler(self, msg): #methode d'instance
        print("{} a dit: {}".format(self.nom, msg)) #en appellant la methode il suffit de mettre un msg (self = this ici)

    def changer_planete(cls, planete): #methode de classe
        Human.lieu_habitation = planete
    changer_plane = classmethod(changer_planete)

    def meteo(): #methode static
        print("il fait soleil")
    meteo_ici = staticmethod(meteo)


h1 = Human("claude", 15)
h1.parler("salut toi")

print("Planete actuelle: {}".format(Human.lieu_habitation)) #comme on appel l'attribut via le nom de la class, alors celui-ci est la valeur stocké de l'attribut
h1.changer_plane("jupiter") #l'objet peut changer un élément de la classe grâce à "classmethode"
print("Planete actuelle: {}".format(Human.lieu_habitation)) #si on crée un autre objet, alors cette valeur sera celle "officiel" de l'attribut lieu_habitation

Human.meteo_ici()
