#ifndef __LED_H
#define __LED_H

#include "stm32f10x.h"
#define  uchar  unsigned char
#define  uint  unsigned int
/*---------------------- 3.3v��Դʹ�� ------------------------*/

#define PWR_3V3_EN_PIN             GPIO_Pin_11        		 // LED1 ����      
#define PWR_3V3_EN_PORT            GPIOB                  // LED1 GPIO�˿�     
#define PWR_3V3_EN_CLK             RCC_APB2Periph_GPIOB	 // LED1 GPIO�˿�ʱ��




//---------------------������Ƴ����

#define RIGHT_M_OUT_EN_PIN             GPIO_Pin_8       		 // LED1 ����      
#define RIGHT_M_OUT_EN_PORT            GPIOE                  // LED1 GPIO�˿�     
#define RIGHT_M_OUT_EN_CLK             RCC_APB2Periph_GPIOE	 // LED1 GPIO�˿�ʱ��


#define RIGHT_M_OUT_P_PIN             GPIO_Pin_1       		 // LED1 ����      
#define RIGHT_M_OUT_P_PORT            GPIOE                  // LED1 GPIO�˿�     
#define RIGHT_M_OUT_P_CLK             RCC_APB2Periph_GPIOE	 // LED1 GPIO�˿�ʱ��


#define RIGHT_M_OUT_N_PIN             GPIO_Pin_9      		 // LED1 ����      
#define RIGHT_M_OUT_N_PORT            GPIOE                 // LED1 GPIO�˿�     
#define RIGHT_M_OUT_N_CLK             RCC_APB2Periph_GPIOE	 // LED1 GPIO�˿�ʱ��

//---------------------������Ƴ����ǰ����λ���

#define  RIGHT_M_OUT_KEY_PIN                GPIO_Pin_10        		     
#define  RIGHT_M_OUT_KEY_PORT               GPIOB                    

#define  RIGHT_M_RESET_KEY_PIN                GPIO_Pin_1        		    
#define  RIGHT_M_RESET_KEY_PORT               GPIOB                    
//---------------------���Ƴ����----------------------
#define LEFT_M_OUT_EN_PIN             GPIO_Pin_6       		    
#define LEFT_M_OUT_EN_PORT            GPIOE                     
#define LEFT_M_OUT_EN_CLK             RCC_APB2Periph_GPIOE	 


#define LEFT_M_OUT_P_PIN             GPIO_Pin_0       		   
#define LEFT_M_OUT_P_PORT            GPIOA                   
#define LEFT_M_OUT_P_CLK             RCC_APB2Periph_GPIOA	


#define LEFT_M_OUT_N_PIN             GPIO_Pin_1      		
#define LEFT_M_OUT_N_PORT            GPIOA                  
#define LEFT_M_OUT_N_CLK             RCC_APB2Periph_GPIOA
//---------------------���Ƴ����ǰ����λ���----------------------��
#define  LEFT_M_OUT_KEY_PIN                GPIO_Pin_15       		     
#define  LEFT_M_OUT_KEY_PORT               GPIOE                    

#define  LEFT_M_RESET_KEY_PIN                GPIO_Pin_7        		    
#define  LEFT_M_RESET_KEY_PORT               GPIOE      
//-------------------LED�ƴ������ؼ��--------------------------------
#define  LED_SW_PIN             GPIO_Pin_5       		 // led��������    
#define  LED_SW_PORT            GPIOE                  // 

//-------------------��ά�봥�����ؼ��--------------------------------
#define  ER_WEIMA_SW_PIN             GPIO_Pin_5       		 // ��ά�봥������    
#define  ER_WEIMA_SW_PORT            GPIOD                  // 
//---------------------���������������----------------------
#define LEFT_DOOR_OUT_EN_PIN             GPIO_Pin_4       		    
#define LEFT_DOOR_OUT_EN_PORT            GPIOA                     
#define LEFT_DOOR_OUT_EN_CLK             RCC_APB2Periph_GPIOA	 


#define LEFT_DOOR_OUT_P_PIN             GPIO_Pin_7       		   
#define LEFT_DOOR_OUT_P_PORT            GPIOA                   
#define LEFT_DOOR_OUT_P_CLK             RCC_APB2Periph_GPIOA	


#define LEFT_DOOR_OUT_N_PIN             GPIO_Pin_3      		
#define LEFT_DOOR_OUT_N_PORT            GPIOC                  
#define LEFT_DOOR_OUT_N_CLK             RCC_APB2Periph_GPIOC

//---------------------���������������----------------------
#define RIGHT_DOOR_OUT_EN_PIN             GPIO_Pin_0       		    
#define RIGHT_DOOR_OUT_EN_PORT            GPIOB                     
#define RIGHT_DOOR_OUT_EN_CLK             RCC_APB2Periph_GPIOB	 


#define RIGHT_DOOR_OUT_P_PIN             GPIO_Pin_4       		   
#define RIGHT_DOOR_OUT_P_PORT            GPIOC                   
#define RIGHT_DOOR_OUT_P_CLK             RCC_APB2Periph_GPIOC	


