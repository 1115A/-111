#pragma once
#include<iostream>
#include<algorithm>
namespace yxb
{

	struct HuffmanTree
	{
		int weight;
		HuffmanTree *parent, *lch, *rch;
	};
	void CreatTree(HuffmanTree* h, int n);//初始化函数，相当于构造函数
	HuffmanTree* Begin(HuffmanTree* h);//返回首地址
	HuffmanTree* End(HuffmanTree* h, int n);//返回尾地址

}
