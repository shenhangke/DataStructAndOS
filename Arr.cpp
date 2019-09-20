//
// Created by MoonKnight on 2019/9/17.
//
#include "Windows.h"

int a[10];

//a 数组名的本质,实际上就是一个指针,这个指针指向的是数组的第一个元素

//printf("%d",*a);

int *p=a;

//printf("%d",*(p+1))

void delete_1(){
    for(int i=0;i<listsize;i++) {
        if(elem[i]==NO_POSSIBLE_VAR){
            continue;
        }
        for (int j = i; j < listsize; j++) {
            if (elem[i] = = elem[j]) {
                //删除J指向的那个元素
            }
        }

    }


    //移动被你换成不可能值的那些格子
    //将后面的元素统一往前面移动一格
}

void  add(int a,int b);

FILE *file;