#define RIGHT_DOOR_OUT_N_PIN             GPIO_Pin_5      		
#define RIGHT_DOOR_OUT_N_PORT            GPIOC                  
#define RIGHT_DOOR_OUT_N_CLK             RCC_APB2Periph_GPIOC

//---------------------����������λ���----------------------
#define  RIGHT_DOOR_OPEN_KEY_PIN                GPIO_Pin_4       		     
#define  RIGHT_DOOR_OPEN_KEY_PORT               GPIOB     

#define  RIGHT_DOOR_CLOSE_KEY_PIN                GPIO_Pin_3       		     
#define  RIGHT_DOOR_CLOSE_KEY_PORT               GPIOB    

//---------------------����������λ���----------------------
#define  LEFT_DOOR_OPEN_KEY_PIN                GPIO_Pin_0       		     
#define  LEFT_DOOR_OPEN_KEY_PORT               GPIOE     

#define  LEFT_DOOR_CLOSE_KEY_PIN                GPIO_Pin_9      		     
#define  LEFT_DOOR_CLOSE_KEY_PORT               GPIOB    


//--------------------�����ȡ�߼��˿�----------------------
               
#define  LEFT_LOAD_CATCH_KEY_PIN                 GPIO_Pin_8      		     
#define  LEFT_LOAD_CATCH_KEY_PORT                GPIOB    


//-------------------�һ���ȡ�߼��˿�----------------------
               
#define  RIGHT_LOAD_CATCH_KEY_PIN                 GPIO_Pin_6      		     
#define  RIGHT_LOAD_CATCH_KEY_PORT                GPIOD    


//---------------------�����������ӿ�----------------------
#define  TOP_DOOR_DRV_OUT_PIN                 GPIO_Pin_3      		     
#define  TOP_DOOR_DRV_OUT_PORT               GPIOE  


//---------------------���������ؼ��----------------------
#define  TOP_DOOR_KEY_PIN                   GPIO_Pin_2      		     
#define  TOP_DOOR_KEY_PORT               GPIOE  


//---------------------���Ҳ�λ���------------------------

#define  LEFT_LEVEL_AD_PIN                    GPIO_Pin_2      		     
#define  LEFT_LEVEL_AD_PORT                   GPIOC  

#define  RIGHT_LEVEL_AD_PIN                   GPIO_Pin_5      		     
#define  RIGHT_LEVEL_AD_PORT                  GPIOA 

//---------------------��ص�ѹ���ܽ�---------------------
#define  BAT_AD_PIN                   GPIO_Pin_0      		     
#define  BAT_AD_PORT                  GPIOC 
//---------------------��е�ѹ���ܽ�---------------------
#define  LIGHT_AD_PIN                   GPIO_Pin_1      		     
#define  LIGHT_AD_PORT                  GPIOC 



//�����Դ����pin
#define HW_PIN             GPIO_Pin_14        		 // LED1 ����      
#define HW_PORT            GPIOE                  // LED1 GPIO�˿�     
#define HW_CLK             RCC_APB2Periph_GPIOE	 // LED1 GPIO�˿�ʱ��



/*----------------------LED ���------------------------*/

#define LED_OUT_PIN             GPIO_Pin_11        		 // LED1 ����      
#define LED_OUT_PORT            GPIOC                // LED1 GPIO�˿�   

/*----------------------�������俪�����------------------------*/

#define BT_SPK_PIN             GPIO_Pin_14        		 // LED1 ����      
#define BT_SPK_PORT            GPIOE               // LED1 GPIO�˿�  
/*---------------------- RF  SWITCH ------------------------*/
					
#define HW_OFF 	  GPIO_ResetBits(HW_PORT,HW_PIN);	
#define HW_ON 	  GPIO_SetBits(HW_PORT,HW_PIN);		

#define PWR_3V3_EN_OFF 	  GPIO_ResetBits(PWR_3V3_EN_PORT,PWR_3V3_EN_PIN);	// ����͵�ƽ������LED1	
#define PWR_3V3_EN_ON 	  GPIO_SetBits(PWR_3V3_EN_PORT,PWR_3V3_EN_PIN);		// ����ߵ�ƽ���ر�LED1	

/*----------------------�����Ƴ�����------------------------*/

#define LEFT_M_PUSH_EN_L 	  GPIO_ResetBits(LEFT_M_OUT_EN_PORT,LEFT_M_OUT_EN_PIN);	
#define LEFT_M_PUSH_EN_H 	  GPIO_SetBits(LEFT_M_OUT_EN_PORT,LEFT_M_OUT_EN_PIN);		

#define LEFT_M_PUSH_P_L 	  GPIO_ResetBits(LEFT_M_OUT_P_PORT,LEFT_M_OUT_P_PIN);	
#define LEFT_M_PUSH_P_H 	  GPIO_SetBits(LEFT_M_OUT_P_PORT,LEFT_M_OUT_P_PIN);			

