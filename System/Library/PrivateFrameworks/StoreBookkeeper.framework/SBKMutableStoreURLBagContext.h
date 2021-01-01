/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreBookkeeper/SBKStoreURLBagContext.h>

@class NSString, NSURL;

@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy) NSString * domain; 
@property (retain) NSURL * syncRequestURL; 
@property (retain) NSURL * pushKeyValueRequestURL; 
@property (retain) NSURL * pullKeyValueRequestURL; 
@property (retain) NSURL * pushAllKeyValueRequestURL; 
@property (retain) NSURL * pullAllKeyValueRequestURL; 
@property (assign) BOOL domainDisabled; 
@property (assign) double pollingIntervalInSeconds; 
@end
