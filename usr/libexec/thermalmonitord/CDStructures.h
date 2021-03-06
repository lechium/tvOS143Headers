//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct DetailedThermalBudget {
    unsigned char clientID;
    unsigned int powerValue;
    unsigned long long details;
};

struct DetailedThermalBudgets {
    struct DetailedThermalBudget budgets[24];
    int count;
};

struct ForcedThermalLevelStruct {
    float triggerTarget;
    float triggerHysteresis;
    _Bool isTriggered;
};

struct ForcedThermalPressureLevelStruct {
    float triggerTarget;
    float triggerHysteresis;
    _Bool isTriggered;
};

struct host_cpu_load_info {
    unsigned int cpu_ticks[4];
};

struct iir_filter_t {
    int time_constant;
    int last;
};

struct sensorTemperature4CC {
    unsigned int sensor4CC[15];
};

struct sensorTemperatureData {
    unsigned int sensorTemperature[15];
};

struct smcKeyWrites {
    unsigned char _field1;
    unsigned long long _field2[10];
};

