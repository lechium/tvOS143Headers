/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXAnimationMetric : MXMetric {

	NSMeasurement* _scrollHitchTimeRatio;

}

@property (readonly) NSMeasurement * scrollHitchTimeRatio;              //@synthesize scrollHitchTimeRatio=_scrollHitchTimeRatio - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithGlitchTimeRatio:(id)arg1 ;
-(NSMeasurement *)scrollHitchTimeRatio;
@end

