# Qt_touch_interface

用Qt做一个界面，用来打开各种软件，实现界面的显示和各个软件的功能

本来我是打算跟着网上的Qt做项目的，但是看到太杂了，于是直接打算把它们全部糅合到一起，做成这样一个项目，秉承着开源的思想，我发布到github，新手做得可能很难看，哈哈哈哈


# 项目配置

使用qmake编译，Qt版本：6.5.3


# 开发历程

## V 0.0.4

+ app添加了软件描述
+ 实现了窗口图标跟随界面变化
+ 对工程文件进行了分类
+ 实现音乐播放器
  + 实现界面设置
  + 实现加载曲目功能
  + 实现播放和暂停功能
  + 实现切换曲目功能
  + 实现音乐总时长和当前播放时间显示
  + 实现播放进度条的操作



## V 0.0.3

+ 实现界面标题对应app的实时修改
+ 实现点击app跳转到对应的Software界面
+ 实现app串口助手
  + 实现串口助手界面设置
  + 实现串口助手数据清空
  + 实现更改串口收发设置
  + 实现串口连接断开
  + 实现串口收发数据
  + 实现串口数据显示



## V 0.0.2

+ 实现了点击app进入软件
+ 实现了按下app状态栏显示描述
+ 实现了按下Esc退出app



## V 0.0.1

+ 实现了主界面的排版显示
+ 实现app的图标设置和app的名字设置
+ 主界面固定大小800*600
+ app固定200*200
