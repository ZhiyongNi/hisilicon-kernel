#ifndef __HI_IRQS_H__
#define __HI_IRQS_H__

#define HISI_GIC_IRQ_START      (32)
#define IRQ_LOCALTIMER          (29)
#define INTNR_COMMTX0           (HISI_GIC_IRQ_START + 0)
#define INTNR_COMMRX0           (HISI_GIC_IRQ_START + 2)
#define INTNR_WATCHDOG          (HISI_GIC_IRQ_START + 4)
#define INTNR_TIMER_0_1         (HISI_GIC_IRQ_START + 24)
#define INTNR_TIMER_2_3         (HISI_GIC_IRQ_START + 25)
#define INTNR_TIMER_3           (HISI_GIC_IRQ_START + 58)  /* for Hi3716Mv410 */
#define INTNR_TIMER_4_5         (HISI_GIC_IRQ_START + 26)
#define INTNR_TIMER_6_7         (HISI_GIC_IRQ_START + 27)
#define INTNR_TIMER_8_9         (HISI_GIC_IRQ_START + 28)  //Only for s5 platform
#define INTNR_TIMER_A_B         (HISI_GIC_IRQ_START + 52)  //Only for s5 platform
#define INTNR_TIMER_C_D         (HISI_GIC_IRQ_START + 53)  //Only for s5 platform
#define INTNR_GPIO_0            (HISI_GIC_IRQ_START + 9)
#define INTNR_GPIO_1            (HISI_GIC_IRQ_START + 10)
#define INTNR_GPIO_2            (HISI_GIC_IRQ_START + 11)
#define INTNR_GPIO_3            (HISI_GIC_IRQ_START + 12)
#define INTNR_GPIO_4            (HISI_GIC_IRQ_START + 13)
#define INTNR_GPIO_5            (HISI_GIC_IRQ_START + 14)
#define INTNR_GPIO_6            (HISI_GIC_IRQ_START + 15)
#define INTNR_GPIO_7            (HISI_GIC_IRQ_START + 16)
#define INTNR_GPIO_8            (HISI_GIC_IRQ_START + 17)
#define INTNR_GPIO_9            (HISI_GIC_IRQ_START + 18)
#define INTNR_GPIO_10           (HISI_GIC_IRQ_START + 19)
#define INTNR_GPIO_11           (HISI_GIC_IRQ_START + 20)
#define INTNR_GPIO_12           (HISI_GIC_IRQ_START + 21)
#define INTNR_I2C0              (HISI_GIC_IRQ_START + 22)
#define INTNR_I2C1              (HISI_GIC_IRQ_START + 23)
#define INTNR_I2C2              (HISI_GIC_IRQ_START + 24)
#define INTNR_I2C3              (HISI_GIC_IRQ_START + 25)
#define INTNR_UART0             (HISI_GIC_IRQ_START + 49)
#define INTNR_UART1             (HISI_GIC_IRQ_START + 50)
#define INTNR_UART2             (HISI_GIC_IRQ_START + 51)
#define INTNR_UART3             (HISI_GIC_IRQ_START + 52)
#define INTNR_UART4             (HISI_GIC_IRQ_START + 53)

#define INTNR_ETH               (HISI_GIC_IRQ_START + 51)
#define INTNR_L2CACHE_CHK0_INT  (HISI_GIC_IRQ_START + 72)
#define INTNR_L2CACHE_CHK1_INT  (HISI_GIC_IRQ_START + 73)
#define INTNR_L2CACHE_INT_COMB  (HISI_GIC_IRQ_START + 74)
#define INTNR_A9_PMU_INT0       (HISI_GIC_IRQ_START + 8)
#define INTNR_A9_PMU_INT1       (HISI_GIC_IRQ_START + 9)
#define INTNR_A9_PMU_INT2       (HISI_GIC_IRQ_START + 10)  //Only for s5 platform
#define INTNR_A9_PMU_INT3       (HISI_GIC_IRQ_START + 11)  //Only for s5 platform
#define NR_IRQS                 (HISI_GIC_IRQ_START + 160)

#define MAX_GIC_NR              1

#endif
