/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PBSOSUpdateOperationProgress : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isDone;
	float _percentComplete;
	float _normalizedPercentComplete;
	NSString* _phase;
	double _timeRemaining;

}

@property (nonatomic,retain) NSString * phase;                             //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) float percentComplete;                        //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) float normalizedPercentComplete;              //@synthesize normalizedPercentComplete=_normalizedPercentComplete - In the implementation block
@property (assign,nonatomic) double timeRemaining;                         //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (assign,nonatomic) BOOL isDone;                                  //@synthesize isDone=_isDone - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)percentComplete;
-(BOOL)isDone;
-(NSString *)phase;
-(void)setPhase:(NSString *)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(double)timeRemaining;
-(void)setTimeRemaining:(double)arg1 ;
-(void)setIsDone:(BOOL)arg1 ;
-(void)setNormalizedPercentComplete:(float)arg1 ;
-(float)normalizedPercentComplete;
@end

