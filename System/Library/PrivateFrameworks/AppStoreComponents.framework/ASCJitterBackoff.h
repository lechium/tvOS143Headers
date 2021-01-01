/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ASCBackoff.h>

@class ASCExponentialBackoff, NSString;

@interface ASCJitterBackoff : NSObject <ASCBackoff> {

	ASCExponentialBackoff* _exponentialBackoff;

}

@property (nonatomic,readonly) ASCExponentialBackoff * exponentialBackoff;              //@synthesize exponentialBackoff=_exponentialBackoff - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(double)nextSleepTimeInterval;
-(id)initWithBaseSleepTimeInterval:(double)arg1 maxSleepTimeInterval:(double)arg2 ;
-(ASCExponentialBackoff *)exponentialBackoff;
@end
