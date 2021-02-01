#include <stdlib.h>
#include <stdio.h>


int mem[100];

int sc_memoryInit(){
        for(int i = 0; i < 100; i++)
            mem[i]=0;   
    }

int sc_memorySet(int address, int value){
        if(address >= 100)
            return -1;
        mem[address] = value;    
    }

int sc_memoryLoad(char* filename){
        FILE *fp = fopen(filename,"rb");
        if(fp == NULL)
            return -1;
        fread(&mem, sizeof(int), 1, fp);   
    }

int its_showtime(){
        for(int i = 0; i < 100; i++)
            printf("%d", mem[i]);
    }
