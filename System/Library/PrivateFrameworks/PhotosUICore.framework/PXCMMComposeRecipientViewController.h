/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PXPhotoRecipientViewControllerDelegate.h>
#import <libobjc.A.dylib/PXCMMComposeRecipientDataSourceManagerDelegate.h>
#import <libobjc.A.dylib/PXCMMComposeRecipientSelectionManagerDelegate.h>
#import <libobjc.A.dylib/PXCMMComposeRecipientValidationManagerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>

@protocol PXCMMComposeRecipientViewControllerDelegate, PXCMMActionControllerDelegate, PXCMMPersonSuggestion;
@class PXCMMSession, PXCMMSpecManager, PXUpdater, UITableView, UIVisualEffectView, UILabel, UIButton, NSProgress, PXCMMComposeRecipientDataSourceManager, PXCMMComposeRecipientDataSource, PXCMMComposeRecipientSelectionManager, PXCMMComposeRecipientValidationManager, PXCMMPeopleSuggestionsMediaProvider, PXPhotoRecipientViewController, NSMutableSet, NSString;

@interface PXCMMComposeRecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, PXPhotoRecipientViewControllerDelegate, PXCMMComposeRecipientDataSourceManagerDelegate, PXCMMComposeRecipientSelectionManagerDelegate, PXCMMComposeRecipientValidationManagerDelegate, CNContactViewControllerDelegate, PXSettingsKeyObserver, PXDiagnosticsEnvironment> {

	PXCMMSession* _session;
	id<PXCMMComposeRecipientViewControllerDelegate> _delegate;
	id<PXCMMActionControllerDelegate> _actionDelegate;
	PXCMMSpecManager* _specManager;
	PXUpdater* _updater;
	UITableView* _composeRecipientTableView;
	UIVisualEffectView* _footerVisualEffectView;
	UILabel* _privacyMessageLabel;
	UIButton* _sendButton;
	NSProgress* _actionProgress;
	PXCMMComposeRecipientDataSourceManager* _recipientManager;
	PXCMMComposeRecipientDataSource* _recipientsDataSource;
	PXCMMComposeRecipientSelectionManager* _recipientsSelectionManager;
	PXCMMComposeRecipientValidationManager* _recipientsValidationManager;
	PXCMMPeopleSuggestionsMediaProvider* _peopleSuggestionsMediaProvider;
	PXPhotoRecipientViewController* _bootstrapRecipientViewController;
	id<PXCMMPersonSuggestion> _personSuggestionForBootstrapping;
	PXPhotoRecipientViewController* _addPeopleRecipientViewController;
	double _maximumContentWidth;
	NSMutableSet* _transientRecipientSelection;
	UIButton* _tapToRadarButton;

}

