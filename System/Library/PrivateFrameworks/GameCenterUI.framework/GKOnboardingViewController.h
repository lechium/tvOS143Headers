/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UIView, UIButton, UILabel, OBPrivacyLinkController;

@interface GKOnboardingViewController : UIViewController {

	UIView* _privacyContainer;
	UIButton* _nextButton;
	UILabel* _mainTitle;
	UILabel* _subTitle;
	OBPrivacyLinkController* _privacyLink;

}

@property (nonatomic,retain) UIView * privacyContainer;                          //@synthesize privacyContainer=_privacyContainer - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                              //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UILabel * mainTitle;                                //@synthesize mainTitle=_mainTitle - In the implementation block
@property (nonatomic,retain) UILabel * subTitle;                                 //@synthesize subTitle=_subTitle - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;              //@synthesize privacyLink=_privacyLink - In the implementation block
-(UILabel *)subTitle;
-(void)setSubTitle:(UILabel *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(UILabel *)mainTitle;
-(void)setMainTitle:(UILabel *)arg1 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)addPrivacyLink;
-(void)showSignOutAlert;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(UIView *)privacyContainer;
-(void)constrainTextInView:(id)arg1 toFontSize:(double)arg2 ;
-(void)signOutPressed:(id)arg1 ;
-(void)nextPressed:(id)arg1 ;
-(void)setPrivacyContainer:(UIView *)arg1 ;
@end

