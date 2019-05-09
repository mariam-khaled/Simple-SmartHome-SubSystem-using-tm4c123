#include "PWM.h"

void PWM_Pin_Init(uint8_t port_index, PWM_PIN pwm_pin, PWM_DEVIDER pwm_devider, PWM_OUTPUT_STATE pwm_output_state, uint16_t load_value){
    
    // Initialize port
    Port_Init(port_index);

    switch (pwm_pin)
    {
        // ? PORT A
    case (PWM_PA6):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTA_AFSEL_R, PA6);
        SET_MASK(GPIO_PORTA_PCTL_R, GPIO_PA6_PCTL_PWM_MODULE1_GEN1_A_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G1_A, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PA7):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTA_AFSEL_R, PA7);
        SET_MASK(GPIO_PORTA_PCTL_R, GPIO_PA7_PCTL_PWM_MODULE1_GEN1_B_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M1, PWM_G1_B, pwm_devider, pwm_output_state, load_value);
    break;

        // ? PORT B
    case (PWM_PB4):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTB_AFSEL_R, PB4);
        SET_MASK(GPIO_PORTB_PCTL_R, GPIO_PB4_PCTL_PWM_MODULE0_GEN1_A_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G1_A, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PB5):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTB_AFSEL_R, PB5);
        SET_MASK(GPIO_PORTB_PCTL_R, GPIO_PB5_PCTL_PWM_MODULE0_GEN1_B_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G1_B, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PB6):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTB_AFSEL_R, PB6);
        SET_MASK(GPIO_PORTB_PCTL_R, GPIO_PB6_PCTL_PWM_MODULE0_GEN0_A_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G0_A, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PB7):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTB_AFSEL_R, PB7);
        SET_MASK(GPIO_PORTB_PCTL_R, GPIO_PB7_PCTL_PWM_MODULE0_GEN0_B_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G0_B, pwm_devider, pwm_output_state, load_value);
    break;

        // ? PORT C
    case (PWM_PC4):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTC_AFSEL_R, PC4);
        SET_MASK(GPIO_PORTC_PCTL_R, GPIO_PC4_PCTL_PWM_MODULE0_GEN3_A_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G3_A, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PC5):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTC_AFSEL_R, PC5);
        SET_MASK(GPIO_PORTC_PCTL_R, GPIO_PC5_PCTL_PWM_MODULE0_GEN3_B_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G3_B, pwm_devider, pwm_output_state, load_value);
    break;

        // ? PORT D
    case (PWM_PD0_M0):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTD_AFSEL_R, PD0);
        SET_MASK(GPIO_PORTD_PCTL_R, GPIO_PD0_PCTL_PWM_MODULE0_GEN3_A_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G3_A, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PD0_M1):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTD_AFSEL_R, PD0);
        SET_MASK(GPIO_PORTD_PCTL_R, GPIO_PD0_PCTL_PWM_MODULE1_GEN0_A_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M1, PWM_G0_A, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PD1_M0):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTD_AFSEL_R, PD1);
        SET_MASK(GPIO_PORTD_PCTL_R, GPIO_PD1_PCTL_PWM_MODULE0_GEN3_B_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G3_B, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PD1_M1):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTD_AFSEL_R, PD1);
        SET_MASK(GPIO_PORTD_PCTL_R, GPIO_PD1_PCTL_PWM_MODULE1_GEN0_B_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M1, PWM_G0_B, pwm_devider, pwm_output_state, load_value);
    break;

        // ? PORT E
    case (PWM_PE4_M0):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTE_AFSEL_R, PE4);
        SET_MASK(GPIO_PORTE_PCTL_R, GPIO_PE4_PCTL_PWM_MODULE0_GEN2_A_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G2_A, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PE4_M1):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTE_AFSEL_R, PE4);
        SET_MASK(GPIO_PORTE_PCTL_R, GPIO_PE4_PCTL_PWM_MODULE1_GEN1_A_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M1, PWM_G1_A, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PE5_M0):
        // SET Alternative function for this pin to be PWM
        SET_MASK(GPIO_PORTE_AFSEL_R, PE5);
        SET_MASK(GPIO_PORTE_PCTL_R, GPIO_PE5_PCTL_PWM_MODULE0_GEN2_B_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M0, PWM_G2_B, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PE5_M1):
        SET_MASK(GPIO_PORTE_AFSEL_R, PE5);
        SET_MASK(GPIO_PORTE_PCTL_R, GPIO_PE5_PCTL_PWM_MODULE1_GEN1_B_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M1, PWM_G1_B, pwm_devider, pwm_output_state, load_value);
    break;

        // ? PORT F
    case (PWM_PF0):
        SET_MASK(GPIO_PORTF_AFSEL_R, PF0);
        SET_MASK(GPIO_PORTF_PCTL_R, GPIO_PF0_PCTL_PWM_MODULE1_GEN2_A_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M1, PWM_G2_A, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PF1):
        SET_MASK(GPIO_PORTF_AFSEL_R, PF1);
        SET_MASK(GPIO_PORTF_PCTL_R, GPIO_PF1_PCTL_PWM_MODULE1_GEN2_B_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M1, PWM_G2_B, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PF2):
        SET_MASK(GPIO_PORTF_AFSEL_R, PF2);
        SET_MASK(GPIO_PORTF_PCTL_R, GPIO_PF2_PCTL_PWM_MODULE1_GEN3_A_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M1, PWM_G3_A, pwm_devider, pwm_output_state, load_value);
    break;
    case (PWM_PF3):
        SET_MASK(GPIO_PORTF_AFSEL_R, PF3);
        SET_MASK(GPIO_PORTF_PCTL_R, GPIO_PF3_PCTL_PWM_MODULE1_GEN3_B_M);

        // Init PWM generator for this pin
        PWM_Gen_Init(PWM_M1, PWM_G3_B, pwm_devider, pwm_output_state, load_value);
    break;
    
    default:
    break;
    }
}