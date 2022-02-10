<p align="center">
 <img width="100px" src="https://raw.githubusercontent.com/NekoSilverFox/NekoSilverfox/403ab045b7d9adeaaf8186c451af7243f5d8f46d/icons/silverfox.svg" align="center" alt="NekoSilverfox" />
 <h1 align="center">Compilers</h1>
 <p align="center"><b>斯坦福大学-编译原理</b></p>
</p>

<div align=center>


[![License](https://img.shields.io/badge/license-Apache%202.0-brightgreen)](LICENSE)



<div align=left>
<!-- 顶部至此截止 -->




[toc]



# Week 1 简介 & Cool 语言

> Introduction & the Cool Programming Language



## 简介

课程主要讲的是**解释器**



**实现编程语言主要有两种方式：**

- **编译器 - Compilers**

    执行和编译是两个阶段。执行属于线上的话，相对解释器来讲。它需要结合合数据进行执行。此处编译器没有执行步骤，所以属于线下（off-line）

    <img src="doc/pic/README/image-20220210192150216.png" alt="image-20220210192150216" style="zoom:25%;" />

    

- **解释器 - Interpreters**

    我们把 Program 和 Data 作为 Input，通过解释器之后打到 Output

    在解释器执行程序之前，它不需要对这个程序做任何处理。直接把 Program 和 Data 丢过去就好了，可以说，解释器是程序运行的一部分（on-line）。

    <img src="doc/pic/README/image-20220210191919100.png" alt="image-20220210191919100" style="zoom:20%;" />

---



### 编译器结构

> 总结：
>
> 01-01 Introduction
>
> 01-02 Structure of a Compiler 编译器结构



世界上第一个编译器是 FORTRAN 1，由 IBM 公司花费 3 年开发（本来是预计 1 年就可以完成）。**它的影响十分深远，现代编译器依旧保留了它的框架**



**FORTRAN 1 的结构：**

**几乎**所有的编译器都经历了这些阶段，但近几年有所改变

1. **词法分析** - Lexical Analysis

    Lexical analysis divides program text into "**word**" or "**tokens**"

    词法分析的目标是将程序代码文本按照它的方式进行**分词**；换句话说就是**编译器对词与词法单元的区分**

    

    `tokens`：

    - 关键词（if、else）
    - 分隔符（空格）
    - 常量
    - 变量
    - 运算符（等号、双等号）

    

    问题：思考为啥如何避免 `==` 被识别成两个 `=`

    

    **语义树分析：**

    <img src="doc/pic/README/image-20220210195609841.png" alt="image-20220210195609841" style="zoom:20%;" />

    

    **需要解决的问题：**

    - 二义性问题（语境中的歧义）
    - 类型检查

    

2. **词法解析** - Parsing

    1 与 2 共同关注了语法方面

    

3. **语义分析** - Semantic Analysis

    比如：类型和作用域规则

    

4. **优化** - Optimization

    如何使程序占用更少的内存。修改代码使程序占用更少的资源。

    

    比如可以将：“还没开始下雨就把衣服收到屋子里” 改成 “未雨绸缪”，这样就明显的减少了”内存“的占用

    

    但是，以下是一个错误的例子：

    `X=Y*0` is the same as `X=0` 这样**不**算是优化！

    因为这只对 number 生效，而对 `NaN` 也就是 `Not a Number` 来说 `NaN * 0 = NaN`。如果这么优化了，那么会破坏整个重要的算法逻辑

    

5. **代码生成** - Code Generation

    简称 Code Gen

    将程序转换为其他语言，可以是机器码、另一种高级编程语言



**FORTRAN 与 现代编译器的各阶段占比对比：**

<img src="doc/pic/README/image-20220210202435333.png" alt="image-20220210202435333" style="zoom:30%;" />



---





### 01-03: The Economy of Programming Languages 编程语言的经济





## Cool



### 02-01 Cool Overview



### 02-02 Cool Example II



### 02-03 Cool Example III



