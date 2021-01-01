/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKEditTableNoPassesViewDelegate;
@class UILabel, UIButton;

@interface PKEditTableNoPassesView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _buttonScanCode;
	UIButton* _buttonFindApps;
	id<PKEditTableNoPassesViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKEditTableNoPassesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKEditTableNoPassesViewDelegate>)delegate;
-(void)setDelegate:(id<PKEditTableNoPassesViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)scanCodeButtonTapped;
-(void)findAppsForWalletTapped;
@end

