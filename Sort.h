#pragma once
#include"HuffmanTree.h"
//�º���
//����Ӧ��������Ӧ����

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
