/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AXPIFingerAppearanceDelegate.h>

@class NSString;

@interface AXPIFingerSmallAppearance : NSObject <AXPIFingerAppearanceDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)strokeWidth;
-(double)fingerWidth;
-(double)fingerInnerRadius;
-(double)strokeOutlineWidth;
-(BOOL)showInnerCircle;
-(id)strokeOutlineColor;
-(BOOL)showFingerOutlines;
-(id)selectedStrokeColor;
-(id)deselectedStrokeColor;
-(id)deselectedFillColor;
-(double)fingerInnerCircleInnerRadius;
-(double)innerCircleStrokeWidth;
-(id)pressedCircularProgressFillColor;
-(id)circularProgressFillColor;
-(id)selectedFillColor;
@end
