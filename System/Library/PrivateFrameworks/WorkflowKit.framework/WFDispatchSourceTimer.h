/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject;

@interface WFDispatchSourceTimer : NSObject {

	NSObject*<OS_dispatch_source> _source;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_source>)source;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(id)initWithInterval:(double)arg1 repeatInterval:(double)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithInterval:(double)arg1 repeatIntervalInt:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

