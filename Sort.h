#pragma once
#include"HuffmanTree.h"
//仿函数
//做相应操作以适应排序

class Greater
{
public:
	bool operator()(yxb::HuffmanTree L, yxb::HuffmanTree R)
	{
		return L.weight > R.weight;
	}
};
class Less
{
public:
	bool operator()(yxb::HuffmanTree L, yxb::HuffmanTree R)
	{
		return L.weight < R.weight;
	}
};