@property (nonatomic,readonly) PXCMMSpecManager * specManager;                                                    //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,readonly) PXUpdater * updater;                                                               //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) UITableView * composeRecipientTableView;                                             //@synthesize composeRecipientTableView=_composeRecipientTableView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * footerVisualEffectView;                                         //@synthesize footerVisualEffectView=_footerVisualEffectView - In the implementation block
@property (nonatomic,retain) UILabel * privacyMessageLabel;                                                       //@synthesize privacyMessageLabel=_privacyMessageLabel - In the implementation block
@property (nonatomic,retain) UIButton * sendButton;                                                               //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) NSProgress * actionProgress;                                                         //@synthesize actionProgress=_actionProgress - In the implementation block
@property (nonatomic,retain) PXCMMComposeRecipientDataSourceManager * recipientManager;                           //@synthesize recipientManager=_recipientManager - In the implementation block
@property (nonatomic,retain) PXCMMComposeRecipientDataSource * recipientsDataSource;                              //@synthesize recipientsDataSource=_recipientsDataSource - In the implementation block
@property (nonatomic,retain) PXCMMComposeRecipientSelectionManager * recipientsSelectionManager;                  //@synthesize recipientsSelectionManager=_recipientsSelectionManager - In the implementation block
@property (nonatomic,retain) PXCMMComposeRecipientValidationManager * recipientsValidationManager;                //@synthesize recipientsValidationManager=_recipientsValidationManager - In the implementation block
@property (nonatomic,readonly) PXCMMPeopleSuggestionsMediaProvider * peopleSuggestionsMediaProvider;              //@synthesize peopleSuggestionsMediaProvider=_peopleSuggestionsMediaProvider - In the implementation block
@property (nonatomic,retain) PXPhotoRecipientViewController * bootstrapRecipientViewController;                   //@synthesize bootstrapRecipientViewController=_bootstrapRecipientViewController - In the implementation block
@property (nonatomic,retain) id<PXCMMPersonSuggestion> personSuggestionForBootstrapping;                          //@synthesize personSuggestionForBootstrapping=_personSuggestionForBootstrapping - In the implementation block
@property (nonatomic,retain) PXPhotoRecipientViewController * addPeopleRecipientViewController;                   //@synthesize addPeopleRecipientViewController=_addPeopleRecipientViewController - In the implementation block
@property (assign,nonatomic) double maximumContentWidth;                                                          //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (nonatomic,retain) NSMutableSet * transientRecipientSelection;                                          //@synthesize transientRecipientSelection=_transientRecipientSelection - In the implementation block
@property (nonatomic,retain) UIButton * tapToRadarButton;                                                         //@synthesize tapToRadarButton=_tapToRadarButton - In the implementation block
@property (nonatomic,readonly) PXCMMSession * session;                                                            //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMComposeRecipientViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMActionControllerDelegate> actionDelegate;                             //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PXCMMComposeRecipientViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PXCMMComposeRecipientViewControllerDelegate>)arg1 ;
-(PXCMMSession *)session;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setActionDelegate:(id<PXCMMActionControllerDelegate>)arg1 ;
-(id<PXCMMActionControllerDelegate>)actionDelegate;
-(id)initWithSession:(id)arg1 ;
-(void)_setNeedsUpdate;
-(double)_headerHeight;
-(PXCMMSpecManager *)specManager;
-(PXUpdater *)updater;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)composeRecipientValidationManager:(id)arg1 didUpdateValidationWithChangedIndexes:(id)arg2 ;
-(void)composeRecipientSelectionManager:(id)arg1 didUpdateSelectionSnapshotWithChangeDetails:(id)arg2 ;
-(void)composeRecipientDataSourceManager:(id)arg1 didUpdateDataSourceWithChangeDetails:(id)arg2 ;
-(void)photoRecipientViewController:(id)arg1 didCompleteWithRecipients:(id)arg2 ;
-(void)photoRecipientViewControllerDidCancel:(id)arg1 ;
-(void)_handleAddRecipient:(id)arg1 ;
-(void)_handleActionButton:(id)arg1 ;
-(void)setActionProgress:(NSProgress *)arg1 ;
-(void)_tapToRadarTapped:(id)arg1 ;
-(void)_updateFooter;
-(void)_updateTableView;
-(void)_updateUserInteraction;
-(id)_validationTextColorForComposeRecipient:(id)arg1 ;
-(void)_dismissRecipientViewController:(id)arg1 ;
-(void)_bootstrapPersonSuggestion:(id)arg1 withContact:(id)arg2 ;
-(void)_contactViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(UITableView *)composeRecipientTableView;
-(void)setComposeRecipientTableView:(UITableView *)arg1 ;
-(UIVisualEffectView *)footerVisualEffectView;
-(void)setFooterVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UILabel *)privacyMessageLabel;
-(void)setPrivacyMessageLabel:(UILabel *)arg1 ;
-(UIButton *)sendButton;
-(void)setSendButton:(UIButton *)arg1 ;
-(NSProgress *)actionProgress;
-(PXCMMComposeRecipientDataSourceManager *)recipientManager;
-(void)setRecipientManager:(PXCMMComposeRecipientDataSourceManager *)arg1 ;
-(PXCMMComposeRecipientDataSource *)recipientsDataSource;
-(void)setRecipientsDataSource:(PXCMMComposeRecipientDataSource *)arg1 ;
-(PXCMMComposeRecipientSelectionManager *)recipientsSelectionManager;
-(void)setRecipientsSelectionManager:(PXCMMComposeRecipientSelectionManager *)arg1 ;
-(PXCMMComposeRecipientValidationManager *)recipientsValidationManager;
-(void)setRecipientsValidationManager:(PXCMMComposeRecipientValidationManager *)arg1 ;
-(PXCMMPeopleSuggestionsMediaProvider *)peopleSuggestionsMediaProvider;
-(PXPhotoRecipientViewController *)bootstrapRecipientViewController;
-(void)setBootstrapRecipientViewController:(PXPhotoRecipientViewController *)arg1 ;
-(id<PXCMMPersonSuggestion>)personSuggestionForBootstrapping;
-(void)setPersonSuggestionForBootstrapping:(id<PXCMMPersonSuggestion>)arg1 ;
-(PXPhotoRecipientViewController *)addPeopleRecipientViewController;
-(void)setAddPeopleRecipientViewController:(PXPhotoRecipientViewController *)arg1 ;
-(double)maximumContentWidth;
-(void)setMaximumContentWidth:(double)arg1 ;
-(NSMutableSet *)transientRecipientSelection;
-(void)setTransientRecipientSelection:(NSMutableSet *)arg1 ;
-(UIButton *)tapToRadarButton;
-(void)setTapToRadarButton:(UIButton *)arg1 ;
@end

