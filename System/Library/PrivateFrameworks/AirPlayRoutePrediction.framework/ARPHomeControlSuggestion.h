/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirPlayRoutePrediction/AirPlayRoutePrediction-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ARPHomeControlSuggestion : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	double _score;
	NSString* _homeUUID;
	NSString* _targetUUID;
	NSString* _accessoryServiceUUID;
	NSString* _suggestionReason;
	double _computedScore;

}

@property (assign,nonatomic) double computedScore;                       //@synthesize computedScore=_computedScore - In the implementation block
@property (assign,nonatomic) long long type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double score;                               //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSString * homeUUID;                          //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,copy) NSString * targetUUID;                        //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,copy) NSString * accessoryServiceUUID;              //@synthesize accessoryServiceUUID=_accessoryServiceUUID - In the implementation block
@property (nonatomic,copy) NSString * suggestionReason;                  //@synthesize suggestionReason=_suggestionReason - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(double)score;
-(void)setScore:(double)arg1 ;
-(NSString *)homeUUID;
-(void)setHomeUUID:(NSString *)arg1 ;
-(NSString *)targetUUID;
-(NSString *)accessoryServiceUUID;
-(void)setSuggestionReason:(NSString *)arg1 ;
-(void)setComputedScore:(double)arg1 ;
-(void)setTargetUUID:(NSString *)arg1 ;
-(void)setAccessoryServiceUUID:(NSString *)arg1 ;
-(id)initWithHomeUUID:(id)arg1 targetUUID:(id)arg2 accessoryServiceUUID:(id)arg3 type:(long long)arg4 score:(double)arg5 computedScore:(double)arg6 suggestionReason:(id)arg7 ;
-(NSString *)suggestionReason;
-(id)initWithHomeUUID:(id)arg1 targetUUID:(id)arg2 accessoryServiceUUID:(id)arg3 type:(long long)arg4 score:(double)arg5 suggestionReason:(id)arg6 ;
-(double)computedScore;
@end

