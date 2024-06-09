#include"Sort.h"

void yxb::CreatTree(HuffmanTree* h, int n)
{
	if (n < 1)
		return;
	h = new HuffmanTree[n];
	for (auto i=Begin(h);i<End(h,n);++i)
		i->lch = nullptr, i->rch = nullptr, i->parent = nullptr;//初始化
	for (auto i = Begin(h); i < End(h, n); ++i)
		std::cout << "输入数据" << std::endl,std::cin >> i->weight;//存入数据
}

yxb::HuffmanTree* yxb::Begin(HuffmanTree* h)
{
	return h;
}

yxb::HuffmanTree* yxb::End(HuffmanTree* h, int n)
{
	return h+n;
}

void show(yxb::HuffmanTree *h,int n)
{
	for (auto i = Begin(h); i < End(h, n); ++i)
		std::cout << i->weight << "  ";
	std::cout << std::endl;
}
int main(char argc, char** argv)
{
	yxb::HuffmanTree* h{ nullptr };
	yxb::CreatTree(h, 3);
	std::sort(Begin(h), End(h, 3), Greater());
	show(h, 3);
}
