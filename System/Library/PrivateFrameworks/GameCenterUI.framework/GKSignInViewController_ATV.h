/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UILabel, UIView, UIButton, OBPrivacyLinkController;

@interface GKSignInViewController_ATV : UIViewController {

	/*^block*/id _callback;
	UILabel* _mainTitle;
	UILabel* _subtitle;
	UIView* _privacyContainer;
	UIButton* _signinButton;
	UIButton* _notNowButton;
	OBPrivacyLinkController* _privacyLink;

}

@property (nonatomic,retain) UILabel * mainTitle;                                //@synthesize mainTitle=_mainTitle - In the implementation block
@property (nonatomic,retain) UILabel * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIView * privacyContainer;                          //@synthesize privacyContainer=_privacyContainer - In the implementation block
@property (nonatomic,retain) UIButton * signinButton;                            //@synthesize signinButton=_signinButton - In the implementation block
@property (nonatomic,retain) UIButton * notNowButton;                            //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;              //@synthesize privacyLink=_privacyLink - In the implementation block
@property (nonatomic,copy) id callback;                                          //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setSubtitle:(UILabel *)arg1 ;
-(UILabel *)subtitle;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(UILabel *)mainTitle;
-(void)setMainTitle:(UILabel *)arg1 ;
-(UIButton *)notNowButton;
-(void)setNotNowButton:(UIButton *)arg1 ;
-(void)addPrivacyLink;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(UIView *)privacyContainer;
-(void)setPrivacyContainer:(UIView *)arg1 ;
-(void)notNowButtonPressed:(id)arg1 ;
-(UIButton *)signinButton;
-(void)signinButtonPressed:(id)arg1 ;
-(void)setSigninButton:(UIButton *)arg1 ;
@end

