/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TRAFFIC_LIGHT_H
#define __TRAFFIC_LIGHT_H

/* Includes ------------------------------------*/


/* Exported Functions ------------------------*/
void Init_Configuration(void);
void Segment_led(uint32_t a);
void translate(uint8_t a);
uint32_t circle(uint32_t a,uint32_t b);
void TrafficLight_Check(void);

#endif /* __TRAFFIC_LIGHT_H */