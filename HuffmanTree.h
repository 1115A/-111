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
	void CreatTree(HuffmanTree* h, int n);//��ʼ���������൱�ڹ��캯��
	HuffmanTree* Begin(HuffmanTree* h);//�����׵�ַ
	HuffmanTree* End(HuffmanTree* h, int n);//����β��ַ

}
