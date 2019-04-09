#ifndef __LED_H
#define __LED_H

#include "stm32f10x.h"
#define  uchar  unsigned char
#define  uint  unsigned int
/*---------------------- 3.3v电源使能 ------------------------*/

#define PWR_3V3_EN_PIN             GPIO_Pin_11        		 // LED1 引脚      
#define PWR_3V3_EN_PORT            GPIOB                  // LED1 GPIO端口     
#define PWR_3V3_EN_CLK             RCC_APB2Periph_GPIOB	 // LED1 GPIO端口时钟




//---------------------右马达推出电机

#define RIGHT_M_OUT_EN_PIN             GPIO_Pin_8       		 // LED1 引脚      
#define RIGHT_M_OUT_EN_PORT            GPIOE                  // LED1 GPIO端口     
#define RIGHT_M_OUT_EN_CLK             RCC_APB2Periph_GPIOE	 // LED1 GPIO端口时钟


#define RIGHT_M_OUT_P_PIN             GPIO_Pin_1       		 // LED1 引脚      
#define RIGHT_M_OUT_P_PORT            GPIOE                  // LED1 GPIO端口     
#define RIGHT_M_OUT_P_CLK             RCC_APB2Periph_GPIOE	 // LED1 GPIO端口时钟


#define RIGHT_M_OUT_N_PIN             GPIO_Pin_9      		 // LED1 引脚      
#define RIGHT_M_OUT_N_PORT            GPIOE                 // LED1 GPIO端口     
#define RIGHT_M_OUT_N_CLK             RCC_APB2Periph_GPIOE	 // LED1 GPIO端口时钟

//---------------------右马达推出电机前后限位检测

#define  RIGHT_M_OUT_KEY_PIN                GPIO_Pin_10        		     
#define  RIGHT_M_OUT_KEY_PORT               GPIOB                    

#define  RIGHT_M_RESET_KEY_PIN                GPIO_Pin_1        		    
#define  RIGHT_M_RESET_KEY_PORT               GPIOB                    
//---------------------左推出电机----------------------
#define LEFT_M_OUT_EN_PIN             GPIO_Pin_6       		    
#define LEFT_M_OUT_EN_PORT            GPIOE                     
#define LEFT_M_OUT_EN_CLK             RCC_APB2Periph_GPIOE	 


#define LEFT_M_OUT_P_PIN             GPIO_Pin_0       		   
#define LEFT_M_OUT_P_PORT            GPIOA                   
#define LEFT_M_OUT_P_CLK             RCC_APB2Periph_GPIOA	


#define LEFT_M_OUT_N_PIN             GPIO_Pin_1      		
#define LEFT_M_OUT_N_PORT            GPIOA                  
#define LEFT_M_OUT_N_CLK             RCC_APB2Periph_GPIOA
//---------------------左推出电机前后限位检测----------------------、
#define  LEFT_M_OUT_KEY_PIN                GPIO_Pin_15       		     
#define  LEFT_M_OUT_KEY_PORT               GPIOE                    

#define  LEFT_M_RESET_KEY_PIN                GPIO_Pin_7        		    
#define  LEFT_M_RESET_KEY_PORT               GPIOE      
//-------------------LED灯触摸开关检测--------------------------------
#define  LED_SW_PIN             GPIO_Pin_5       		 // led触摸开关    
#define  LED_SW_PORT            GPIOE                  // 

//-------------------二维码触摸开关检测--------------------------------
#define  ER_WEIMA_SW_PIN             GPIO_Pin_5       		 // 二维码触摸开关    
#define  ER_WEIMA_SW_PORT            GPIOD                  // 
//---------------------左门升降电机驱动----------------------
#define LEFT_DOOR_OUT_EN_PIN             GPIO_Pin_4       		    
#define LEFT_DOOR_OUT_EN_PORT            GPIOA                     
#define LEFT_DOOR_OUT_EN_CLK             RCC_APB2Periph_GPIOA	 


#define LEFT_DOOR_OUT_P_PIN             GPIO_Pin_7       		   
#define LEFT_DOOR_OUT_P_PORT            GPIOA                   
#define LEFT_DOOR_OUT_P_CLK             RCC_APB2Periph_GPIOA	


#define LEFT_DOOR_OUT_N_PIN             GPIO_Pin_3      		
#define LEFT_DOOR_OUT_N_PORT            GPIOC                  
#define LEFT_DOOR_OUT_N_CLK             RCC_APB2Periph_GPIOC

//---------------------右门升降电机驱动----------------------
#define RIGHT_DOOR_OUT_EN_PIN             GPIO_Pin_0       		    
#define RIGHT_DOOR_OUT_EN_PORT            GPIOB                     
#define RIGHT_DOOR_OUT_EN_CLK             RCC_APB2Periph_GPIOB	 


#define RIGHT_DOOR_OUT_P_PIN             GPIO_Pin_4       		   
#define RIGHT_DOOR_OUT_P_PORT            GPIOC                   
#define RIGHT_DOOR_OUT_P_CLK             RCC_APB2Periph_GPIOC	


