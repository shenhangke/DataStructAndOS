#include <iostream>
#include "stdio.h"




struct TEST{
    int a;
    int b;
    char c;
};

//之前声明一个结构体，需要使用关键字+结构体的名字来声明
typedef int myint;

typdef struct TEST_RENAME{
    int a;
    int b;
    char c;
}test_rename;



//首先定一个数据块
/*
 * 爬行动物
 * 鳄鱼，乌龟。。。。。
 *
 * */
typedef struct PARTOFDATA{
    int age;
    int id;
    char gender;
    struct PARTOFDATA* next;
}PartOfData,*PPartOfData;


{

    //data
    PartOfData P_1;
    PartOfData P_2;
    PartOfData P_3;
    PartOfData P_4;
    PartOfData P_5;

    //需要的效果是：
    //P_1->P_2->p_3.....

}


int add(int a,int b){
    a=5;
    myint c;
    test_rename rename;
    return a+b;
}

int add_by_point(int *point_a,int b){
    //*point_a  这样子用的含义就会变成取这个指针志向的那块内存区域的值
    *point_a=6;
    return *point_a+b;
}

//引用的方式
int add_by_ref(int &ref_a,int b){
    ref_a=10;
    return ref_a+b;
}


//这个函数需要执行100s
//如果是负数的话，正常一个好的算法，是需要处理这种情况的
int add_sum(int n){
    int sum=0;
    if (n<0){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum=sum+i;  //执行这样的一个操作需要1秒钟   n次  这种操作的时间复杂度记为    O(n)
    }
    return sum;
}

int test(int n){
    int sum=0;
    for(int k=0;k<2;k++) {
        for(int i=0;i<n;i++){   //执行n次
            for(int j=0;j<n;j++){
                sum+=1;   //再j中需要执行n次  N*n  执行时间：2*n^2   O(n^2)
            }
        }
    }
    return sum;
}

//只用1s
int add_sum_2(int n){
    n=1;
    n=4;
    return ((1+n)/2)*n;   //这里只用了一次运算，只用了1s   O(1)
}

//在一般的函数调用的时候，发生这样的一个过程
/*
 * 首先，调用add(q,p);
 * 1，会把1，2，分别复制给新的变量，a,b
 * 2.函数的调用
 * 3。返回返回值
 *
 *
 *
 * */


