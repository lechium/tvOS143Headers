/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUILabel, UITextView;

@interface VUITVDescriptiveAlertView : UIView {

	VUILabel* _titleLabel;
	UITextView* _descriptionTextView;

}

@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * descriptionTextView;              //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(UITextView *)descriptionTextView;
-(void)setDescriptionTextView:(UITextView *)arg1 ;
-(void)_updateDescriptionTextViewProperties:(BOOL)arg1 ;
@end
