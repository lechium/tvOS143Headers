//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LibraryCatalog-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, XPCNotificationCenter;
@protocol LibraryCatalogObserver, OS_dispatch_queue;

@interface ProgressCache : NSObject <LibraryCatalog>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    XPCNotificationCenter *_notificationCenter;	// 16 = 0x10
    id <LibraryCatalogObserver> _observer;	// 24 = 0x18
    NSMutableDictionary *_placeholders;	// 32 = 0x20
    NSMutableDictionary *_progressStore;	// 40 = 0x28
    NSMutableSet *_dirtyProgress;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000100086774
- (void).cxx_destruct;	// IMP=0x0000000100088994
@property __weak id <LibraryCatalogObserver> observer; // @synthesize observer=_observer;
- (void)_postProgress:(id)arg1;	// IMP=0x0000000100088960
- (void)_flushProgress;	// IMP=0x00000001000887bc
- (void)_dirtyProgress:(id)arg1;	// IMP=0x00000001000886f0
- (id)_beginProgress:(id)arg1 withReason:(id)arg2;	// IMP=0x000000010008824c
- (void)executeQuery:(id)arg1 excludingBundleIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100087e20
- (void)setFractionCompleted:(double)arg1 forBundleID:(id)arg2 storeItemID:(id)arg3;	// IMP=0x0000000100087b1c
- (void)removeRemotePlaceholderForBundleID:(id)arg1;	// IMP=0x0000000100087a78
- (id)remoteSystemPlaceholders;	// IMP=0x00000001000877fc
- (void)preFinishProgressForBundleID:(id)arg1 withReason:(id)arg2;	// IMP=0x0000000100087324
- (void)finishProgressForBundleID:(id)arg1 withReason:(id)arg2;	// IMP=0x0000000100086ff4
- (id)existingProgressForBundleID:(id)arg1;	// IMP=0x0000000100086e6c
- (id)existingAppForBundleID:(id)arg1;	// IMP=0x0000000100086ccc
- (void)cancelProgressForBundleID:(id)arg1;	// IMP=0x0000000100086a18
- (void)beginProgress:(id)arg1 withReason:(id)arg2;	// IMP=0x000000010008692c
- (id)_initWithNotificationCenter:(id)arg1;	// IMP=0x0000000100086840
- (id)init;	// IMP=0x00000001000867e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

