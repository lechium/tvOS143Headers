/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@protocol UIRecentsInputViewControllerDelegate;
@class UILexicon, UIView, NSLayoutConstraint, NSString, UIViewController;

@interface UIRecentsInputViewController : UITableViewController {

	BOOL _canManageList;
	id<UIRecentsInputViewControllerDelegate> _recentInputDelegate;
	UILexicon* _recentInputs;
	long long _containingEffectStyle;
	UIView* _customHeaderView;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSString* _previouslyUsedString;
	NSString* _clearAllString;
	NSString* _enterNewString;
	UIView* _headerView;
	UIView* _headerContainerView;
	UIViewController* _headerContainerViewController;

}

@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;                                             //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                                            //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) NSString * previouslyUsedString;                                                  //@synthesize previouslyUsedString=_previouslyUsedString - In the implementation block
@property (nonatomic,retain) NSString * clearAllString;                                                        //@synthesize clearAllString=_clearAllString - In the implementation block
@property (nonatomic,retain) NSString * enterNewString;                                                        //@synthesize enterNewString=_enterNewString - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * headerContainerView;                                                     //@synthesize headerContainerView=_headerContainerView - In the implementation block
@property (nonatomic,retain) UIViewController * headerContainerViewController;                                 //@synthesize headerContainerViewController=_headerContainerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<UIRecentsInputViewControllerDelegate> recentInputDelegate;              //@synthesize recentInputDelegate=_recentInputDelegate - In the implementation block
@property (nonatomic,retain) UILexicon * recentInputs;                                                         //@synthesize recentInputs=_recentInputs - In the implementation block
@property (assign,nonatomic) long long containingEffectStyle;                                                  //@synthesize containingEffectStyle=_containingEffectStyle - In the implementation block
@property (assign,nonatomic) BOOL canManageList;                                                               //@synthesize canManageList=_canManageList - In the implementation block
@property (nonatomic,retain) UIView * customHeaderView;                                                        //@synthesize customHeaderView=_customHeaderView - In the implementation block
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIView *)headerView;
-(UIView *)customHeaderView;
-(void)setCustomHeaderView:(UIView *)arg1 ;
-(void)setHeaderContainerView:(UIView *)arg1 ;
-(UIView *)headerContainerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(id)preferredFocusedView;
-(void)_delete:(id)arg1 ;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(void)scrollViewDidChangeContentSize:(id)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id<UIRecentsInputViewControllerDelegate>)recentInputDelegate;
-(BOOL)canManageList;
-(void)setRecentInputs:(UILexicon *)arg1 ;
-(void)ensureConstraints;
-(NSString *)previouslyUsedString;
-(NSString *)clearAllString;
-(NSString *)enterNewString;
-(void)updateTableViewWidth;
-(void)setClearAllString:(NSString *)arg1 ;
-(void)setEnterNewString:(NSString *)arg1 ;
-(void)setPreviouslyUsedString:(NSString *)arg1 ;
-(void)setHeaderContainerViewController:(UIViewController *)arg1 ;
-(UIViewController *)headerContainerViewController;
-(void)_overrideTraitCollectionForHeaderViewController;
-(UILexicon *)recentInputs;
-(long long)containingEffectStyle;
-(void)didSelectButtonAtIndexPath:(id)arg1 ;
-(void)setRecentInputDelegate:(id<UIRecentsInputViewControllerDelegate>)arg1 ;
-(void)setContainingEffectStyle:(long long)arg1 ;
-(void)setCanManageList:(BOOL)arg1 ;
@end

