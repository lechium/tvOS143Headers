/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardCollectionViewController.h>
#import <libobjc.A.dylib/GKDashboardTurnBasedInviteViewControllerDelegate.h>

@protocol GKTurnBasedMatchesViewControllerDelegate;
@class GKGame, GKMatchRequest, NSMutableArray, GKDashboardFocusButton, NSString;

@interface GKTurnBasedMatchesViewController : GKDashboardCollectionViewController <GKDashboardTurnBasedInviteViewControllerDelegate> {

	BOOL _showExistingMatches;
	BOOL _showPlay;
	BOOL _showQuit;
	GKGame* _game;
	GKMatchRequest* _matchRequest;
	id<GKTurnBasedMatchesViewControllerDelegate> _delegate;
	NSMutableArray* _activeMatches;
	NSMutableArray* _completeMatches;
	GKDashboardFocusButton* _createGameButton;
	NSString* _matchIDWaitingForTurnEvent;

}

@property (nonatomic,retain) NSMutableArray * activeMatches;                                            //@synthesize activeMatches=_activeMatches - In the implementation block
@property (nonatomic,retain) NSMutableArray * completeMatches;                                          //@synthesize completeMatches=_completeMatches - In the implementation block
@property (nonatomic,retain) GKDashboardFocusButton * createGameButton;                                 //@synthesize createGameButton=_createGameButton - In the implementation block
@property (nonatomic,retain) NSString * matchIDWaitingForTurnEvent;                                     //@synthesize matchIDWaitingForTurnEvent=_matchIDWaitingForTurnEvent - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                             //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKMatchRequest * matchRequest;                                             //@synthesize matchRequest=_matchRequest - In the implementation block
@property (assign,nonatomic,__weak) id<GKTurnBasedMatchesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showExistingMatches;                                                  //@synthesize showExistingMatches=_showExistingMatches - In the implementation block
@property (assign,nonatomic) BOOL showPlay;                                                             //@synthesize showPlay=_showPlay - In the implementation block
@property (assign,nonatomic) BOOL showQuit;                                                             //@synthesize showQuit=_showQuit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<GKTurnBasedMatchesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<GKTurnBasedMatchesViewControllerDelegate>)arg1 ;
-(BOOL)hasData;
-(void)finishWithError:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)loadData;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(void)showMatch:(id)arg1 ;
-(GKMatchRequest *)matchRequest;
-(void)setMatchRequest:(GKMatchRequest *)arg1 ;
-(void)setShowExistingMatches:(BOOL)arg1 ;
-(id)initWithMatchRequest:(id)arg1 ;
-(BOOL)showExistingMatches;
-(void)didPressMenuButton;
-(void)setShowPlay:(BOOL)arg1 ;
-(void)setShowQuit:(BOOL)arg1 ;
-(void)showInviteControllerAnimated:(BOOL)arg1 ;
-(GKDashboardFocusButton *)createGameButton;
-(BOOL)isInGame;
-(void)launchGameAndShowMatch:(id)arg1 ;
-(void)notifyGameWithMatch:(id)arg1 orError:(id)arg2 ;
-(void)turnBasedInviteViewControllerWasCancelled:(id)arg1 ;
-(void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2 ;
-(void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)didPressNewGameButton:(id)arg1 ;
-(void)doneButtonPressed;
-(void)gameButtonPressed;
-(BOOL)showPlay;
-(BOOL)showQuit;
-(NSMutableArray *)activeMatches;
-(void)setActiveMatches:(NSMutableArray *)arg1 ;
-(NSMutableArray *)completeMatches;
-(void)setCompleteMatches:(NSMutableArray *)arg1 ;
-(void)setCreateGameButton:(GKDashboardFocusButton *)arg1 ;
-(NSString *)matchIDWaitingForTurnEvent;
-(void)setMatchIDWaitingForTurnEvent:(NSString *)arg1 ;
@end

