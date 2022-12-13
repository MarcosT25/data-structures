class Node:
    def __init__(self, value):
        self.value = value
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def push(self, value):
        node = Node(value=value)
        if self.head == None:
            self.head = node
        else:
            aux = self.head
            while aux.next != None:
                aux = aux.next
            aux.next = node

    def pop(self):
        aux = self.head
        if aux.next == None:
            self.head - None
        else:
            while aux.next.next != None:
                aux = aux.next
            aux.next = None

    def printList(self):
        aux = self.head
        while aux != None:
            print(aux.value)
            aux = aux.next



