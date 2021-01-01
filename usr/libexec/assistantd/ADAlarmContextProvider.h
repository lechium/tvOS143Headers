//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFContextSnapshotTransforming-Protocol.h"
#import "SOAlarmsSubscriber-Protocol.h"

@class NSString;

@interface ADAlarmContextProvider : NSObject <SOAlarmsSubscriber, AFContextSnapshotTransforming>
{
}

- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001750a0
- (void)snapshotAvailable:(id)arg1 forEvent:(long long)arg2;	// IMP=0x0000000100174d10
- (id)init;	// IMP=0x0000000100174c54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
