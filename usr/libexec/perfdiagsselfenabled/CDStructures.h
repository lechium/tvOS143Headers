//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Named Structures

struct HTPrefInit {
    struct __CFString *_field1;
    void *_field2;
    union HTPrefDefaultVal _field3;
    union HTPrefDefaultVal _field4;
    unsigned long long _field5;
    SEL _field6;
};

struct __CFString;

#pragma mark Named Unions

union HTPrefDefaultVal {
    _Bool _field1;
    int _field2;
    unsigned int _field3;
    unsigned long long _field4;
    double _field5;
    struct __CFString *_field6;
};

