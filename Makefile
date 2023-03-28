#
# 一般全大写变量用来表示允许调用 make 的时候传入的变量，
# 全小写变量表示仅内部使用的变量。
#
# 这里 CC 和 CXX 指定了要使用的 C 和 C++ 编译器。
#
CC := gcc
CXX := g++

#
# .PHONY 表示 all 不是一个真实会生成的文件，而是一个“伪目标”。
#
# 下面 all 是一个 target，它依赖另一个 target：app，
# 意味着要构建 all，首先需要构建 app。而 all 的 commands
# 部分为空，表示构建 all 不需要额外命令。
#
.PHONY: all
all: app

#
# 由于后面需要多次使用 main.o mysqrt.o 等目标文件列表，这里赋值给变量
# objects。
#
objects := main.o mysqrt.o

#
# app 是我们最终要生成的可执行文件名，它依赖 objects 中的
# 所有目标文件。
#
# 它使用 CXX 指定的编译器将所有目标文件链接
# 成 app 可执行文件。
#
app: $(objects)
	$(CXX) -o $@ $(objects)

#
# Make 可以自动推断 .o 目标文件需要依赖同名的 .cpp 文件，
# 所以其实不需要在依赖中指定 compute_sqrt.cpp 和 mysqrt.cpp，
# 也不需要写编译命令，它知道要用 CXX 变量制定的命令编译。
#
# 这里只需要指定目标文件所依赖的头文件，使头文件变动时可以
# 重新编译对应目标文件。
#
main.o: mysqrt.h
mysqrt.o: mysqrt.h

#
# clean 用于清除构建生成的临时文件、目标文件和可执行文件。
# 和 all 类似，它是一个“伪目标”。
#
.PHONY: clean
clean:
	rm -f app $(objects)
