 

### tasks.json 配置详解
#### 1. 关键配置项说明 
- **变量替换** [6]()：
  - `${workspaceFolder}`: 工作区根目录路径。
  - `${file}`: 当前打开的文件路径。
  - `${fileBasenameNoExtension}`: 当前文件名（不含扩展名）。
 
- **常见任务类型**：
  - **C++编译**：需指定`g++`或`clang++`路径，搭配`-std=c++17`等编译选项 [[2][5]()。
  - **Python脚本执行**：`command`设为`python`，`args`设为`${file}`
    
```
{
"tasks": [
    {
        "type": "cppbuild",
        "label": "C/C++: g++ 生成活动文件",  //  在任务列表中看到的内容，可以任意命名
        
        "command": "/usr/bin/g++",  // 指定要运行的程序（命令），即 g++
        
        // 此任务告诉 g++ 获取活动文件
        // 对其进行编译，然后在当前目录中创建一个与活动文件同名
        // 但没有扩展名的可执行文件
        // 其实该部分参数就是g++编译器对应的参数设置
        "args": // g++ helloworld.cpp -o helloworld
        [ 
            "-fdiagnostics-color=always",
            "-g",
            "${file}",  //  要编译的cpp文件，可改为"${workspaceFolder}/*.cpp"，则编译所有cpp文件
            "-o",
            "${fileDirname}/${fileBasenameNoExtension}" // 输出名字
        ],
        "options": {
            "cwd": "${fileDirname}"
        },
        "problemMatcher": [
            "$gcc"
        ],
        "group": "build",
        "detail": "调试器生成的任务。"  // 在任务列表中对任务进行描述，建议重命名此值，以将其与类似任务区分开来。
    }
],
"version": "2.0.0"
}
```
---
 
### 三、`launch.json` 配置详解 
#### 1. 基础配置结构 
```
{
  "version": "0.2.0",
   "configurations": [
       {
           "name": "(gdb) 启动",
           "type": "cppdbg",
           "request": "launch",
           "program": "输入程序名称，例如 ${workspaceFolder}/a.out",  // 指定要调试的程序，很关键！
           "args": [], // 程序运行时，传递给程序的参数！比如：["./ubuntu.png"]
           "stopAtEntry": false, // 目标开头处是否停止，一般false
           "cwd": "${fileDirname}", // 目标的工作目录,相当于在终端里哪个路径位置，运行的程序
           "environment": [],
           "externalConsole": false,  // 是否在外部终端显示输出
           "MIMode": "gdb",
           "setupCommands": [
               {
                   "description": "为 gdb 启用整齐打印",
                   "text": "-enable-pretty-printing",
                   "ignoreFailures": true
               },
               {
                   "description":  "将反汇编风格设置为 Intel",
                   "text": "-gdb-set disassembly-flavor intel",
                   "ignoreFailures": true
               }
           ],
           "preLaunchTask": "C/C++: g++ build active file"
       }
   ]
}
 ```
 #### 2. 常见配置项说明 
 **调试器类型**
cppdbg: C/C++调试（需安装C/C++扩展）。
node: Node.js 调试。

**路径配置**：
program: 调试目标程序路径（如C++编译后的.out文件）。
cwd: 调试时的工作目录（默认为${workspaceFolder}）。

**调试前任务**：
preLaunchTask必须与tasks.json 中的任务label完全匹配（区分大小写）
 