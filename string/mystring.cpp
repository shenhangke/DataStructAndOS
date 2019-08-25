//
// Created by 沈航可 on 2019-08-23.
//

/*
 * 什么叫串：
 *
 * 串的定义，由有序字符组成的序列
 *
 * 比如，单词 book
 *
 * 字符串的两种存储结构：
 * 1。顺序存储
 * 说白了，就是用一个字符数组，来存储一个字符串
 *
 *2.链式存储
 * 之前，我们用节点来表示线性表中的一个数据块，
 *
 * 比如，我用一个块保存b,o,另外一个块保存o,k,那么我用链表的形式，存储起来
 *
 * (b,o)->(o,k)
 *
 * 3.朴素的模式匹配算法       |
 * 比如我们有一个字符串，bookgogoogle----母串
 * 现在，我们的需求是，查找这个串中，有没有一个子串，叫做google
 *
 * 那么，具体是怎么做的呢？
 * 首先，我们诶个字母进行匹配，
 * 匹配b，和子串中的第一个字符g
 *
 *
 * b  o  o  k  g  o  g  o  o g  l  e
 *
 *                   g  o  o   g  l  e
 *
 * */

char word[5]={'b','o','o','k','\0'};