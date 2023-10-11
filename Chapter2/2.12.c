#include <stdio.h>

//A.
int get_lowest_byte(int x) {
    // 使用位掩码获取最低有效字节
    int mask = 0xFF; // 0xFF 表示低8位都是1，其它位都是0
    int result = x & mask;
    return result;
}

//B.
#include <stdio.h>

int get_lowest_byte_complement(int x) {
    // 获取最低有效字节
    int lowest_byte = x & 0xFF;

    // 对除了最低有效字节外的其他字节进行取反
    int complemented_bytes = ~x & ~0xFF;

    // 将最低有效字节和取反后的其他字节合并
    int result = lowest_byte | complemented_bytes;

    return result;
}

//C.
int lowest_set_one(int x)
{
    int result=x&~0xff;

    return result|0xff;
}

int main() {
    int x = 0x87654321;
    int lowest_byte = get_lowest_byte(x);

    printf("原始值: 0x%X\n", x);
    printf("最低有效字节: 0x%X\n", lowest_byte);

    return 0;
}
