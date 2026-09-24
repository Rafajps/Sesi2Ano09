import os
import time


decisao = 0
print("Jogo Da Vida!")
print("Tema: Rotina do Estudante")
print("Jogar? [1] Sim | [2] Não")
jg = int(input(""))
while jg != 1 and jg != 2:
    print("Você digitou errado!")
    print("Jogar? [1] Sim | [2] Não")
    jg = int(input(""))
if jg == 2:
  os.system('cls')
  print("Encerrando!")
  exit()
else:
   os.system('cls')

#-----
print("PRIMEIRA FASE:")
print("Você prefere acordar Cedo ou prefere dormir mais?")
print("Cedo [1] Dormir [2]")
fase = int(input(""))
while fase != 1 and fase != 2:
    print("Você digitou errado!")
    print("Você prefere acordar Cedo ou prefere dormir mais?")
    print("Cedo [1] | Dormir [2]")
    fase = int(input(""))
  
if fase == 1:
  decisao += 25
  print(f"Você quis acordar mais cedo e ganhou pontos de decisão final! DF: {decisao}!")
  
elif fase == 2:
  decisao -= 10
  print(f"Você quis acordar tarde e perdeu pontos de decisão final! DF: {decisao}!")

time.sleep(6) #Tempo pra mudar de fase
os.system('cls') #Apagar log anterior

#----
print("SEGUNDA FASE:")
print("Na escola você prefere prestar atenção na aula ou ficar conversando com colegas")
print("Prestar Atenção [1] | Conversar [2] ")
fase = int(input(""))
while fase != 1 and fase != 2:
    print("Você digitou errado!")
    print("Prestar Atenção [1] | Conversar [2] ")
    fase = int(input(""))
  
if fase == 1:
  decisao += 25
  print(f"Você quis prestar atenção na aula e ganhou pontos de decisão final! DF: {decisao}!")
elif fase == 2:
  decisao -= 10
  print(f"Você quis conversar com colegas e perdeu pontos de decisão final! DF: {decisao}!")

print("Aviso da professora: PROVA DAQUI 2 DIAS")
if decisao <= -20:
    print("ATENÇÃO! Você está com poucos pontos de DF!")

time.sleep(6)
os.system('cls')

#----
print("TERCEIRA FASE:")
print("Em casa você prefere fazer tarefa ou ficar mexendo no celular")
print("Tarefa [1] | Celular [2]")
fase = int(input(""))
while fase != 1 and fase != 2:
    print("Você digitou errado!")
    print("Tarefa [1] | Celular [2]")
    fase = int(input(""))

if fase == 1:
  decisao += 25
  print(f"Você quis fazer tarefa e ganhou pontos de decisão final! DF: {decisao}!")
elif fase == 2:
  decisao -= 10
  print(f"Você quis mexer no celular e perdeu pontos de decisão final! DF: {decisao}!")

if decisao <= -30:
    print("ATENÇÃO! Você está com poucos pontos de DF! Sua chance de reprovar aumentaram!")

time.sleep(6)
os.system('cls')

#----
print("QUARTA FASE:")
print("LEMBRETE: A prova já é amanhã!")
print("De noite você prefere estudar para a prova ou assistir uma série")
print("Estudar [1] | Assistir [2]")
fase = int(input(""))
while fase != 1 and fase != 2:
    print("Você digitou errado!")
    print("Estudar [1] | Assistir [2]")
    fase = int(input(""))
  
if fase == 1:
  decisao += 25
  print(f"Você quis estudar para a prova e ganhou pontos de decisão final! DF: {decisao}!")
elif fase == 2:
  decisao -= 10
  print(f"Você quis assistir à série e perdeu pontos de decisão final! DF: {decisao}!")

time.sleep(6)
os.system('cls')

#----
print("ULTIMA FASE:")
print("Finalmente chegou o dia da prova!")
if decisao == 100:
   print(f"Você tem {decisao} Pontos de Decisão Final seu Resultado foi:")
   time.sleep(6)
   os.system('cls')
   print("APROVADO!")
   print("FINAL BOM!")
elif decisao == 30 or decisao == -5:
   print(f"Você tem {decisao} Pontos de Decisão Final seu Resultado foi:")
   time.sleep(6)
   os.system('cls')
   print("Aprovado mas Raspando!")
   print("FINAL MÉDIO!")
else:
    print("FASE SECRETA:")
    print(f"Você tem {decisao} pontos de Decisão Final sua única alternativa é trapacear")
    print("Você vai querer? Sim [1] Não [2]")

    fase = int(input(""))
    while fase != 1 and fase != 2:
        print("Você digitou errado!")
        fase = int(input(""))

    if fase == 1:
        decisao -= 60
        time.sleep(6)
        os.system('cls')
        print("A professora percebeu a tentativa de cola e você foi encaminhado à secretaria. Use isso como aprendizado e escolha melhor da próxima vez.")
        print("Que sirva de lição para nunca colar!")
        print("FINAL PÉSSIMO!")
    else:
        time.sleep(6)
        os.system('cls')
        print(f"Você quis não trapacear, que bom! Mas seus pontos de decisão final restantes não te salvou da prova {decisao}!")
        print("FINAL RUIM")
input("Aperte enter para sair!")