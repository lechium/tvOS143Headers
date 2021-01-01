//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKDispatchGroup.h"

@class GKClientProxy, GKResourceManager, NSManagedObjectContext;

@interface GKCacheTransactionGroup : GKDispatchGroup
{
    NSManagedObjectContext *_context;	// 64 = 0x40
    GKClientProxy *_client;	// 72 = 0x48
    GKResourceManager *_resourceManager;	// 80 = 0x50
}

+ (id)transactionGroupWithContext:(id)arg1 resourceManager:(id)arg2 client:(id)arg3;	// IMP=0x00000001000fe5e8
+ (id)dispatchGroupWithName:(id)arg1;	// IMP=0x00000001000fe4bc
+ (id)dispatchGroup;	// IMP=0x00000001000fe390
- (void).cxx_destruct;	// IMP=0x00000001000ffc54
@property(nonatomic) __weak GKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) GKClientProxy *client; // @synthesize client=_client;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)performOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ffa5c
- (void)readResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ff8e0
- (void)writeResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ff874
- (void)performAndJoinForResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ff5b8
- (void)performOnManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ff254
- (void)dealloc;	// IMP=0x00000001000feebc
- (id)initWithName:(id)arg1 context:(id)arg2 resourceManager:(id)arg3 client:(id)arg4;	// IMP=0x00000001000feb7c
- (id)initWithName:(id)arg1;	// IMP=0x00000001000fea44
- (id)transactionGroup;	// IMP=0x00000001000fe8ec

@end
