/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate;

@interface CPLResetTracker : NSObject <NSSecureCoding> {

	NSArray* _resetReasons;

}

@property (nonatomic,copy,readonly) NSArray * resetReasons;              //@synthesize resetReasons=_resetReasons - In the implementation block
@property (nonatomic,readonly) NSDate * earliestReasonDate; 
@property (nonatomic,readonly) NSDate * likelyResetDate; 
@property (nonatomic,readonly) BOOL hasReasons; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_storeReasonsLocked;
+(void)_registerReasonLocked:(id)arg1 ;
+(void)registerLikelyResetReason:(id)arg1 ;
+(void)registerLikelyResetReason:(id)arg1 arguments:(char*)arg2 ;
+(id)currentTracker;
+(void)discardTracker:(id)arg1 ;
+(id)currentReasonDescriptions;
+(id)registerTentativeResetReasonIfCrashing:(id)arg1 ;
+(void)discardTentativeResetReason:(id)arg1 ;
+(BOOL)shouldIgnoreDefaultsCPLKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResetReasons:(id)arg1 ;
-(NSDate *)earliestReasonDate;
-(id)likelyResetReasonWithImmediateReason:(id)arg1 ;
-(NSDate *)likelyResetDate;
-(BOOL)hasReasons;
-(NSArray *)resetReasons;
@end

