/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSConditionLock.h>

@interface _MFLazyCacheConditionLock : NSConditionLock {

	long long _waiterCount;

}

@property (readonly) long long waiterCount; 
-(long long)waiterCount;
-(void)incrementWaiterCount;
-(void)decrementWaiterCount;
@end

