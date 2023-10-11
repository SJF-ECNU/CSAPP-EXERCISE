#include<stdio.h>

typedef unsigned char *byter_pointer;

void show_bytes(byter_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
        printf("%.2x", start[i]);
    printf("\n");
}

int main()
{
    const char*s="abcdef";
    show_bytes((byter_pointer)s, strlen(s));
}
/*
字符串的存储不受大端（Big-Endian）或小端（Little-Endian）的影响，因为字符串是由字符组成的，而字符本身不具有多字节的表示形式。字符串是一系列字符的序列，每个字符通常由一个字节表示，不会涉及多字节的字节序问题。

大端和小端问题通常出现在多字节数据类型（例如整数、浮点数）的存储和表示中，因为多字节数据类型会占用多个字节，并且需要确定字节的排列顺序。在大端系统中，最重要的字节位于地址最低的存储器位置，而在小端系统中，最重要的字节位于地址最高的存储器位置。这影响了多字节数据类型的存储和表示，但对于单字节字符，它们的字节序不是问题。

因此，字符串的存储方式不依赖于计算机的字节序，因为每个字符都只占用一个字节，没有多字节排列顺序的问题。字符编码（如ASCII、UTF-8）规定了字符如何映射到字节，但这不受大端或小端的影响，因为字符编码的规范通常独立于底层计算机体系结构的字节序。
*/