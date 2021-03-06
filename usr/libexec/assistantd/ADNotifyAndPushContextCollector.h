//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADNotifyAndPushContextCollector : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_completionsByPID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010024b47c
- (void)_invokeAllCompletionsWithError;	// IMP=0x000000010024b2c0
- (void)_invokeCompletionWithContext:(id)arg1 forPID:(int)arg2;	// IMP=0x000000010024b1cc
- (void)_addCompletion:(CDUnknownBlockType)arg1 forPID:(int)arg2;	// IMP=0x000000010024b150
- (_Bool)_hasCompletionForPID:(int)arg1;	// IMP=0x000000010024b0e0
- (void)_getContextForAppInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010024aec0
- (void)_setContext:(id)arg1 forPID:(int)arg2;	// IMP=0x000000010024ae14
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010024ae0c
- (void)getContextForAppInfos:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010024a8b0
- (id)init;	// IMP=0x000000010024a830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

