## 实验一 生命游戏的模拟

* 生命游戏在一个无边界的矩形网格上进行，这个矩形网格中的每个单元可被占据，或者不被占据。被占据的单元称为活的，不被占据的单元称为死的。哪一个单元是活的是根据其周围活的邻居单元的数目而一代一代地发生变化的。

* 一代一代转换的具体规则如下：
>1. 某单元的邻居单元指的是与它在垂直、水平或对角方向上相接的8个单元。
>2. 如果一个单元是活的，则如果它具有2个或3个活的邻居单元，则此单元在下一代还是活的。
>3. 如果一个单元是活的，则如果它具有0个或1个、4个或4个以上的活的邻居单元，则此单元在下一代会因为孤独或拥塞而死亡。
>4. 如果一个单元是死的，则如果它恰好有3个活的邻居，则此单元在下一代会复活，否则该单元在下一代仍然是死的。

* 要求编写程序，模拟任意一个初始输入配置以及代代更替的不同状态并进行显示。

* 修改以上程序，要求生成一个网格时，用“空格”和“x”分别表示网格中每一个死的单元和活的单元，并且可根据用户选择从键盘或者从文件中读入初始配置。
---
## 实验二 长整数运算

* 实现线性表顺序存储结构、链式存储结构的基本操作，包括顺序表、单链表、双链表、单循环链表、双循环链表等；
* 设计并实现两个长整数的加、减、乘运算。
---
## 实验三 中缀表达式求值

* 中缀表达式是我们熟悉的表达式形式。
* 为了能正确表示运算的先后顺序，中缀表达式中难免要出现括号。假设我们的表达式中只允许有圆括号。
* 读入一个以浮点数为操作数的中缀表达式后，对该表达式进行运算。

1. 要求中缀表达式以一个字符串的形式读入，可含有加、减、乘、除运算符和左、右括号，并假设该表达式以“#”作为输入结束符。
>如输入“3.5*(20+4)-1#”，则程序运行结果应为83。
2. 要求可单步显示输入序列和栈的变化过程。并考虑算法的健壮性，当表达式错误时，要给出错误原因的提示。
---
## 实验四 小猫钓鱼纸牌游戏

* A和B两人玩简单的纸牌游戏，每人手里都有n张牌，两人轮流出牌并依次排列在桌面上，每次出掉手里的第1张牌，出牌后如果发现桌面上有跟刚才打出的牌的数字相同的牌，则把桌面上从数字相同的那张牌开始的全部牌按次序放在自己手里的牌的末尾。当一个人手中的牌先出完时，游戏结束，对方获胜。

>如n为5，<br/>
A手里的牌依次为2 3 5 6 1，B手里的牌依次为1 5 4 2 9；<br/>
A出2；<br/>
B出1；<br/>
A出3；<br/>
B出5；<br/>
A出5，发现前面有一张5，则把两个5都拿掉，这时他手里有6 1 5 5；<br/>
桌子上的牌依次为2 1 3；<br/>
B出4；<br/>
A出6；<br/>
B出2，发现前面有一张2，则把从2开始的牌全部拿掉，这时他手里有9 2 1 3 4 6 2；<br/>
桌子上没有牌了；<br/>
A出1；<br/>
B出9；<br/>
A出5；<br/>
B出2；<br/>
依次类推，直到某人先出完牌为止，则对方是胜者。<br/>

* 编写程序，利用栈和队列，判断谁是胜者。
---
## 实验五 二叉树的实现

* 产生一个菜单驱动的演示程序，用以说明二叉树的使用。
* 元素由单个键组成，键为单个字符。
* 用户能演示的二叉树基本操作至少包括：
1. 构造二叉树，
2. 按先序、中序、后序、层序遍历这棵二叉树，
3. 求二叉树的深度、宽度，
4. 统计度为0，1，2的结点个数等。
* 二叉树采用链式存储结构。

* 对二叉查找树做上述工作，且增加以下操作：
1. 查找目标键，
2. 插入、删除给定键的元素。
---
## 实验六 设计并实现一个社交网络模型图。

要求：
1. 每个人的信息是一个顶点，两个人相互认识则构成边。
2. 根据输入的任意两个人的信息，给出他们之间的联系路径，最少经过多少人构成联系。
3. 可根据自己的创意添加更多的功能。

---
## 实验七 排序算法的实现及性能测试及比较

* 在书中，各种内部排序算法的时间复杂度分析结果只给出了算法执行时间的阶，或大概执行时间。
* 试通过具体数据比较各种算法的关键字比较次数和记录移动次数，以取得直观感受。

要求：
1. 编写程序创建由一些整数组成的文件用于排序。
    * 创建的这些文件可以根据需要生成不同的长度，
    > 如长度分别为20，200和2000，
    * 以正序、逆序、随机顺序的方式创建这些文件，
    > 通过把所有这些测试数据保存在文件中（而不是每次在测试程序时用随机数生成），可以使用同样的数据去测试不同的方法，因此会更易于比较这些方法的性能。

2. 数据表采用顺序存储结构，实现
插入排序、选择排序、希尔排序、归并排序、快速排序、堆排序等排序，并对这些算法的实现效率进行比较和分析。

3. 排序的指标包含：运行时间、比较次数、移动次数。
---
## 实验八 查找算法的实现及性能测试与比较

* 在顺序表中存放n个整数，n的值由用户输入确定，
* 线性表可以是有序表或无序表。
* 比较各查找算法在不同情况下的时间性能。
* 各查找算法的实测时间性能包括两个指标：算法执行的绝对时间和关键字的平均比较次数。
* 各查找算法要求评测查找成功与不成功的两种情形。
* 为了能比较出各种查找算法执行的绝对时间，需要对表中的数据进行较大量的查找，
> 设为m次，m的值也由用户输入确定。当输入m为1000000时，则对线性表作1000000次查找。

1. 比较在有序表和无序表中进行顺序查找时，查找成功和查找失败时的算法执行的绝对时间和关键字的平均比较次数。
2. 比较在同一有序表中进行顺序查找和二分查找时的时间性能。
3. 比较在同一有序表中进行非递归二分查找和递归二分查找时的时间性能。
---