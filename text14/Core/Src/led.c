#include "stm32g4xx.h"                  // Device header
#include "lcd.h"
#include "stdio.h"
#include "usart.h"
#include "tim.h"
uint8_t flag,huanchun[50],cnt=0,cnt1;
char text[20];


void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
    if (huart->Instance == USART1) {
        huanchun[cnt++] = text2;  // 存储接收到的字节
        HAL_UART_Receive_IT(&huart1, &text2, 1);  // 重启接收
    }
}


void MY_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{

	
  if(huart->Instance==USART1)
  {
//	    huanchun[cnt++] = text2;  // 存储接收到的字节
//        HAL_UART_Receive_IT(&huart1, &text2, 1);  // 重启接收

	  
    if(__HAL_UART_GET_FLAG(&huart1,UART_FLAG_IDLE)!=RESET)
    {
		cnt=0;		
                __HAL_UART_CLEAR_FLAG(&huart1,UART_FLAG_IDLE);
            if(huanchun[0]=='l'&&huanchun[1]=='a'&&huanchun[2]=='n')
            {
                      sprintf(text,"lan\r\n"); 
                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);
            
            
            }
             else if(huanchun[0]=='q'&&huanchun[1]=='i'&&huanchun[2]=='a'&&huanchun[3]=='o'&&huanchun[4]=='\0')
            {
                      sprintf(text,"qiao\r\n"); 
                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);
            
            
            }
            else if(huanchun[0]=='b'&&huanchun[1]=='e'&&huanchun[2]=='i')
            {
                      sprintf(text,"bei\r\n"); 
                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);
            
            
            }
//            else
//            {
//                     sprintf(text,"brro\r\n"); 
//                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);
//            }
			
	}  

  }

}
//void HAL_UART_IRQHandler(UART_HandleTypeDef *huart)
//{
//    if(__HAL_UART_GET_FLAG(&huart1,UART_IT_IDLE)==SET)
//    {
//    
//                if(huanchun[0]=='l'&&huanchun[1]=='a'&&huanchun[2]=='n')
//            {
//                      sprintf(text,"lan\r\n"); 
//                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);
//            
//            
//            }
//             if(huanchun[0]=='q'&&huanchun[1]=='i'&&huanchun[2]=='a'&&huanchun[3]=='o'&&huanchun[4]=='\0')
//            {
//                      sprintf(text,"qiao\r\n"); 
//                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);
//            
//            
//            }
//            if(huanchun[0]=='b'&&huanchun[1]=='e'&&huanchun[2]=='i')
//            {
//                      sprintf(text,"bei\r\n"); 
//                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);
//            
//            
//            }
//            else
//            {
//                     sprintf(text,"brro\r\n"); 
//                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);

//            
//            
//            
//            }
//        
//        flag=0;
//        for(int i=0;i<cnt;i++)
//            {huanchun[i]=0;}
//            cnt=0;

//        
//        __HAL_UART_CLEAR_FLAG(&huart1,UART_IT_IDLE);
//    
//    
//    }
    





//}

//void RX(void)
//{
//    if(flag)
//    {
//        if(TIM2->CNT>15)
//        {
//            if(huanchun[0]=='l'&&huanchun[1]=='a'&&huanchun[2]=='n')
//            {
//                      sprintf(text,"lan\r\n"); 
//                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);
//            
//            
//            }
//             if(huanchun[0]=='q'&&huanchun[1]=='i'&&huanchun[2]=='a'&&huanchun[3]=='o'&&huanchun[4]=='\0')
//            {
//                      sprintf(text,"qiao\r\n"); 
//                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);
//            
//            
//            }
//            if(huanchun[0]=='b'&&huanchun[1]=='e'&&huanchun[2]=='i')
//            {
//                      sprintf(text,"bei\r\n"); 
//                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);
//            
//            
//            }
//            else
//            {
//                     sprintf(text,"brro\r\n"); 
//                      HAL_UART_Transmit(&huart1,(uint8_t *)text,sizeof(text),50);

//            
//            
//            
//            }
//        
//        flag=0;
//        for(int i=0;i<cnt;i++)
//            {huanchun[i]=0;}
//            cnt=0;
//            
//        
//        
//        }
//    
//    
//    
//    
//    
//    }



//}
