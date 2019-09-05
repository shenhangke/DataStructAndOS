//
// Created by MoonKnight on 2019/9/3.
//

/*
 * 1.查找表:由同一个类型的数据元素构成的集合
 * 2.关键字:数据中数据元素的某个数据项的值
 *
 * 主关键字:如果这个关键字可以唯一的标识一个元素,那么我们叫这个关键字为主关键字
 * 次关键字:                  标识多个元素,                           次关键字
 *
 * 查找:根据给定的某个值,然后在查找表中确定一个关键字等于这个给定值的数据元素
 *
 * 静态查找表:
 *  所谓的静态查找表,实际上就是说不管我怎么查找,在这个表中的元素都不会发生变化
 *   1.查找给定的元素是不是在这个表中
 *   2.查找某个特定的元素的属性(内容)
 *
 *  动态查找表
 *  在发生查找动作的时候,这个表中的内容会发生一定的变化
 *  1.查找的时候插入元素
 *  2.查找的时候删除元素
 *
 *
 *  查找操作有这样的几个:
 *  1.顺序查找:在这个表中所有的数都是按某个顺序存放的
 *  如果我要查找这个表中存放的数据的话,我需要把这个表进行一个遍历,在遍历的过程中找到了元素,则函数返回
 *
 *  1 2 3 4 5 6 7 ....
 *
 *  我现在要找到6这个元素
 *
 *  2.有序表的查找:
 *  什么是有序表:
 *  存储在表中的数据,其关键字都是按一定的顺序存放的
 *
 *  1   C语言从入门到放弃
 *  2   JAVA从入门到放弃...
 *  3
 *  4
 *  5
 *  6
 *
 *  这样的表,就叫做有序表.
 *
 *  折半查找:
 *  举个例子
 *
 *  我们现在有一个数组,其中从小到大分别存储了1到100的数组
 *
 *  1 2 3 4.....
 *
 *  那么现在我要找到34在哪里,最快的方法是什么?
 *
 *
 *  这个序列的中间的那个数是50
 *
 *  比较34 和50 哪一个比较大
 *
 *  那么就说明34一定是在1-50之间
 *
 *  再比较25和34那个大
 *
 *  25-50
 *
 *
 *  34和37(25+12)那个大
 *
 *  25-37  ....
 *
 *
 *  折半查找的时间复杂度是O(logn)
 *
 *  线性索引查找
 *
 *  1.稠密索引查找
 *
 *  对数据项和数据建立某种一一对应的关系,通过这样的一一对应的关系来对数据项进行一个查找
 *  1   C语言从入门到放弃
 *  2   JAVA从入门到放弃...
 *  3
 *  4
 *  5
 *  6
 *
 *
 *  2.分块索引查找
 *
 *  一个图书馆会有很多的不同的分类
 *
 *  1   中文藏书    具体藏书的地址
 *  2   英文藏书    xxxxx
 *  3   西班牙文藏书  xxxxx
 *  4
 *
 *
 *  二叉排序树:
 *  二叉排序树会有这样的一个特征
 *  1.她是一个二叉树
 *  2.对于这个二叉树来说,他的某一个节点的左子树上面的值一定比当前的这个节点的值小
 *  3.他的某一个节点的右子树上面的值一定比当前的这个节点的值大
 *  4.他的左右子树也一定满足上面这3个条件
 *
 *  62 88 58
 *
 *  62 88 58 47 35 73 51 99 37 93
 *
 *  二叉排序树的查找最坏的情况需要查找的次数是跟这个树的最大深度一致
 *  但是,最大深度通常是小于等于总的节点数的.
 *  有可能二叉排序树查找需要花费的时间跟顺序查找一样(当这个树是斜树的情况下)
 *  但是,如果这个二叉树有一个分支(非斜树),那么查找的时间复杂度就大概率是小于顺序查找的
 *
 *
 *  最坏的情况示跟顺序查找一样,但是好的情况示要好于顺序查找的
 *
 *
 *  构建:就是使用递归的方法,每一次都判断一个节点,看我当前的要插入的数是不是大于或者小于这个节点,如果大于这个节点,我就把
 *  这个树插入到当前节点的右边,如果不大于,就插入到左边
 *
 *  删除:1.如果我要删除的元素,是在当前的二叉排序树中是叶子节点的话,那么我就直接删除这个节点
 *       2.如果当前的节点只有左/或者右子树的话,那么直接将这个节点删掉,然后将这个节点的直接子树的根连接到这个节点的父节点上面去
 *       3.如果当前我要删除的这个节点,既有左子树,又有右子树:
 *       (1)首先,我需要对这个树做一个中序遍历
 *       (2)找到这个中序遍历的前驱节点或者后续节点(注意,这里是在中序遍历之后的前驱和后驱节点,不是在树中的前驱和后驱节点)
 *       (3)把前驱节点替换到当前我要删除的这个节点,然后把前驱节点在图中删掉,如果前驱节点有子节点的话,把子节点连接到该前驱
 *       节点的父节点上面
 *
 *  AVL树(平衡二叉树)
 *  平衡二叉树本质上,也是一颗二叉树,但是这个二叉树的每一个节点的左右子树的深度,绝对值不大于1
 *
 *  构建一个平衡二叉树:
 *  前提条件:我们已经有了一颗平衡二叉树,然后现在我要往整这个平衡二叉树中加元素
 *  PS: 左右子树的高度差,我们把他叫做平衡因子
 *  在构建一个二叉树的时候
 *  如果加入一个节点之后,我们发现在这个树中有某个节点的平衡因子的绝对值大于1
 *  同时,这个节点的平衡因子<0,那么我们就将这个子树进行一次左旋
 *
 *  同样的,如果我们在加入一个节点之后,发现这个树中的某个节点的平衡因子的绝对值大于1
 *  同时,这个节点的平衡因子>0,那么我们就对这个子树进行一次右旋
 *
 *  举个例子,假如说我们现在有这样的一个数组
 *  [3,2,1,4,5,6,7.10,9,8]?
 *  然后我们要将这个数组构建成一个平衡二叉树,我们应该怎么做?
 *
 *
 *  构建一个平衡二叉树的方法:
 *  1.依次往这个平衡二叉树中加入节点
 *  2.在加入的过程中要注意这么几个点:
 *  (1)如果遇到在插入节点之后,整个树中有节点的平衡因子小于-1,那么就要把这个部分进行左旋
 *  (2)                                               大于1,                       右旋
 *  (3)如果父节点的平衡因子的符号跟子节点的平衡因子符号不一致,那么就要先调整子树,使得子节点的符号与父节点的符号一致
 *  然后再进行旋转
 *
 *  这部分的代码是不需要掌握的
 *
 *  散列表:
 *
 *  在查找一开始的时候讲过,对于查找来说,一个数据项,有一个关键字
 *  我们做一个函数的映射,将关键字一一映射到一个存储位置
 *
 *  y=f(x),我把X做了某种运算,使得X可以唯一映射到一个Y值
 *
 *  存储位置=f(关键字)
 *
 *  y=x^2
 *
 *  散列技术,就是在记录一个数据项的存储位置和它的关键字之间,建立一个确定的关系(这个关系就是一个确定的运算法则),使得每一个
 *  关键字通过运算,都可以得到一个唯一的存储位置
 *
 *  哈希函数说白了,就是那个对应的运算法则
 *
 *  散列表其实就是通过哈希函数的计算,将我所有要存储的数据项放到一块连续的存储空间中
 *
 *  哈希函数的构造:
 *  哈希函数的构造,要满足两个条件:
 *  1.这个函数的计算要简单
 *  2.散列地址要分布均匀
 *
 *   1  C从入门到放弃...
 *   2  .........
 *
 *  构造哈希函数的方法有这么几个:
 *  现在常用的哈希函数,有这么几个:
 *  1.直接定址法
 *  一个人的年龄是20岁,另外一个人的年龄是50岁,那么如果我用年龄作为关键字的话
 *  第一个人的存储位置就是数组中的第20个格子,第二个人的位置就是第50个格子
 *
 *  变种:对这个关键字,做一个线性函数的处理
 *  y=2x+3
 *
 *  2*20+3=43
 *
 *  2.数字分析
 *  139xxxxx0918
 *  139xxxxx0826
 *
 *
 *  哈希函数就不再是具体的某种四则运算的法则,变成了分析关键字中的某种特征(关键字具有某种数字特征),用这种特征来作为存贮这个
 *  数据项的存储位置
 *
 *  3.平方取中
 *
 *  如果关键字是数字的化(如果不是数字,就把关键字转化为数字),把这个关键字做一个平方的运算,然后去这个结果的中间的那个数字
 *
 *  22
 *
 *  22^2=144
 *
 *  这个时候我就取他中间的这个数,就作为我存储的位置
 *
 *
 *
 *  4.折叠法
 *  条件:
 *  针对关键字的位数比较长的情况:
 *  123456789
 *  1.先把这串数字按某种分隔的方法分隔成几个部分
 *  123  456 789
 *  然后,我就这部分的数进行加和
 *
 *  123+456+789=1368
 *
 *  然后 我将结果作为某种数字特征,抽取其中的几位
 *  将这几位作为存储的依据
 *
 *  5 除留余数法:
 *  f(key)=key mod p
 *  mod 叫做取余操作
 *
 *  这个适用于我知道我的存储空间是多少的情况
 *  并且这种方法能够比较平均的把我的数据项进行合理的安排
 *
 *  6 随机数法
 *
 *  通过给计算机一个种子,让计算机通过这个种子生成一个随机数,用这个随机数作为存储位置进行存储
 *
 *  我们在选择散列函数的时候,需要考虑一些什么问题:
 *  1.需要考虑计算这个散列函数的值所需要的时间
 *  2.关键字的长度
 *  3.散列表的大小
 *  4.关键字的分布情况
 *  有这样的一些关键字
 *  1,2,3 ,4 ,5 ,6     1000,999,998...
 *  5 记录查找的频率
 *
 *  处理散列冲突的方法:
 *  什么是散列冲突:
 *  比如说,我选用除留余数法作为散列函数
 *  那么碰到以下几个数:
 *  p=3
 *
 *  7  10  9
 *  1.开放定址法
 *
 *  如果我再计算位置的时候,发生了冲突,那么我会去计算下一个可以存放这个数据的位置,将这个数据放进去
 *  我用除留余数法作为散列函数
 *
 *  我的空间是这个样子的
 *
 *  散列函数是:position=key mod 2
 *
 *
 *  int a[5]
 *  | 7 | 10  |  |  |  |
 *  当遇到冲突的时候,我就让key+1,在做一次散列
 *
 *  2.再散列函数法:
 *  我们事先准备多个散列函数
 *  如果发生冲突,我就换一个散列函数,然后把当前这个数据项使用其他的散列函数进行计算,一直计算到有空余的位置可以放我的数据项为止.
 *
 *  3.链地址法
 *  我们使用数组保存链表的头结点,然后将每一个数组都创建为一个链表,每次遇到冲突,就在对应的链表后面加内存块,并且把原链表的最后一个元素的指针
 *  指向这个内存块
 *
 *
 *
 *  散列表的查找:
 *  我现在有我要查找的数据的主键,然后,我要通过这个主键去散列表中查找我的数据.
 *
 *  1.最一般的方法:
 *  用主键通过散列函数计算得到存储位置
 *
 *  2.如果碰到冲突怎么办
 *  我们就需要按照当时创建散列表的方法,一次去试探是不是我要找的数据
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * */

typedef struct PERSON{
   char name;
   int age;
   int id;
}Person;

