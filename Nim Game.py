# Print the welcome message for the game
print("""***************  Welcome to this game  ***************   
      """)
# Provide instructions to the players
print("1_this game is played by two player")         
print("2_ To win, you have to score 100 point")         
print('3_the number is between (1:10)')
points = 0
print("points =",points)
while points < 100 :
   while True:                               
     try:                                                              
       num = int(input("player1: please, enter the number: ") )       
       if num < 1 or num > 10:
          print("""player1 please enter number between (1:10), 
                  """)  
       elif num in range (1,11):
           break        
     except ValueError : 
         print("""player1: your number is invalid, 
               """)
   
   points += num
   while points >= 100 :
      if points == 100 :
        print(" player1 is winning ")
        print("   END GAME  ")
        exit()                                                      
      else:
         points -= num
         while True:
           try:                                                              
            num = int(input("""player1:you have score bigger than 100 point. 
please, enter the number: """) )        
            if num < 1 or num > 10:
                print("""player1: please enter number between (1:10), 
                      """)  
            elif num in range (1,11):
               break       
           except ValueError : 
               print("""player1: your number is invalid, 
               """)

         points += num
   print("Now point is", points)
                                         
   while True:
     try:                                                              
       num = int(input("player2:please, enter the number: ") )       
       if num < 1 or num > 10:
          print("""player2 please enter number between (1:10) :
                 """)  
       elif num in range (1,11):
           break    
     except ValueError : 
         print("""player2 your number is invalid,
                """)

   points += num    
   while points >= 100:
      if points == 100 :
        print(" player2 is winning ")
        print("   END GAME  ")
        exit()                                                       
      else:
         points -= num   
         while True:
            try:                                                              
             num = int(input("""player2: you have score bigger than 100 point.
please, enter the number: """) )        
             if num < 1 or num > 10:
                print("""player2: please enter number between (1:10) : 
                """)  
             elif num in range (1,11):
              break   
            except ValueError : 
              print("""player2: your number is invalid,
               """)

         points += num 
   print("Now point is",points)



   