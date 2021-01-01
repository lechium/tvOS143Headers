/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _PathPoint : NSObject {

	BOOL _sentinelPoint;
	double _force;
	double _relativeTime;
	double _absoluteTime;
	double _decay;
	double _length;
	CGPoint _point;

}

@property (assign,getter=isSentinelPoint,nonatomic) BOOL sentinelPoint;              //@synthesize sentinelPoint=_sentinelPoint - In the implementation block
@property (assign,nonatomic) CGPoint point;                                          //@synthesize point=_point - In the implementation block
@property (assign,nonatomic) double force;                                           //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) double relativeTime;                                    //@synthesize relativeTime=_relativeTime - In the implementation block
@property (assign,nonatomic) double absoluteTime;                                    //@synthesize absoluteTime=_absoluteTime - In the implementation block
@property (assign,nonatomic) double decay;                                           //@synthesize decay=_decay - In the implementation block
@property (assign,nonatomic) double length;                                          //@synthesize length=_length - In the implementation block
-(id)description;
-(double)length;
-(void)setLength:(double)arg1 ;
-(CGPoint)point;
-(double)decay;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setDecay:(double)arg1 ;
-(double)absoluteTime;
-(double)force;
-(void)setForce:(double)arg1 ;
-(void)setAbsoluteTime:(double)arg1 ;
-(double)relativeTime;
-(void)setRelativeTime:(double)arg1 ;
-(void)setSentinelPoint:(BOOL)arg1 ;
-(BOOL)isSentinelPoint;
@end

