//
// Created by 沈航可 on 2019-08-23.
//
#define n 5


/*
 * 树的概念
 *
 * 一个集合中，如果这个集合不为空的话，那么这个集合中一定有一个节点，是根节点，这个根节点，是所有其他节点的起源，
 *
 * 举个例子：
 *
 *                  爷爷
 *           |       |      |
 *        儿子_1   女儿_1  儿子_2
 *
 *        对于这个例子，爷爷就是祖先，对应于树来说，爷爷，就是那个根节点
 *
 * 度的概念：对于一个树中的节点来说，这个节点有几个孩子，他的度就是多少
 *
 *
 *
 *
 *
 * 二叉树的概念
 *
 * 二叉树的本质其实就是一个树，在这个树中，一个节点的孩子节点最多只可有有两个，可以为0，1，2，但是不能超过2。
 * 假如一个二叉树的节点中，有两个孩子，那么我们分别把这两个孩子叫做左孩子，和右孩子
 * 对于二叉树来说，如果左右孩子的位置可以互换，那么我们就说这个二叉树是一个无序二叉树，反之亦然
 * 对于一个二叉树中的节点来说，最大，只可有有2个子树
 * 二叉树其实就是一种特殊的树
 * 二叉树是一种数据结构，在这种结构中，一个节点，有两个子节点，对于每一个节点，只能够最大，有两个节点，不能够超过2个节点
 *
 *
 * 二叉树有一些数据，需要记一下：
 *
 *  我们默认，二叉树都是有序树，其左右节点，不可以互换
 *
 *
 *  特殊的二叉树：
 *  1。斜树
 *  2。满二叉树：所有有孩子节点的节点，他的孩子个数一定是2，也就是说，这个节点的度一定是2，并且，所有的叶子节点，都在同一层上。
 *  3。完全二叉树：如果我们给满二叉树的所有节点按照从左到右的顺序编号，如果一棵树，他的编号于这个满二叉树的编号顺序一致（这个树的节点数
 *  可以少于满二叉树），那么我们就把这个树叫做一个完全二叉树
 *
 *  完全二叉树有一个判断条件，如果一个节点的孩子节点，不是叶子节点的话，那么这个节点一定要有两个孩子节点，否则，这个树就一定不是二叉树
 *
 *  如何判断是一个树是一个完全二叉树：
 *  首先，我们要对这个树构建一个于这个树相对满二叉树，然后对这个满二叉树进行编号，同时，对我当前d 这个树进行编号，看这两个树的相同位置
 *  编号是不是一致，如果一致，就说明这个树是一个完全二叉树，如果不一致，就说明这个树不是一个完全二叉树。
 *
 *
 *
 *  如何把一个二叉树补全成对应的满二叉树：
 *  1。看这个给定的二叉树中的节点有没有子节点，如果有子节点的并且这个节点的子节点的个数为1，那么需要给这个节点加一个空的子节点
 *  2。观察给定的这个二叉树的深度是多少。如果给定的这个树经过第1步之后，有叶子节点的深度小于整颗树的深度，那么需要用空白的节点，作为当前
 *  这个叶子节点（那些深度没有达到整棵树深度的叶子节点）的子节点，循环这一步，直到所有的叶子节点，都在在同一深度下，并且，这个深度等于整棵树
 *  的深度。
 * */


//在线性表中，我们是这样定义的
/*
typedef struct PERSON{
    int age;
    int id;
    char name;
    struct PERSON* next;
};
 */


//如果我要表示树的话。假如，这个树有n个孩子
//类比于，上面这种方法，来定义树的结构
//这个机构表示的是一种族系的关系
//假如这个n是5，表示一个人最多可以生5个孩子
typedef struct PERSON{
    int age;
    int id;
    char name;
    //在线性表中，只需要一个指针，指向这个节点的后继节点，就可以了
    //但是在树的表示中，我们需要很多个指针，来表示这个节点的后继，是因为对于树这种结构来说，一个节点，会有很多个后续节点
    struct PERSON* children[n];
};
