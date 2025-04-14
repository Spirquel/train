#coding:utf_8

""" +, -, /, *, %"""

a = 5
b = 15
print("resultat de {} - {} = {}".format(a, b, (a-b)))

PrixHorsTaxe = input("entrez le prix de votre produit: ")
PrixHorsTaxe = float(PrixHorsTaxe)
Taxe = 20 #poucentage de taxes
print("Prix de votre produit: {} et prix pour une taxe de 20%: {}".format(PrixHorsTaxe, ((PrixHorsTaxe*Taxe)/100)))