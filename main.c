//
//  main.c
//  lab12
//
//  Created by Morgan  McDowell on 4/19/17.
//  Copyright © 2017 Morgan  McDowell. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define MAXSIZE 30

int getID(int []);
void getLunch(int [], int);


int main ()
{
    int size;
    int iD[MAXSIZE];
    
    size = getID(iD);
    int lunch[size];
    getLunch(lunch, size);
}

int getID(int iD[])
{
    int size = 0;
    int flag = 0;
    int num;
    
    printf("Enter up to 30 student ID numbers or -1 to exit: ");
    while (flag != 1 && size < MAXSIZE)
    {
        scanf("%d", &num);
        iD[size] = num;
        if(iD[size] != -1)
            size ++;
        if(iD[size] == -1)
            flag = 1;
    }
    return size;
}

void getLunch(int lunch[], int arraySize)
{
    int num;
    int i;
    
    printf("Enter up to 30 student ID numbers or -1 to exit: ");
    for (i = 0; i < arraySize; i++)
    {
        scanf("%d", &num);
        lunch[i] = num;
    }
}

int getLine(int line[], int iD[], int lunch[], int size, int cold[])
{
    int i;
    int hot;
    int coldSize = 0;
    
    for (i = 0; i < size; i++)
    {
        if (lunch[i] == 1)
        {
            hot = iD[i];
            line[i] = hot;
        }
        else
        {
            cold[i] = iD[i];
            coldSize ++;
        }
    }
    return coldSize;
}

void merge(int line[], int cold[], int hotSize, int coldSize, int size)
{
    int i;
    int j = 0;
    
    for(i = hotSize - 1; i < size; i++)
    {
        line[i] = cold[j];
        j++;
    }
}









