/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/GKNicknameControllerDelegate.h>
#import <libobjc.A.dylib/GKFocusableViewDelegate.h>

@class GKFocusableView, GKDashboardPlayerShadowView, UIImageView, UIVisualEffectView, UIStackView, UITextField, UIButton, UILabel, UIActivityIndicatorView, NSLayoutConstraint, GKReachability, GKNicknameController, NSString;

@interface GKDefaultNicknameViewController : UIViewController <GKNicknameControllerDelegate, GKFocusableViewDelegate> {

	GKFocusableView* _avatarContainer;
	GKDashboardPlayerShadowView* _playerShadowView;
	UIImageView* _deleteAvatarImage;
	UIVisualEffectView* _visualEffectView;
	UIStackView* _mainStackView;
	UITextField* _nickname;
	UIButton* _continueButton;
	UIButton* _cancelButton;
	UILabel* _message;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _mainTitle;
	NSLayoutConstraint* _avatarContainerLandscapeHeight;
	GKReachability* _reachability;
	GKNicknameController* _nicknameController;

}

@property (nonatomic,retain) GKFocusableView * avatarContainer;                                //@synthesize avatarContainer=_avatarContainer - In the implementation block
@property (nonatomic,retain) GKDashboardPlayerShadowView * playerShadowView;                   //@synthesize playerShadowView=_playerShadowView - In the implementation block
@property (nonatomic,retain) UIImageView * deleteAvatarImage;                                  //@synthesize deleteAvatarImage=_deleteAvatarImage - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                            //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIStackView * mainStackView;                                      //@synthesize mainStackView=_mainStackView - In the implementation block
@property (nonatomic,retain) UITextField * nickname;                                           //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                                        //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * message;                                                //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                      //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * mainTitle;                                              //@synthesize mainTitle=_mainTitle - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * avatarContainerLandscapeHeight;              //@synthesize avatarContainerLandscapeHeight=_avatarContainerLandscapeHeight - In the implementation block
@property (nonatomic,retain) GKReachability * reachability;                                    //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,readonly) BOOL isAvatarEditingSupported; 
@property (nonatomic,retain) GKNicknameController * nicknameController;                        //@synthesize nicknameController=_nicknameController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UITextField *)nickname;
-(void)setNickname:(UITextField *)arg1 ;
-(UILabel *)message;
-(void)setMessage:(UILabel *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(GKReachability *)reachability;
-(void)setReachability:(GKReachability *)arg1 ;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIButton *)cancelButton;
-(void)keyboardWillShow:(id)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UIActivityIndicatorView *)activityIndicator;
-(UILabel *)mainTitle;
-(void)setMainTitle:(UILabel *)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIButton *)continueButton;
-(void)setContinueButton:(UIButton *)arg1 ;
-(void)dismiss:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)nicknameUpdateRequestCompletedWithStatus:(id)arg1 error:(id)arg2 ;
-(BOOL)nicknameShouldBeginEditing;
-(void)nicknameTextDidChangeWithMessage:(id)arg1 ;
-(void)nicknameDidBecomeFirstResponder;
-(void)nicknameDidResignFirstResponder;
-(void)nicknameUpdateAvatarImage:(id)arg1 ;
-(GKDashboardPlayerShadowView *)playerShadowView;
-(void)didChooseToDeleteAvatar;
-(void)setPlayerShadowView:(GKDashboardPlayerShadowView *)arg1 ;
-(void)setNicknameController:(GKNicknameController *)arg1 ;
-(GKNicknameController *)nicknameController;
-(void)cancelPressed:(id)arg1 ;
-(GKFocusableView *)avatarContainer;
-(UIImageView *)deleteAvatarImage;
-(void)enableOrDisableNicknameEditing;
-(BOOL)isAvatarEditingSupported;
-(void)updateLeftBarButtonWithTitle:(id)arg1 ;
-(void)fadeNonEssentialViews:(BOOL)arg1 ;
-(void)refreshAvatarImage;
-(void)presentDeleteAvatarImageAlert;
-(void)settingsPressed:(id)arg1 ;
-(void)setAvatarContainer:(GKFocusableView *)arg1 ;
-(void)setDeleteAvatarImage:(UIImageView *)arg1 ;
-(UIStackView *)mainStackView;
-(void)setMainStackView:(UIStackView *)arg1 ;
-(NSLayoutConstraint *)avatarContainerLandscapeHeight;
-(void)setAvatarContainerLandscapeHeight:(NSLayoutConstraint *)arg1 ;
@end
