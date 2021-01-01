/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreSDB/CoreSDB-Structs.h>
@class NSThread, NSString, NSRunLoop, NSObject;

@interface _CSDBThreadObject : NSObject {

	NSThread* _thread;
	NSString* _identifier;
	NSRunLoop* _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	NSString* _queueContext;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)thread;
-(void)_threadedMain;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg1 qosClass:(unsigned short)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(BOOL)isCurrentThreadOtherwiseAssert:(BOOL)arg1 ;
@end
