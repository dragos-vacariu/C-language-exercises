#include <stdio.h>
#include <stdbool.h> // used for bool type

struct MyStruct{
    //When you don't know the array size, you should use char*
    char *a;
    //When you know the array size, you should use char[size];
    //Example here: char b[22];
    int age;
};

int main()
{
    struct MyStruct object[6];
    object[0].a = "Deryck Whybley"; object[0].age = 22;
    object[1].a = "Alan Walker"; object[1].age = 29;
    object[2].a = "Derek Hamilton"; object[2].age = 32;
    object[3].a = "Ellias Mustellar"; object[3].age = 41;
    void SortingByName(struct MyStruct object[], int);
    void SortingByAge(struct MyStruct[], int , bool);
    void PrintStructContent(struct MyStruct object[], int);
    SortingByName(object, 4);
    PrintStructContent(object, 4);
    printf("\nPrinting the struct sorted increasingly by age: \n");
    SortingByAge(object,4,true);
    PrintStructContent(object, 4);
    printf("\nPrinting the struct sorted decreasingly by age: \n");
    SortingByAge(object,4, false);
    PrintStructContent(object, 4);
    scanf("%d");
}
void SortingByName(struct MyStruct object[], int sizeOfArray)
{
    int i,j;
    struct MyStruct Temporary;
    for(i=0;i<sizeOfArray;i++)
    {
        for(j=0;j<sizeOfArray;j++)
        {
            if(object[i].a[0]<object[j].a[0])
            {
                Temporary.a=object[j].a;
                Temporary.age=object[j].age;
                object[j].a = object[i].a;
                object[j].age = object[i].age;
                object[i].a = Temporary.a;
                object[i].age = Temporary.age;
            }
            else if(object[i].a[0]==object[j].a[0])
            {
                if(object[i].a[1]<object[j].a[1])
                {
                    Temporary.a=object[j].a;
                    Temporary.age=object[j].age;
                    object[j].a = object[i].a;
                    object[j].age = object[i].age;
                    object[i].a = Temporary.a;
                    object[i].age = Temporary.age;
                }
                else if(object[i].a[1]==object[j].a[1])
                {
                    if(object[i].a[2]<object[j].a[2])
                    {
                        Temporary.a=object[j].a;
                        Temporary.age=object[j].age;
                        object[j].a = object[i].a;
                        object[j].age = object[i].age;
                        object[i].a = Temporary.a;
                        object[i].age = Temporary.age;
                    }
                    else if(object[i].a[2]==object[j].a[2])
                    {
                        if(object[i].a[3]<object[j].a[3])
                        {
                            Temporary.a=object[j].a;
                            Temporary.age=object[j].age;
                            object[j].a = object[i].a;
                            object[j].age = object[i].age;
                            object[i].a = Temporary.a;
                            object[i].age = Temporary.age;
                        }
                    }
                }
            }
        }
    }
}
void PrintStructContent(struct MyStruct object[], int sizeOfArray)
{
    int i,j;
    for(i=0;i<sizeOfArray;i++)
    {
        printf("Name: %s    Age: %d\n", object[i].a, object[i].age);
    }
}
void SortingByAge(struct MyStruct object[], int sizeOfArray, bool Increasing_Decreasing_Order)
{
    int i,j;
    struct MyStruct Temporary;
        for(i=0;i<sizeOfArray;i++)
        {
            for(j=0;j<sizeOfArray;j++)
            {
                if(Increasing_Decreasing_Order)
                {
                    if(object[i].age < object[j].age)
                    {
                        Temporary.a=object[j].a;
                        Temporary.age=object[j].age;
                        object[j].a = object[i].a;
                        object[j].age = object[i].age;
                        object[i].a = Temporary.a;
                        object[i].age = Temporary.age;
                    }
                }
                else
                {
                    if(object[i].age > object[j].age)
                    {
                        Temporary.a=object[j].a;
                        Temporary.age=object[j].age;
                        object[j].a = object[i].a;
                        object[j].age = object[i].age;
                        object[i].a = Temporary.a;
                        object[i].age = Temporary.age;
                    }
                }
            }
        }
}
