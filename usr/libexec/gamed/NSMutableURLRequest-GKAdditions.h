//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (GKAdditions)
+ (int)hashForPlayerID:(id)arg1;	// IMP=0x000000010009add8
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;	// IMP=0x000000010009ab90
- (void)setSAPversion:(id)arg1;	// IMP=0x000000010009b824
- (void)setSAPSignature:(id)arg1;	// IMP=0x000000010009b7b0
- (void)setLocale:(id)arg1;	// IMP=0x000000010009b690
- (void)setInternal:(_Bool)arg1;	// IMP=0x000000010009b604
- (void)setPushToken:(id)arg1;	// IMP=0x000000010009b4d4
- (void)setBuildVersion:(id)arg1;	// IMP=0x000000010009b448
- (void)setProtocolVersion:(id)arg1;	// IMP=0x000000010009b3bc
- (void)setProcessName:(id)arg1;	// IMP=0x000000010009b330
- (void)setDeviceUniqueID:(id)arg1;	// IMP=0x000000010009b2a4
- (void)setRestrictions:(id)arg1;	// IMP=0x000000010009b1dc
- (void)setStoreMode:(id)arg1;	// IMP=0x000000010009b148
- (void)setGameDescriptor:(id)arg1;	// IMP=0x000000010009af1c
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;	// IMP=0x000000010009ae28
@end

