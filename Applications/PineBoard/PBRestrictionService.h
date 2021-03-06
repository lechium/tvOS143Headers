//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSRestrictionServiceInterface-Protocol.h"

@class NSString, PBSystemServiceConnection;

@interface PBRestrictionService : NSObject <PBSRestrictionServiceInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000e5ccc
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (id)_getDefaultServiceRequestWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e5ba0
- (void)validatePIN:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e584c
- (void)authorizeRestrictionsWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e5784
- (void)restrictionsEnabledWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e56bc
- (void)cancelRestrictionAuthorization:(id)arg1;	// IMP=0x00000001000e5628
- (void)validateRestrictionForSetting:(unsigned long long)arg1 allowInteraction:(_Bool)arg2 requestToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e54c8
- (void)validateRestrictionForContentType:(unsigned long long)arg1 withRating:(id)arg2 allowInteraction:(_Bool)arg3 requestToken:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000e531c
- (void)invalidate;	// IMP=0x00000001000e5308
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00000001000e5220
- (id)init;	// IMP=0x00000001000e51e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

