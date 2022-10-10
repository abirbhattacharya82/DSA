import random

print("Welcome to Rock-Paper-Scissors game!")
print("Enter 1 for Rock, 2 for Paper and 3 for Scissors.")
user_choice = int(input("What do you choose? "))

computer_choice = random.randint(1,3)
print(f"Computer chose {computer_choice}")

if computer_choice == user_choice:
    print("This is a draw")
elif ((user_choice == 1 and computer_choice == 2) or (user_choice == 2 and computer_choice == 3) or (user_choice == 3 and computer_choice == 1)):
    print("you lose.")
elif ((computer_choice == 1 and user_choice == 2) or (computer_choice == 2 and user_choice == 3) or (computer_choice == 3 and user_choice == 1)):
    print("You win!")
else:
    print("You typed an invalid number!")