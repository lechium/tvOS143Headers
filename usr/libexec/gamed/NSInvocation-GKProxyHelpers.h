//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)
+ (id)_gkInvocationWithBlock:(id)arg1;	// IMP=0x000000010012f1e8
- (void)_gkInvokeOnceWithTarget:(id)arg1;	// IMP=0x000000010012f0f4
- (void)_gkInvokeOnce;	// IMP=0x000000010012f0c0
- (void)_gkClearTarget;	// IMP=0x000000010012f080
- (void)_gkClearArgumentAtIndex:(unsigned long long)arg1;	// IMP=0x000000010012f01c
- (void)__gkPrepareForFakeCallbackWithNoData:(_Bool)arg1 orError:(id)arg2;	// IMP=0x000000010012ed9c
- (void)_gkPrepareForCallWithError:(id)arg1;	// IMP=0x000000010012ecb4
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;	// IMP=0x000000010012ebfc
- (id)_gkReplyHandlerInvocation;	// IMP=0x000000010012eb58
- (void)_gkClearCopiedArguments;	// IMP=0x000000010012e99c
- (void)_gkCopyArguments;	// IMP=0x000000010012e724
- (void)_gkPrintBlockSignature;	// IMP=0x000000010012e62c
- (_Bool)_gkHasReplyBlock;	// IMP=0x000000010012f254
@end

