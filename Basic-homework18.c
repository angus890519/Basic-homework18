/* �p������׹��-�򥻽m�ߧ@�~-�@�~18*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/07 01:15*/ 
#include<stdio.h>  //��ܮw 
#include<string.h> //��ܮw 
void main()
{
    char str[20]; //�w�q�r��}�C 
    int i,num[256]={0}; 
    printf("�p������׹��-��¦�m�ߧ@�~-�@�~18\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/07 01:15\n");
	printf("-------------------------------------------------\n");
	printf("              ��C�ӼƦr�X�{������               \n");
	printf("-------------------------------------------------\n");    
    printf("��J�@�ӳs���ơG");  
    scanf("%s",str); //��J 
    for(i=0;i<strlen(str);i++) //���r��X�Ӫ����� 
        num[(int)str[i]]++; 
    for(i=0;i<256;i++) //��ܥX�� 
        if(num[i]!=0)
            printf("�r��%c�X�{%d��\n",(char)i,num[i]);
}
