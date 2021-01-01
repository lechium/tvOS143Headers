/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ASCBackoff.h>

@class JEUnfairLock, NSString;

@interface ASCExponentialBackoff : NSObject <ASCBackoff> {

	double _baseSleepTimeInterval;
	double _maxSleepTimeInterval;
	JEUnfairLock* _attemptLock;
	long long _attemptsMade;

}

@property (nonatomic,readonly) double baseSleepTimeInterval;              //@synthesize baseSleepTimeInterval=_baseSleepTimeInterval - In the implementation block
@property (nonatomic,readonly) double maxSleepTimeInterval;               //@synthesize maxSleepTimeInterval=_maxSleepTimeInterval - In the implementation block
@property (nonatomic,readonly) JEUnfairLock * attemptLock;                //@synthesize attemptLock=_attemptLock - In the implementation block
@property (assign,nonatomic) long long attemptsMade;                      //@synthesize attemptsMade=_attemptsMade - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(JEUnfairLock *)attemptLock;
-(long long)attemptsMade;
-(double)baseSleepTimeInterval;
-(void)setAttemptsMade:(long long)arg1 ;
-(double)maxSleepTimeInterval;
-(double)nextSleepTimeInterval;
-(id)initWithBaseSleepTimeInterval:(double)arg1 maxSleepTimeInterval:(double)arg2 ;
@end

