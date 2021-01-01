//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface SOSIntervalEvent : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
    NSString *_dateDescription;	// 16 = 0x10
    double _earliestDate;	// 24 = 0x18
    double _latestDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001bf25c
@property(nonatomic) double latestDate; // @synthesize latestDate=_latestDate;
@property(nonatomic) double earliestDate; // @synthesize earliestDate=_earliestDate;
@property(retain, nonatomic) NSString *dateDescription; // @synthesize dateDescription=_dateDescription;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (id)initWithDefaults:(id)arg1 dateDescription:(id)arg2 earliest:(double)arg3 latest:(double)arg4;	// IMP=0x00000001001bf124
- (void)schedule;	// IMP=0x00000001001bf0d8
- (void)followup;	// IMP=0x00000001001bf090
- (_Bool)checkDate;	// IMP=0x00000001001bf02c
- (id)getDate;	// IMP=0x00000001001bf018

@end

