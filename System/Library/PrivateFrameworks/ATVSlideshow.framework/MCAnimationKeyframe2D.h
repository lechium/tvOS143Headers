/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MCAnimationKeyframe.h>

@interface MCAnimationKeyframe2D : MCAnimationKeyframe {

	CGPoint mPoint;
	CGPoint mC1;
	CGPoint mC2;

}

@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) CGPoint c1; 
@property (assign,nonatomic) CGPoint c2; 
+(id)keyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
+(id)keyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)setC2:(CGPoint)arg1 ;
-(void)setC1:(CGPoint)arg1 ;
-(CGPoint)c1;
-(CGPoint)c2;
@end

