/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString, NSURL;

@interface WFHyperlinkFooterView : UIView <UITextViewDelegate> {

	UITextView* _textView;
	NSString* _text;
	NSURL* _URL;
	NSRange _linkRange;
	id _target;
	SEL _action;

}

@property (retain) NSString * text; 
@property (assign) NSRange linkRange; 
@property (__weak) id target;                                       //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                      //@synthesize action=_action - In the implementation block
@property (retain) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setLinkRange:(NSRange)arg1 ;
-(void)_linkify;
-(NSRange)linkRange;
-(UIEdgeInsets)textInsets;
@end

