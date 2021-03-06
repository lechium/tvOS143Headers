//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDAppStoreServiceProtocol-Protocol.h"

@protocol OS_dispatch_queue;

@interface AppStoreService : NSObject <ASDAppStoreServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)defaultService;	// IMP=0x000000010012bd70
- (void).cxx_destruct;	// IMP=0x000000010012c1a0
- (id)_currentClient;	// IMP=0x000000010012c11c
- (void)launchAppStoreWithURL:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010012bddc
- (id)init;	// IMP=0x000000010012bce8

@end

