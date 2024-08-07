#include <stdio.h>

unsigned short datasum(unsigned short* data, int len);

int main()
{
    int i, length;
    unsigned short cksum, sum = 0;
    unsigned short header[] = {

        0x4500, 0x0073,
        0x0000, 0x4000,
        0x4011, 0xb861,
        0xc0a8, 0x0001,
        0xc0a8, 0x00c7

    };

    length = sizeof(header);
    printf("length: %d [bytes]\n", length);

    printf("data: ");
    for (i = 0; i < length / 2; i++)
        printf("0x%04x ", header[i]);
    printf("\n");

    sum = datasum((unsigned short*)header, length / 2);
    cksum = ~sum;
    printf("0x%04x(%u)+0x%04x(%u) = 0x%04x(%u)\n", sum, sum, cksum, cksum, sum + cksum, sum + cksum);

  
    cksum =~-sum;
    printf("0x%04x(%u)+0x%04x(%u) = 0x%04x(%u)\n", sum, sum, cksum, cksum, sum + cksum, sum + cksum);
    

    return 0;
}

unsigned short datasum(unsigned short* data, int len)
{
    unsigned long sum = 0;
    printf("========================================\n");

    for (; len > 0; len -= 1)
    {
        printf("0x%08lx + 0x%04x = 0x%08lx\n", sum, *data, sum + *data);
        sum += *data++;
    };

    while (sum >> 8) {
        printf("[0x%08lx] : 0x%08lx + 0x%08lx = 0x%08lx\n",
            sum, (sum & 0xff), (sum >> 8), (sum & 0xff) + (sum >> 8));
        sum = (sum & 0xff) + (sum >> 8);
    };
    printf("========================================\n");

    return sum;
}