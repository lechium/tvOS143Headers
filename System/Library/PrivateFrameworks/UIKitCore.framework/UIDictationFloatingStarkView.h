/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDictationView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIDimmingView, NSString;

@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate> {

	UIDimmingView* _dimmingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(void)layoutSubviews;
-(void)endpointButtonPressed;
-(void)finishReturnToKeyboard;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)returnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(CGPoint)positionForShow;
-(void)setInputViewsHiddenForDictation:(BOOL)arg1 ;
@end
