# STACK IMPLEMENTED AS A LIST

#To check stack is empty or not
def isEmpty(stack):
    if stack==[]:
        return True
    else:
        return False

#Insertion of Element   
def Push(stack, item):
    stack.append(item)
    top=len(stack)-1    

#Deletion of Element
def Pop(stack):
    if isEmpty(stack):    
        return "Underflow"
    else:
        item=stack.pop()
        if len(stack)==0:
            top=None
        else:
            top=len(stack)-1
        return item
    
#Inpection of top element
def Peek(stack):
    if isEmpty(stack):
        return "Underflow"
    else:
        top=len(stack)-1
        return stack[top]  

#Display of Stack Elements 
def Display(stack):
    if isEmpty(stack):
        print("Stack is Empty")
    else:
        top=len(stack)-1
        print(stack[top],"<-top")
        for a in range(top-1, -1, -1):
            print(stack[a])

#__main__
Stack=[]   # initIally empty
top=None
while True:
    print("\n\nStack Operations")
    print("1. Push")
    print("2. POP")
    print("3. Peek")
    print("4. Display")
    print("5. Exit")
    ch=int(input("Enter your choice (1-5): "))
    if ch==1:
        item=int(input("Enter item:"))
        Push(Stack, item)
    elif ch==2:
        item=Pop(Stack)
        if item=="Underflow":
            print("Underflow! Stack is Empty")
        else:
            print("Popped item is ", item)
    elif ch==3:
        item=Peek(Stack)
        if item=="Underflow":
            print("Underflow! Stack is Empty")
        else:
            print("Topmost item is ", item)
    elif ch==4:
        Display(Stack)
    elif ch==5:
        break
    else:
        print("Invalid Choice!")