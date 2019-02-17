# BinaryTree

定义为一个对象，该对象表示一颗二叉树。与其说是一颗二叉树的对象，不如说是一颗二叉树的入口，以及操作接口。入口，即是根节点，操作，可以对该二叉树进行插入，删除，遍历的操作。自有根节点作为该 二叉树的一个数据成员存在于该二叉树对象中。而其他二叉树中的节点都是通过_root进行连接成串联系成为一个二叉树整体。

二叉树对象的指针变量，与二叉树节点的指针变量，两者的区别。

## 1 数据接口

### 1.1 _size

表示该二叉树的规模，即该二叉树的中节点的总数。

### 1.2 _root

存放二叉树根节点地址的变量，也即二叉树对象节点链的入口处。

## 2 成员函数

### 2.1 构造函数

默认构造函数：创建规模为零的二叉树。

注意，根节点也是作为二叉树链中的一个节点。

### 2.2 析构函数

### 2.3 只读操作接口

#### 2.3.1 size()

返回此颗二叉树的规模。即该二叉树中节点的总数目。

#### 2.3.2 empty()

判断该二叉树是否为空

### 2.4 可写操作接口

#### 2.4.1 insertAsRoot()

#### 2.4.2 insertAsLC()

#### 2.4.3 insertAsRC()

#### 2.4.4 attachAsLC()

#### 2.4.5 attachAsRC()

#### 2.4.6 remove()

将此节点及其往后的子代均从从当前二叉树中去除，并将这些组成为一颗新的二叉树进行返回


