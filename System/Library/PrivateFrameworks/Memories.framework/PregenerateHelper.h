/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <Memories/Memories-Structs.h>
@class NSObject, NSMutableArray;

@interface PregenerateHelper : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _pipelines;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * pipelines;                              //@synthesize pipelines=_pipelines - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)runPregenerateWithCollection:(id)arg1 naturalSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPipelines:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pipelines;
@end