#define RIGHT_DOOR_OUT_N_PIN             GPIO_Pin_5      		
#define RIGHT_DOOR_OUT_N_PORT            GPIOC                  
#define RIGHT_DOOR_OUT_N_CLK             RCC_APB2Periph_GPIOC

//---------------------右门升降限位检测----------------------
#define  RIGHT_DOOR_OPEN_KEY_PIN                GPIO_Pin_4       		     
#define  RIGHT_DOOR_OPEN_KEY_PORT               GPIOB     

#define  RIGHT_DOOR_CLOSE_KEY_PIN                GPIO_Pin_3       		     
#define  RIGHT_DOOR_CLOSE_KEY_PORT               GPIOB    

//---------------------左门升降限位检测----------------------
#define  LEFT_DOOR_OPEN_KEY_PIN                GPIO_Pin_0       		     
#define  LEFT_DOOR_OPEN_KEY_PORT               GPIOE     

#define  LEFT_DOOR_CLOSE_KEY_PIN                GPIO_Pin_9      		     
#define  LEFT_DOOR_CLOSE_KEY_PORT               GPIOB    


//--------------------左货物取走检测端口----------------------
               
#define  LEFT_LOAD_CATCH_KEY_PIN                 GPIO_Pin_8      		     
#define  LEFT_LOAD_CATCH_KEY_PORT                GPIOB    


//-------------------右货物取走检测端口----------------------
               
#define  RIGHT_LOAD_CATCH_KEY_PIN                 GPIO_Pin_6      		     
#define  RIGHT_LOAD_CATCH_KEY_PORT                GPIOD    


//---------------------顶部锁驱动接口----------------------
#define  TOP_DOOR_DRV_OUT_PIN                 GPIO_Pin_3      		     
#define  TOP_DOOR_DRV_OUT_PORT               GPIOE  


//---------------------顶部锁开关检测----------------------
#define  TOP_DOOR_KEY_PIN                   GPIO_Pin_2      		     
#define  TOP_DOOR_KEY_PORT               GPIOE  


//---------------------左右仓位检测------------------------

#define  LEFT_LEVEL_AD_PIN                    GPIO_Pin_2      		     
#define  LEFT_LEVEL_AD_PORT                   GPIOC  

#define  RIGHT_LEVEL_AD_PIN                   GPIO_Pin_5      		     
#define  RIGHT_LEVEL_AD_PORT                  GPIOA 

//---------------------电池电压检测管教---------------------
#define  BAT_AD_PIN                   GPIO_Pin_0      		     
#define  BAT_AD_PORT                  GPIOC 
//---------------------光感电压检测管教---------------------
#define  LIGHT_AD_PIN                   GPIO_Pin_1      		     
#define  LIGHT_AD_PORT                  GPIOC 



//红外电源控制pin
#define HW_PIN             GPIO_Pin_14        		 // LED1 引脚      
#define HW_PORT            GPIOE                  // LED1 GPIO端口     
#define HW_CLK             RCC_APB2Periph_GPIOE	 // LED1 GPIO端口时钟



/*----------------------LED 输出------------------------*/

#define LED_OUT_PIN             GPIO_Pin_11        		 // LED1 引脚      
#define LED_OUT_PORT            GPIOC                // LED1 GPIO端口   

/*----------------------蓝牙音箱开关输出------------------------*/

#define BT_SPK_PIN             GPIO_Pin_14        		 // LED1 引脚      
#define BT_SPK_PORT            GPIOE               // LED1 GPIO端口  
/*---------------------- RF  SWITCH ------------------------*/
					
#define HW_OFF 	  GPIO_ResetBits(HW_PORT,HW_PIN);	
#define HW_ON 	  GPIO_SetBits(HW_PORT,HW_PIN);		

#define PWR_3V3_EN_OFF 	  GPIO_ResetBits(PWR_3V3_EN_PORT,PWR_3V3_EN_PIN);	// 输出低电平，点亮LED1	
#define PWR_3V3_EN_ON 	  GPIO_SetBits(PWR_3V3_EN_PORT,PWR_3V3_EN_PIN);		// 输出高电平，关闭LED1	

/*----------------------左马推出驱动------------------------*/

#define LEFT_M_PUSH_EN_L 	  GPIO_ResetBits(LEFT_M_OUT_EN_PORT,LEFT_M_OUT_EN_PIN);	
#define LEFT_M_PUSH_EN_H 	  GPIO_SetBits(LEFT_M_OUT_EN_PORT,LEFT_M_OUT_EN_PIN);		

#define LEFT_M_PUSH_P_L 	  GPIO_ResetBits(LEFT_M_OUT_P_PORT,LEFT_M_OUT_P_PIN);	
#define LEFT_M_PUSH_P_H 	  GPIO_SetBits(LEFT_M_OUT_P_PORT,LEFT_M_OUT_P_PIN);			

