import sys

def Nqueue(queue):
    element = input('Enter the element to be inserted: ')
    queue.append(element)

def Dqueue(queue): # Mutator
    if len(queue) == 0:
        print('Queue is empty')
        return
    print(f'Popped element is {queue[0]}')
    del queue[0]

def listqueue(queue): # Accessor
    if len(queue) == 0:
        print('Queue is empty')
        return
    print(f'The Queue is {queue}')

def exit_program(queue):
    sys.exit('End of Program')

def invalid_choice(queue):
    print('Invalid choice entered')

def get_menu(choice, queue):
    menu = {
        1 : Nqueue,
        2 : Dqueue,
        3 : listqueue,
        4 : exit_program
    }
    menu.get(choice, invalid_choice)(queue)

def start_app(queue):
    choice = 0
    while True:
        print('1:Insert 2:Delete 3:ListQueue 4:Exit')
        choice = int(input('Enter your choice: '))
        get_menu(choice, queue)

queue = [] # this list is gonna work as queue
start_app(queue)
