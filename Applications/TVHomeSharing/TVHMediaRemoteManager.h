//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVPMPPlaybackQueueManagerDelegate-Protocol.h"

@class NSString;

@interface TVHMediaRemoteManager : NSObject <TVPMPPlaybackQueueManagerDelegate>
{
}

+ (id)new;	// IMP=0x0000000100024d78
+ (id)sharedInstance;	// IMP=0x0000000100024d00
- (long long)manager:(id)arg1 editingStyleFlagsForMediaItem:(id)arg2;	// IMP=0x0000000100024f14
- (id)_init;	// IMP=0x0000000100024e3c
- (id)init;	// IMP=0x0000000100024db4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