#define LEFT_M_PUSH_N_L 	  GPIO_ResetBits(LEFT_M_OUT_N_PORT,LEFT_M_OUT_N_PIN);	
#define LEFT_M_PUSH_N_H 	  GPIO_SetBits(LEFT_M_OUT_N_PORT,LEFT_M_OUT_N_PIN);		


/*----------------------右马达推出驱动------------------------*/
#define RIGHT_M_PUSH_EN_L 	  GPIO_ResetBits(RIGHT_M_OUT_EN_PORT,RIGHT_M_OUT_EN_PIN);	
#define RIGHT_M_PUSH_EN_H 	  GPIO_SetBits(RIGHT_M_OUT_EN_PORT,RIGHT_M_OUT_EN_PIN);		

#define RIGHT_M_PUSH_P_L 	  GPIO_ResetBits(RIGHT_M_OUT_P_PORT,RIGHT_M_OUT_P_PIN);	
#define RIGHT_M_PUSH_P_H 	  GPIO_SetBits(RIGHT_M_OUT_P_PORT,RIGHT_M_OUT_P_PIN);			

#define RIGHT_M_PUSH_N_L 	  GPIO_ResetBits(RIGHT_M_OUT_N_PORT,RIGHT_M_OUT_N_PIN);	
#define RIGHT_M_PUSH_N_H 	  GPIO_SetBits(RIGHT_M_OUT_N_PORT,RIGHT_M_OUT_N_PIN);		


/*----------------------左门升降驱动------------------------*/

#define LEFT_DOOR_M_EN_L 	  GPIO_ResetBits(LEFT_DOOR_OUT_EN_PORT,LEFT_DOOR_OUT_EN_PIN);	
#define LEFT_DOOR_M_EN_H 	  GPIO_SetBits(LEFT_DOOR_OUT_EN_PORT,LEFT_DOOR_OUT_EN_PIN);		

#define LEFT_DOOR_M_P_L 	  GPIO_ResetBits(LEFT_DOOR_OUT_P_PORT,LEFT_DOOR_OUT_P_PIN);	
#define LEFT_DOOR_M_P_H 	  GPIO_SetBits(LEFT_DOOR_OUT_P_PORT,LEFT_DOOR_OUT_P_PIN);			

#define LEFT_DOOR_M_N_L 	  GPIO_ResetBits(LEFT_DOOR_OUT_N_PORT,LEFT_DOOR_OUT_N_PIN);	
#define LEFT_DOOR_M_N_H 	  GPIO_SetBits(LEFT_DOOR_OUT_N_PORT,LEFT_DOOR_OUT_N_PIN);		


/*----------------------右门升降驱动------------------------*/

#define RIGHT_DOOR_M_EN_L 	  GPIO_ResetBits(RIGHT_DOOR_OUT_EN_PORT,RIGHT_DOOR_OUT_EN_PIN);	
#define RIGHT_DOOR_M_EN_H 	  GPIO_SetBits(RIGHT_DOOR_OUT_EN_PORT,RIGHT_DOOR_OUT_EN_PIN);		

#define RIGHT_DOOR_M_P_L 	  GPIO_ResetBits(RIGHT_DOOR_OUT_P_PORT,RIGHT_DOOR_OUT_P_PIN);	
#define RIGHT_DOOR_M_P_H 	  GPIO_SetBits(RIGHT_DOOR_OUT_P_PORT,RIGHT_DOOR_OUT_P_PIN);			

#define RIGHT_DOOR_M_N_L 	  GPIO_ResetBits(RIGHT_DOOR_OUT_N_PORT,RIGHT_DOOR_OUT_N_PIN);	
#define RIGHT_DOOR_M_N_H 	  GPIO_SetBits(RIGHT_DOOR_OUT_N_PORT,RIGHT_DOOR_OUT_N_PIN);	

//------------------------电磁锁驱动-------------------------
#define TOP_LOCK_DRV_L 	  GPIO_ResetBits(TOP_DOOR_KEY_PORT,TOP_DOOR_KEY_PIN);	
#define TOP_LOCK_DRV_H 	  GPIO_SetBits(TOP_DOOR_KEY_PORT,TOP_DOOR_KEY_PIN);		

/*----------------------led输出驱动------------------------*/

#define LED_OUT_L 	      GPIO_ResetBits(LED_OUT_PORT,LED_OUT_PIN);	// 输出低电平，点亮LED1	
#define LED_OUT_H 	      GPIO_SetBits(LED_OUT_PORT,LED_OUT_PIN);		// 输出高电平，关闭LED1	


/*----------------------蓝牙音箱驱动------------------------*/
#define BT_SPK_DRV_L 	      GPIO_ResetBits(BT_SPK_PORT,BT_SPK_PIN);	// 输出低电平，点亮LED1	
#define BT_SPK_DRV_H 	      GPIO_SetBits(BT_SPK_PORT,BT_SPK_PIN);		// 输出高电平，关闭LED1	

/*---------------------- 函数声明 ----------------------------*/

void LED_Init(void);	//LED初始化函数


#endif //__LED_H

