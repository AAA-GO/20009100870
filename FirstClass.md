### 第一节课笔记

#### 注册github  

> [github](http://github.com)

#### github的一些操作

```bash
	git clone  //(.......地址)  复制到电脑

​   git add * 

​	git commit -m "  ...  "   //(注释)        和上一步一起将文件上传至本地

​	git push     //上传至服务器

​	git pull      //与最新的版本合并`
```

#### markdown 

> 文档标注 
>
> md文件

Vscode 环境配置之一

#### 什么是电脑

​	以计算机为例 :

![img](file:///C:\Users\gkd\AppData\Local\Temp\ksohtml3456\wps3.png) 

 

​	拥有此五部分（输入，存储，输出，运算，控制器），即为电脑

​	功能：进程管理  存储管理  设备管理  文件管理  UI

#### AutoDesk  

> TinkerCAD网站  [TinkerCAD](http://www.tinkercad.com)

#### 电路板

> 数字引脚：输入输出的仅0，1       对应块状图
>
> 模拟引脚：能输出持续的电压        对应正余弦函数图
>
> 数字引脚旁有波浪线：脉冲，可当模拟引脚使用
>
> 例：LED亮灭问题可转化为单片机控制引脚问题，通过更新引脚间电压差来实现闪烁与亮灭
>
>   LED   长正短负

![img](file:///C:\Users\gkd\AppData\Local\Temp\ksohtml3456\wps4.png) 

#### 电路代码相关

> 代码中无main函数，但单片机中会执行：
>
> 如，void setup (  ){  }和void loop (  ){  }都会在main函数中执行，其中loop还会在它外面套一个while(1){loop()}的循环

###### 部分函数解释：

```c
void setup(  ){

pinMode(7,OUTPUT);  //7号引脚输出

}

Void loop(  ){

digitalwrite(7,HIGH);  //控制7号引脚高电压

Digitalread(7);     //读取7号引脚电压状态，返回HIGH or LOW

}
```

#### 电路相关

> 开关按下，分流使引脚变为低电压
>
> 开关连接对角线两点



#### 学习Arduino

> 该网站的documents   
>
> [arduino](www.arduino.cc)



word类型 ---两字节 ---与unicode相关