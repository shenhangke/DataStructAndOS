//
// Created by 沈航可 on 2019-08-22.
//

#include "linkedTable.h"

#define INT_INIT 0

//线性表的一些基本操作
/*
 * 1。初始化线性表
 *
 * 1.1 顺序存储的线性表（数组）
 *  对于数组来说，我们直接申明，或者创建一个固定大小的数组即可
 *  int arr[5]
 *
 * 1.2 链表（顺序表的链式结构）
 * 需要一个头节点，这个头节点中不保存数据，仅仅作为链表的初始结构
 *
 * node->node->.....
 *
 * 构造一个空的节点，在这个节点中，我们申明一个什么都不保存的节点结构
 *
 * 2。判断线性表是否为空
 * 2.1  顺序结构
 *  对于顺序结构来说，要判断这个线性表是不是为空，判断他中的元素是不是每一个都是空，O(n)
 *
 * 2.2  对于链式结构
 *  对于链接结构来说，我们只用判断头节点的next指针是不是为空 O(1）
 *
 * 3.清空线性表
 * 顺序结构和链表的清空，都需要将其中的元素遍历一遍，不一样的地方，见代码
 *
 * 4.获取特定元素
 *  4.1 在顺序表中获取特定的元素
 *  如果我们要获取特定的元素，直接使用数组下标，即可访问
 *
 *  4。2使用链表的话，就需要依次去遍历，找到我们所需要的节点
 *
 * 5。插入
 *
 * 6。删除
 *
 * 7 获取顺序表的长度
 * 7。1 顺序结构，
 *  就是当前分配的空间
 *
 *  7。2 获取链式结构的长度
 *  诶个遍历所有的节点，每经过一个节点，就+1，统计总数
 *
 *
 *  双向链表
 *对于单向链表来说，我们只能够从头节点开始遍历后面的节点，但是我们没有办法从后一个节点去找到前一个节点
 * node->node->node-......
 *     <-    <-
 * 我们在节点中，保存一个向前的指针
 *
 *
 * 对于顺序结构来说，查找容易，但是删除和增加比较难
 * 对于链式结构来说，查找困难，但是增加和删除比较容易
 *
 * 在使用场景上来说，如果我需要频繁查找元素，我们就肯定使用顺序结构
 * 反之，如果我需要频繁的增加或者删除元素的话，我们就使用链式结构
 *
 *
 *
 *
 * */


/*
 * 递归
 *
 * 什么叫递归
 *
 * 本质就是函数自己调用自己
 * 我们要计算1+2+3+。。。。n
 * */

int sum=0;

void getSum(int n,int index){
    if(index>n){
        return;
    }else{
        sum+=index;
        getSum(n,index++);
    }
}


typedef struct PERSON{
    int age;
    int id;
    char name;
    struct PERSON * next;
    struct PERSON * pre;
}Person,*PPerson;

//链表的初始化操作
Person initLinkedTable(){
    Person person;
    person.age=INT_INIT;
    person.id=INT_INIT;
    person.name='a';
    person.next= nullptr;
}

//顺序结构
int a[10];
Person headNode=initLinkedTable();

void clearTable(Person currentNode,Person PreNode){
    //线性结构
    /*for (int i=0;i<10;i++){
        a[i]=INT_INIT;
    }*/

    //如果是链式结构
    //我们通常可以先遍历到最后一个节点，释放这个节点，依次往前面倒推

    /*
     * headNode->Node_1->Node_2->node_3->null
     * Node_1->null xxxxx
     * 先找到node_3这个节点，然后释放他，然后再找到NOde_2节点，依次这样释放
     *
     * headNode->Node_1->node_2->null
     * headNode->Node_1->null
     * headNode->Null
     *
     * */


    //递归

    if(currentNode.next== nullptr){
        return;
    }
    clearTable(currentNode.next);
    delete node_3;  //删除当前的节点
    preNode.next=null;



}


//* node_1->node_2->node_3-......
//*     <-    <-
void deleteNode(Person person){
    Person* next_node=person.next;

    Person* pre_node=person.pre;

    pre_node->next=next_node;
    //node_1->node_3

    next_node->pre=pre_node;
    //node_1->node_3
    //node_1<-node_3
    delete &person;
}

