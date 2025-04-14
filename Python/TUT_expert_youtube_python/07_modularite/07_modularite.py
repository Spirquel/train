#coding: utf-8
"""
import math #pour import que sqrt : from math import sqrt; pour tout import : from math import * avec "from" on a plus besoin du nom du module (ici math)

result = math.sqrt(100) #sqrt = racine carrée
print(result)

sinus = math.sin(math.pi) #c'est un flottant donc il connait pas les vrais math
print(sinus)
"""

import module_player #importation du file module_player #si dans un autre repertoir, pour appeler une methode on faite "name_folder.name_file methode()"
from module_player import parler #si dans un autre fichier on fait "name_folder.name_file"

module_player.au_revoir() #affiche la methode dans module_player
module_player.parler("kili", "wsh mademoiselle")
parler("ouiuou", "j'suis iiinnnnbebeeebb") #comme "from" plus besoin d'appeler le nom du module


