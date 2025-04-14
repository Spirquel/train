from datetime import datetime #utiliser l'heure actuelle

day_now = datetime.now().day
month_now = datetime.now().month
year_now = datetime.now().year

second_now = datetime.now().second
minute_now = datetime.now().minute
hour_now = datetime.now().hour

day_user = 15
month_user = 10
year_user = 1900

if ((year_user > year_now) or (year_user < (year_now - 100))): #and (month_user not in range(1, 12)) and (day_user not in range(1, 31)):
    print("Date impossible")
else:
    age_year_user = (year_now - year_user)
    age_month_user = (12 - month_user)
    age_day_user = (31 - day_user)
    text = "votre age à la date du {}/{}/{} à l'heure {}-{}-{} est: {} ans, {} mois et {} jours"
    print(text.format(day_now, month_now, year_now, hour_now, minute_now, second_now, age_year_user, age_month_user, age_day_user))