/*
 *
 * 线性表：线性表中，有这样的几种形式。
 * 1。把元素，诶个诶个的串联起来，每一个元素都跟在前一个元素的后面
 * 在语言中，就表现为一个数组。
 * 补充：C的数组，本质就是一连串，连续的格子
 * 定义方式是这样的， int[5] arr;
 * 对于这样连续的格子来说，我们如果要访问的话，仅仅只需要使用数组的下标即可访问
 * 比如说我要访问第三个元素，arr[3]  对于在内存中，我只需要知道第一个格子的地址，根据第一个格子的位置，加上一个偏移量，我就可以找到我想要
 * 的那个元素的位置
 *
 * 2。元素的位置是分散的，我们需要用一种形式（比如说，用一根线），把这些散落的数据串联起来
 *
 *
 * []->[]->[]
 * 对于这种位置很分散的数据来说，上面第一种形式就不可行了。
 * 怎么办？
 * 我们把针类比于数据，我们用一根线，把诶个诶个的数据，串联起来
 * 对应与计算机来说，我们可以在第一个数据块中，保存后面一个块的地址，这样的话，我们就可以通过前一个块，找到后一个块
 *
 * 为什么我们需要这两种不同的数据结构呢？
 * 1。数据的分布不一定是理想的，所有的数据都能够连续的在内存中存放
 * 2。假如说，我在第一种（连续的内存空间中）情况下，我要在这个内存区域的中间，添加一个元素，我要要怎么做
 *
 *     1，2，3，4，5，6
 *     现在我有一个数，12，我要把他插入到3和4之间，我要做那些操作
 *     格子有10个格子，前面6个格子，放了上面的数
 *     现在你要把12查到房3的数的格子和4的数的格子中间
 *     要怎么做？
 *
 *     1。需要把4，5，6依次往后面的格子移动一个
 *     3。3后面的格子空出来，放12
 *
 *这样做的话，如果序列很长，极端情况下，我要插入的数在开头，时间代价就太大了
 * 我们就可以用链表
 *
 * 1个格子，存放了一个类似于指南针的东西，这个指南针指向了第二个格子的位置，依次类推
 *
 * 1->2->3->12->4->5->6
 *
 * 还是要插入12到3和4中间
 *
 * 依次通过这个指南针找到3这个格子的位置
 * 1。临时的，把3的指南针，指向的位置保存起来
 * 2。3的指南针指向的位置，指向12
 * 3。12中保存的指南针的位置指向4
 *
 * 在这个链表中，我做的操作，仅仅只是通过指南针的位置取寻找了下一个格子的位置，我没有把格子中的数据进行迁移
 * 这样的话，我们消耗的时间，就变少了
 *
 * 这是链表的一个优势
 *
 *
 * 同样的两种格子，如果我要寻找某个元素，会发生什么情况呢？
 * 1。连续的情况
 * 我知道第一个格子在哪里，现在要找第5个，我只需要把第一个格子的地址加上5，就可以找到了 时间复杂度(我只需要把第一个格子的位置，做一个加的运算，就可以
 * 找到我想要找的格子)
 * 比如说，我的第一个格子的地址是 0x000001,0x0000010  只是做了一次加法运算  O(1)
 *
 * 2。链表的情况
 * 顺着往每一个格子中指南针的方向，依次往下面寻找
 * 我要找第5个格子，需要多长时间？  4s， O(n)   我输入的规模是n,我需要的时间也是n-1
 *
 * 在查找的情况下，连续的存储就会比链表的情况，好很多
 *
 * 对于算法的衡量：算法的好坏衡量，需要是算法执行的是时间复杂度小。
 *
 * 规模是n   1<n<n^2
 * 对于时间复杂度来说，是一样的，  O(1)>O(n)>O(n^2)  效率的排序
 *
 *
 * */


int main() {
    std::cout << "Hello, World!" << std::endl;
    int aa=1;
    int* point_aa=&aa;

    //查看aa变量中是什么
    printf("%d\n",aa);
    //查看一下变量point_aa中保存的又是什么
    printf("%p\n",point_aa);


    struct TEST test;

    test.a=3;
    test.b=5;
    test.c='d';

    printf("test.a :%d\n",test.a);

    struct TEST* point_test=&test;

    printf("point_test point to a: %d\n",point_test->a);


    int q,p;
    q=1;
    p=2;
    int sum=add(q,p);

    sum=add_by_ref(q,p);

    printf("the sum value is: %d\n",sum);
    printf("the value of q is: %d\n",q);


    return 0;

    int a;
    //int 的全名是integer,意思是整数 ，比如1，。2，-1，-2
    float b;
    //7.8,0.123
    char c;
    //'a','b'

    //指针
    /*
     *
     *    -----------------------------------
     *    |  *12|   45|    24|
     *    ---------------------------------
     *    |  |   *|    ...|
     *    ---------------------------------
     *
     * //第一个格子，我把它编码成 0x0000001
     * //第二个临近的格子，我就编码成0x0000002
     *
     *int,char,float....
     * int* .char*,float*....
     *
     *
     *  q的地址的值是  0x00000001
     *  &q  取出来的值实际上，是0x00000001
     *  把这个地址的值复制给了函数中的局部变量point_a
     *  那么现在point_a变量中的值，也变成0x00000001
     *  改变了这个地址中对应的内存单元的值，
     *  实际上，就是我们更改了内存单元中的值
     *  所以，我们之前定义的q变量的值也一起改变了
     *
     *
     *
     * */


}