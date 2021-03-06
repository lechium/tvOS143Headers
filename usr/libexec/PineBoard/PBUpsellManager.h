//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVSBackgroundTask;

@interface PBUpsellManager : NSObject
{
    _Bool _retryOdeonUpsell;	// 8 = 0x8
    TVSBackgroundTask *_odeonAvailableCheckTask;	// 16 = 0x10
    double _checkTimeInterval;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100173d1c
- (void).cxx_destruct;	// IMP=0x0000000100174af4
@property(nonatomic) _Bool retryOdeonUpsell; // @synthesize retryOdeonUpsell=_retryOdeonUpsell;
@property(nonatomic) double checkTimeInterval; // @synthesize checkTimeInterval=_checkTimeInterval;
@property(retain, nonatomic) TVSBackgroundTask *odeonAvailableCheckTask; // @synthesize odeonAvailableCheckTask=_odeonAvailableCheckTask;
- (void)_presentOdeonUpsellIfNeeded;	// IMP=0x000000010017428c
- (void)_scheduleOdeonDestinationCheckTaskWithInterval:(double)arg1;	// IMP=0x0000000100173f90
- (double)_checkTimeInterval;	// IMP=0x0000000100173f28
- (_Bool)_isHeadBoardAppFocused;	// IMP=0x0000000100173e90
- (void)noteGoodTimeToShowUpsell;	// IMP=0x0000000100173e40
- (void)startUpsellMonitoringIfNeeded;	// IMP=0x0000000100173dec

@end

