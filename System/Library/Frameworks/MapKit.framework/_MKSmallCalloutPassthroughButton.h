/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIControl, UIView;

@interface _MKSmallCalloutPassthroughButton : UIControl {

	UIControl* _targetControl;
	UIView* _highlightView;

}

@property (nonatomic,retain) UIControl * targetControl;              //@synthesize targetControl=_targetControl - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(void)handleTap:(id)arg1 ;
-(void)setTargetControl:(UIControl *)arg1 ;
-(UIControl *)targetControl;
@end

