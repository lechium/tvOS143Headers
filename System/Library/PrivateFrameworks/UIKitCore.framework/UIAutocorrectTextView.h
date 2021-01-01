/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont;

@interface UIAutocorrectTextView : UIView {

	NSString* m_string;
	int m_type;
	int m_edgeType;
	UIFont* m_textFont;
	BOOL m_animating;
	BOOL m_isLongString;

}

@property (assign,nonatomic) BOOL animating; 
@property (assign,nonatomic) BOOL isLongString; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setEdgeType:(int)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)animating;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(CGRect)_calculateRectForExpandedHitRegion;
-(id)initWithFrame:(CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4 ;
-(BOOL)isLongString;
-(void)setIsLongString:(BOOL)arg1 ;
@end
