/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface AXMLayoutItem : NSObject

@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double top; 
@property (nonatomic,readonly) double bottom; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double left; 
@property (nonatomic,readonly) double right; 
@property (nonatomic,readonly) CGRect normalizedFrame; 
+(CGRect)boundingFrameForItems:(id)arg1 ;
+(CGRect)normalizedBoundingFrameForItems:(id)arg1 ;
-(id)description;
-(double)left;
-(double)width;
-(double)height;
-(double)right;
-(double)top;
-(double)bottom;
-(long long)_metricTypeForMetric:(long long)arg1 ;
-(double)_floatValueForMetric:(long long)arg1 ;
-(CGRect)_rectValueForMetric:(long long)arg1 ;
-(BOOL)metric:(long long)arg1 inProximityOfMetric:(long long)arg2 item:(id)arg3 threshold:(double)arg4 ;
@end

