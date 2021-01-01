//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol IDSDeviceCertificationRepairDelegate;

@interface IDSDeviceCertificationRepair : NSObject
{
    id <IDSDeviceCertificationRepairDelegate> _delegate;	// 8 = 0x8
    NSTimer *_repairTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010060ebc0
@property(retain, nonatomic) NSTimer *repairTimer; // @synthesize repairTimer=_repairTimer;
@property(nonatomic) __weak id <IDSDeviceCertificationRepairDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_missingDeviceIdentity:(_Bool *)arg1;	// IMP=0x000000010060dce4
- (void)recertifyDeviceIfNeeded;	// IMP=0x000000010060d420
- (void)_repairTimerHit:(id)arg1;	// IMP=0x000000010060d3bc
- (id)init;	// IMP=0x000000010060d2a8

@end

