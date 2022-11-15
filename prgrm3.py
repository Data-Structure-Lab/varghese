list1=[]
list2=[]
n=int(input("enter the elements"))
for i in range(0,n):
    list1.append(int(input()))
print("first list is",list1)
num=int(input("enter the elements"))
for i in range(0,num):
    list2.append(int(input()))
print("the first list is",list2)
len1=len(list1)
len2=len(list2)
if len1==len2:
    print("the lists are same length")
s=0
for i in list1:
    s=s+i
t=0
for i in list2:
    t=t+i
    if s==t:
       print("the lists sum are same")
