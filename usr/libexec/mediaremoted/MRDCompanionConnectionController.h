//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, NSDate, NSError, NSString;

@interface MRDCompanionConnectionController : NSObject
{
    MRAVEndpoint *_companionEndpoint;	// 8 = 0x8
    _Bool _isDiscovering;	// 16 = 0x10
    _Bool _isConnecting;	// 17 = 0x11
    NSString *_lastConnectionAttemptReason;	// 24 = 0x18
    NSDate *_lastConnectionAttemptDate;	// 32 = 0x20
    NSError *_lastConnectionAttemptError;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000036d4
@property(retain, nonatomic) MRAVEndpoint *companionEndpoint; // @synthesize companionEndpoint=_companionEndpoint;
- (id)description;	// IMP=0x000000010000352c
- (void)_maybeAttemptToDiscoverAndConnectToCompanionWithReason:(id)arg1;	// IMP=0x0000000100002de8
- (_Bool)_shouldAttemptToDiscoverAndConnectToCompanion;	// IMP=0x0000000100002cb8
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100002ab8
- (void)_handleCompanionDeviceConnectedNotification:(id)arg1;	// IMP=0x0000000100002aa4
- (id)init;	// IMP=0x000000010000265c

@end

