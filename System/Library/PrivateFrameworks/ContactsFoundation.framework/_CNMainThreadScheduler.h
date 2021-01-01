/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class NSString;

@interface _CNMainThreadScheduler : NSObject <CNScheduler> {

	id<CNScheduler> _inlineScheduler;
	id<CNScheduler> _jumpToMainScheduler;

}

@property (nonatomic,readonly) id<CNScheduler> inlineScheduler;                  //@synthesize inlineScheduler=_inlineScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> jumpToMainScheduler;              //@synthesize jumpToMainScheduler=_jumpToMainScheduler - In the implementation block
@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id<CNScheduler>)inlineScheduler;
-(id<CNScheduler>)jumpToMainScheduler;
-(id)schedulerForImmediateExecution;
-(id)schedulerForDelayedExecution;
@end

