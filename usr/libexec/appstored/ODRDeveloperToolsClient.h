//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODRDeveloperToolsProtocol-Protocol.h"

@class NSString;

@interface ODRDeveloperToolsClient : NSObject <ODRDeveloperToolsProtocol>
{
}

- (void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001803f4
- (void)getSimulatedBandwidthWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100180390
- (void)registerManifest:(id)arg1 forBundleID:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100180050
- (void)purgeTagWithName:(id)arg1 inBundleWithID:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010017faa8
- (void)purgeAllTagsInBundleWithID:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010017f650
- (void)tagStatusForBundle:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010017eff8
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010017eea4
- (id)interface;	// IMP=0x000000010017ee88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

