#pragma once

typedef struct CStashTag {
	int size;
	int quantity;
	int next;
	unsigned char* storage;
} CStash;
void initialize(CStash* s, int size);
void cleanup(CStash* s);
int add(CStash* s, const void* element);
void* fetch(CStash* s, int index);
void inflate(CStash* s, int increase);

/***输出所有结果信息***/
void stashPrintf();