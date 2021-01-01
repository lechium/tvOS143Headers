//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IAPApplicationStateMonitor, NSString;

@interface IAPEAUnregisteredClient : NSObject
{
    int _processId;	// 8 = 0x8
    NSString *_bundleId;	// 16 = 0x10
    struct SBSProcessAssertion *_processAssertion;	// 24 = 0x18
    long long _processAssertionStartTime;	// 32 = 0x20
    IAPApplicationStateMonitor *_appStateMonitor;	// 40 = 0x28
}

@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (int)_getProcessIdForUnregisteredClient;	// IMP=0x00000001000ba114
- (void)releaseProcessAssertion;	// IMP=0x00000001000ba0c8
- (void)takeProcessAssertion:(id)arg1;	// IMP=0x00000001000b9f24
- (void)dealloc;	// IMP=0x00000001000b9ea8
- (id)initWithBundleId:(id)arg1;	// IMP=0x00000001000b9de8

@end