#define LEFT_M_PUSH_N_L 	  GPIO_ResetBits(LEFT_M_OUT_N_PORT,LEFT_M_OUT_N_PIN);	
#define LEFT_M_PUSH_N_H 	  GPIO_SetBits(LEFT_M_OUT_N_PORT,LEFT_M_OUT_N_PIN);		


/*----------------------������Ƴ�����------------------------*/
#define RIGHT_M_PUSH_EN_L 	  GPIO_ResetBits(RIGHT_M_OUT_EN_PORT,RIGHT_M_OUT_EN_PIN);	
#define RIGHT_M_PUSH_EN_H 	  GPIO_SetBits(RIGHT_M_OUT_EN_PORT,RIGHT_M_OUT_EN_PIN);		

#define RIGHT_M_PUSH_P_L 	  GPIO_ResetBits(RIGHT_M_OUT_P_PORT,RIGHT_M_OUT_P_PIN);	
#define RIGHT_M_PUSH_P_H 	  GPIO_SetBits(RIGHT_M_OUT_P_PORT,RIGHT_M_OUT_P_PIN);			

#define RIGHT_M_PUSH_N_L 	  GPIO_ResetBits(RIGHT_M_OUT_N_PORT,RIGHT_M_OUT_N_PIN);	
#define RIGHT_M_PUSH_N_H 	  GPIO_SetBits(RIGHT_M_OUT_N_PORT,RIGHT_M_OUT_N_PIN);		


/*----------------------������������------------------------*/

#define LEFT_DOOR_M_EN_L 	  GPIO_ResetBits(LEFT_DOOR_OUT_EN_PORT,LEFT_DOOR_OUT_EN_PIN);	
#define LEFT_DOOR_M_EN_H 	  GPIO_SetBits(LEFT_DOOR_OUT_EN_PORT,LEFT_DOOR_OUT_EN_PIN);		

#define LEFT_DOOR_M_P_L 	  GPIO_ResetBits(LEFT_DOOR_OUT_P_PORT,LEFT_DOOR_OUT_P_PIN);	
#define LEFT_DOOR_M_P_H 	  GPIO_SetBits(LEFT_DOOR_OUT_P_PORT,LEFT_DOOR_OUT_P_PIN);			

#define LEFT_DOOR_M_N_L 	  GPIO_ResetBits(LEFT_DOOR_OUT_N_PORT,LEFT_DOOR_OUT_N_PIN);	
#define LEFT_DOOR_M_N_H 	  GPIO_SetBits(LEFT_DOOR_OUT_N_PORT,LEFT_DOOR_OUT_N_PIN);		


/*----------------------������������------------------------*/

#define RIGHT_DOOR_M_EN_L 	  GPIO_ResetBits(RIGHT_DOOR_OUT_EN_PORT,RIGHT_DOOR_OUT_EN_PIN);	
#define RIGHT_DOOR_M_EN_H 	  GPIO_SetBits(RIGHT_DOOR_OUT_EN_PORT,RIGHT_DOOR_OUT_EN_PIN);		

#define RIGHT_DOOR_M_P_L 	  GPIO_ResetBits(RIGHT_DOOR_OUT_P_PORT,RIGHT_DOOR_OUT_P_PIN);	
#define RIGHT_DOOR_M_P_H 	  GPIO_SetBits(RIGHT_DOOR_OUT_P_PORT,RIGHT_DOOR_OUT_P_PIN);			

#define RIGHT_DOOR_M_N_L 	  GPIO_ResetBits(RIGHT_DOOR_OUT_N_PORT,RIGHT_DOOR_OUT_N_PIN);	
#define RIGHT_DOOR_M_N_H 	  GPIO_SetBits(RIGHT_DOOR_OUT_N_PORT,RIGHT_DOOR_OUT_N_PIN);	

//------------------------���������-------------------------
#define TOP_LOCK_DRV_L 	  GPIO_ResetBits(TOP_DOOR_KEY_PORT,TOP_DOOR_KEY_PIN);	
#define TOP_LOCK_DRV_H 	  GPIO_SetBits(TOP_DOOR_KEY_PORT,TOP_DOOR_KEY_PIN);		

/*----------------------led�������------------------------*/

#define LED_OUT_L 	      GPIO_ResetBits(LED_OUT_PORT,LED_OUT_PIN);	// ����͵�ƽ������LED1	
#define LED_OUT_H 	      GPIO_SetBits(LED_OUT_PORT,LED_OUT_PIN);		// ����ߵ�ƽ���ر�LED1	


/*----------------------������������------------------------*/
#define BT_SPK_DRV_L 	      GPIO_ResetBits(BT_SPK_PORT,BT_SPK_PIN);	// ����͵�ƽ������LED1	
#define BT_SPK_DRV_H 	      GPIO_SetBits(BT_SPK_PORT,BT_SPK_PIN);		// ����ߵ�ƽ���ر�LED1	

/*---------------------- �������� ----------------------------*/

void LED_Init(void);	//LED��ʼ������


#endif //__LED_H

