/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface PXLIFOQueue : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableArray* _internalQueue_pendingBlocks;
	NSObject*<OS_dispatch_queue> _targetQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)_executeNextPendingBlock;
@end

