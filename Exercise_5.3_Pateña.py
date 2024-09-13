class Node:
    def __init__ (self, data):
        self.data = data
        self.next = None
        
class LinkedList:
    def __init__(self):
        self.head=None
   
    def printdata(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next
   
        
if __name__ == '__main__':
    
    llist = LinkedList()

    llist.head= Node(1)
    Second = Node(2)
    Third= Node(3)
    llist.head.next = Second
    Second.next = Third
    
    
    llist.printdata()
    

