/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCAnimationKeyframe.h>

@interface MCAnimationKeyframe1D : MCAnimationKeyframe {

	float mValue;

}

@property (assign,nonatomic) float value; 
+(id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
+(id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 ;
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

