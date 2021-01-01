/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface SeymourUI.SessionTimeProgressView : UIView {

	 presenter;
	 label;
	 ringGroup;
	 ringsView;
	 formatter;
	 behavior;

}

@property (readonly,nonatomic) BOOL accessibilityShowRemaining; 
@property (readonly,nonatomic) CGSize intrinsicContentSize; 
-(BOOL)accessibilityShowRemaining;
-(void)accessibilityDidUpdateTimer:(double)arg1 percentage:(float)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
@end
