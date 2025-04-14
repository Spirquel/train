#coding:utf-8

identifiant = "ttessier"
passeword = "1234"

IdentifiantSaisit = input("Entrez votre identifiant: ")

if IdentifiantSaisit == identifiant:
    PassewordSaisit = input("Entrez votre mot de passe: ")

    if PassewordSaisit == passeword:
        print("Bienvenue")
    else:
        print("Mot de passe non reconnu")
else:
    print("Identifiant non reconnu")

"""and (et); or (ou); in (dans); not in(pas dans)"""

AgePersonne = input("Entrez votre age: ")
Accompagné = input("Êtes-vous accompagné: ")

AgePersonne = int(AgePersonne)

if AgePersonne < 18 and Accompagné == "oui" or Accompagné == "true":
    print("Vous pouvez Cirucler")
elif AgePersonne >= 18 and Accompagné == "non" or Accompagné == "false" or Accompagné == "oui" or Accompagné == "true":
    print("Vous pouvez circuler")
else:
    print("Vous ne pouvez pas circuler")

letter = input("Entrez une lettre: ")

if letter in "aeiouy":
    print("{} est une voyelle".format(letter))
else: #not in
    print("{} est une consonne".format(letter))

Etat_TV = False

if not Etat_TV:
    print("TV Éteinte")
else:
    print("TV Allumée")
