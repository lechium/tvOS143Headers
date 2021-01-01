/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UINSLayoutManagerBaselineCalculator.h>

@protocol _UINSLayoutManagerBaselineCalculator <NSObject>
@property (nonatomic,readonly) double firstBaselineOffsetFromTop; 
@property (nonatomic,readonly) double lastBaselineOffsetFromBottom; 
@required
-(double)firstBaselineOffsetFromTop;
-(double)lastBaselineOffsetFromBottom;

@end


@protocol UICoordinateSpace;
@class NSLayoutManager, NSString;

@interface _UINSLayoutManagerBaselineCalculator : NSObject <_UINSLayoutManagerBaselineCalculator> {

	NSLayoutManager* _layoutManager;
	id<UICoordinateSpace> _coordinateSpace;
	double _scale;

}

@property (nonatomic,readonly) double firstBaselineOffsetFromTop; 
@property (nonatomic,readonly) double lastBaselineOffsetFromBottom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)firstBaselineOffsetFromTop;
-(double)lastBaselineOffsetFromBottom;
-(double)_convertOffset:(double)arg1 ;
-(double)_baselineOffsetForGlyphAtIndex:(long long)arg1 ;
-(id)initWithLayoutManager:(id)arg1 coordinateSpace:(id)arg2 scale:(double)arg3 ;
@end

