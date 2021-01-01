/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableView.h>

@class UIScrollView, UILabel, UITextView, UIColor;

@interface PKSoftwareUpdateTableView : UITableView {

	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UITextView* _messageView;
	long long _context;
	UIColor* _textColor;
	UIColor* _linkColor;

}

@property (assign,nonatomic) long long context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * linkColor;              //@synthesize linkColor=_linkColor - In the implementation block
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)linkColor;
-(void)setLinkColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)_messageAttributedStringWithTextColor:(id)arg1 ;
@end

