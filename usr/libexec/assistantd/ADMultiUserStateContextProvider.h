//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFContextSnapshotTransforming-Protocol.h"

@class NSString;

@interface ADMultiUserStateContextProvider : NSObject <AFContextSnapshotTransforming>
{
}

- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001002a65fc
- (void)handleMultiUserDidReceiveScoresNotification:(id)arg1;	// IMP=0x00000001002a61d4
- (id)init;	// IMP=0x00000001002a613c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

