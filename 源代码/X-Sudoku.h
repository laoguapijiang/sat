﻿#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#ifndef Sudoku_h
#define Sudoku_h

#include <stdio.h>
#include <stdlib.h>
#include "solver.h"
#include "cnfparser.h"

status Sudoku(void);
FILE* CreateSudokuFile(void);//创建数独问题转化为SAT问题后的cnf文件
status CreateSudoku(void);//创建新的随机9*9数独终盘
status SolveSudoku(void);//求解数独cnf文件并转化为数独终盘形式输出
status DigHole(int num);//对已知数独终盘挖num个洞生成有唯一解的数独问题
status SudokuComplete(void);//完善数独终盘
status SudokuExchange(void);//基于cell元素交换原理增加一数独终盘的随机性
status CNFSudokuTableTransform(void);//数独对应SAT变元表转化为二维数组
status SudokuTablePrint(void);//输出数独盘

#endif /* Sudoku_h */