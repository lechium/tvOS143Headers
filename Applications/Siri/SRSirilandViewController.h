//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AFUIBugReportPresentingDelegate-Protocol.h"
#import "AFUIStateMachineDelegate-Protocol.h"
#import "RadiosPreferencesDelegate-Protocol.h"
#import "SRPagerViewControllerDelegate-Protocol.h"
#import "SRSirilandViewDelegate-Protocol.h"
#import "SRSuggestionsViewControllerDelegate-Protocol.h"
#import "SRTranscriptStackViewControllerDataSource-Protocol.h"
#import "SRTranscriptStackViewControllerDelegate-Protocol.h"
#import "SiriUIModalContainerViewControllerDelegate-Protocol.h"
#import "SiriUIPresentation-Protocol.h"
#import "SiriUIVideoPlayerViewControllerDelegate-Protocol.h"

@class AFUIStateMachine, NSMutableSet, NSString, RadiosPreferences, SFStartSearchFeedback, SRPagerViewController, SRSirilandView, SRSuggestionsViewController;
@protocol AFUIBugReportPresenting, SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SRSirilandViewController : UIViewController <AFUIBugReportPresentingDelegate, SRPagerViewControllerDelegate, SRSirilandViewDelegate, SRTranscriptStackViewControllerDataSource, SRSuggestionsViewControllerDelegate, SRTranscriptStackViewControllerDelegate, RadiosPreferencesDelegate, AFUIStateMachineDelegate, SiriUIVideoPlayerViewControllerDelegate, SiriUIModalContainerViewControllerDelegate, SiriUIPresentation>
{
    AFUIStateMachine *_stateMachine;	// 8 = 0x8
    long long _currentRequestSource;	// 16 = 0x10
    _Bool _passcodeUnlockViewIsShowing;	// 24 = 0x18
    _Bool _presentedPreviousConversationFromBreadcrumb;	// 25 = 0x19
    CDStruct_a82615c4 _keyboardInfo;	// 32 = 0x20
    NSMutableSet *_siriEnabledAppList;	// 80 = 0x50
    id <SiriUIPresentationDataSource> _dataSource;	// 88 = 0x58
    id <SiriUIPresentationDelegate> _delegate;	// 96 = 0x60
    SRSuggestionsViewController *_siriUnavailableViewController;	// 104 = 0x68
    SRPagerViewController *_pagerViewController;	// 112 = 0x70
    id <AFUIBugReportPresenting> _bugReportPresenter;	// 120 = 0x78
    double _lastPresentationTime;	// 128 = 0x80
    RadiosPreferences *_radioPreferences;	// 136 = 0x88
    UIViewController *_presentedViewControllerForDebugController;	// 144 = 0x90
    SFStartSearchFeedback *_currentStartSearchFeedback;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000010007f6b8
@property(retain, nonatomic) SFStartSearchFeedback *currentStartSearchFeedback; // @synthesize currentStartSearchFeedback=_currentStartSearchFeedback;
@property(nonatomic) __weak UIViewController *presentedViewControllerForDebugController; // @synthesize presentedViewControllerForDebugController=_presentedViewControllerForDebugController;
@property(retain, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
@property(nonatomic) double lastPresentationTime; // @synthesize lastPresentationTime=_lastPresentationTime;
@property(retain, nonatomic) id <AFUIBugReportPresenting> bugReportPresenter; // @synthesize bugReportPresenter=_bugReportPresenter;
@property(readonly, nonatomic, getter=_pagerViewController) SRPagerViewController *pagerViewController; // @synthesize pagerViewController=_pagerViewController;
@property(readonly, nonatomic, getter=_siriUnavailableViewController) SRSuggestionsViewController *siriUnavailableViewController; // @synthesize siriUnavailableViewController=_siriUnavailableViewController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_topTranscriptViewController;	// IMP=0x000000010007f530
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010007f52c
- (void)_handleWillLeaveEmergencyCallView:(id)arg1;	// IMP=0x000000010007f528
- (void)_handleDidShowEmergencyCallView:(id)arg1;	// IMP=0x000000010007f524
- (void)siriNetworkAvailabilityDidChange;	// IMP=0x000000010007f4c4
- (void)_updateSiriAvailability:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010007f3d4
- (void)airplaneModeChanged;	// IMP=0x000000010007f380
- (void)_updateConversationAvailability:(unsigned long long)arg1;	// IMP=0x000000010007f098
- (void)showSpeechAlternatives:(id)arg1;	// IMP=0x000000010007f02c
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x000000010007efc0
- (void)handleGetResponseAlternativesPlayback:(id)arg1;	// IMP=0x000000010007ef54
- (void)changeUtterance:(id)arg1;	// IMP=0x000000010007eee8
- (id)requestContext;	// IMP=0x000000010007ee94
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x000000010007ee8c
- (void)_setupBugReportPresenterIfNecessary;	// IMP=0x000000010007ee2c
- (void)transcriptStackViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x000000010007ede4
- (void)transcriptStackViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;	// IMP=0x000000010007ed14
- (void)transcriptStackViewController:(id)arg1 didFinishTest:(id)arg2;	// IMP=0x000000010007ec68
- (void)transcriptStackViewController:(id)arg1 willStartTest:(id)arg2;	// IMP=0x000000010007ebbc
- (_Bool)inTextInputModeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007eb68
- (void)transcriptStackViewController:(id)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2;	// IMP=0x000000010007ea10
- (void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007e9a0
- (unsigned long long)deviceLockStateForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007e94c
- (id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x000000010007e8c8
- (id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x000000010007e844
- (void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000010007e7b8
- (void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x000000010007e6ec
- (void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x000000010007e640
- (void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3;	// IMP=0x000000010007e5c0
- (void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x000000010007e540
- (void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007e450
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007e3c8
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000010007e368
- (void)transcriptStackViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x000000010007e310
- (void)transcriptStackViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x000000010007e2a0
- (void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x000000010007e230
- (void)transcriptStackViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x000000010007e1c0
- (void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x000000010007e150
- (void)transcriptStackViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;	// IMP=0x000000010007e0a4
- (void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x000000010007e04c
- (void)willSendStartRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007dfa8
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x000000010007df5c
- (void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007deac
- (id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007de50
- (void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007ddc4
- (void)stopSpeakingForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007dd7c
- (void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007dcb4
- (void)cancelRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007dca8
- (void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007dbf8
- (void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5;	// IMP=0x000000010007dab8
- (void)transcriptStackViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010007da70
- (void)transcriptStackViewControllerWillBeginEditing:(id)arg1;	// IMP=0x000000010007da18
- (void)transcriptStackViewControllerRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010007d9ac
- (void)transcriptStackViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010007d93c
- (void)transcriptStackViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010007d8cc
- (void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010007d85c
- (void)transcriptStackViewControllerPulseHelpButton:(id)arg1;	// IMP=0x000000010007d814
- (void)transcriptStackViewController:(id)arg1 setHelpButtonEmphasized:(_Bool)arg2;	// IMP=0x000000010007d7bc
- (void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010007d758
- (void)transcriptStackViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x000000010007d678
- (_Bool)transcriptStackViewControllerShouldDelaySuggestions:(id)arg1;	// IMP=0x000000010007d624
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x000000010007d5d4
- (long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007d4d4
- (double)statusViewHeightForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007d478
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007d3fc
- (void)transcriptStackViewControllerDidExitSiriland:(id)arg1;	// IMP=0x000000010007d3b8
- (void)transcriptStackViewControllerWillEnterSiriland:(id)arg1;	// IMP=0x000000010007d374
- (double)contentWidthForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007d318
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(id)arg1;	// IMP=0x000000010007d2f8
- (void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007d248
- (id)siriEnabledAppListForSuggestionsController:(id)arg1;	// IMP=0x000000010007d238
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x000000010007d1dc
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x000000010007d180
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x000000010007d104
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x000000010007d100
- (CDStruct_a82615c4)keyboardInfoForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007d0e0
- (id)siriEnabledAppListForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007d0d0
- (id)domainObjectStoreForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007d074
- (id)conversationForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007d064
- (long long)siriStateForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007d010
- (id)bugReportPresenterRequestsPresentingView:(id)arg1;	// IMP=0x000000010007d004
- (double)bugReportPresenterRequestsLastPresentationTime:(id)arg1;	// IMP=0x000000010007cff4
- (_Bool)bugReportPresenterShouldPromptUserForScreenshotPermission:(id)arg1;	// IMP=0x000000010007cfec
- (id)bugReportPresenterRequestsBugReportPrefixForTitle:(id)arg1;	// IMP=0x000000010007cfe4
- (id)bugReportPresenterRequestsBugReportKeywordIdentifiers:(id)arg1;	// IMP=0x000000010007cfdc
- (id)bugReportPresenterRequestsActiveConversation:(id)arg1;	// IMP=0x000000010007cfd0
- (void)bugReportPresenter:(id)arg1 setBugReportingAvailable:(_Bool)arg2;	// IMP=0x000000010007cf78
- (void)bugReportPresenter:(id)arg1 requestsToTakeScreenshotWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007cf08
- (void)bugReportPresenter:(id)arg1 requestsToPresentViewController:(id)arg2;	// IMP=0x000000010007cef0
- (void)bugReportPresenter:(id)arg1 requestsToPerformAceCommand:(id)arg2;	// IMP=0x000000010007ce78
- (void)bugReportPresenter:(id)arg1 requestsToOpenURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007ce04
- (void)bugReportPresenter:(id)arg1 requestsToHandlePasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007cd94
- (double)statusViewHeightForSirilandView:(id)arg1;	// IMP=0x000000010007cd38
- (struct CGRect)statusBarFrameForSirilandView:(id)arg1;	// IMP=0x000000010007ccbc
- (void)pagerViewControllerDidChangeTransitionState:(id)arg1;	// IMP=0x000000010007c9e8
- (void)pagerViewController:(id)arg1 didActivatePageViewController:(id)arg2 oldActivePageViewController:(id)arg3;	// IMP=0x000000010007c6b8
- (void)siriDidDetectMusic;	// IMP=0x000000010007c5b4
- (void)_hideAcousticIDSpinner;	// IMP=0x000000010007c3f8
- (void)acousticIDRequestDidFinishWithSuccess:(_Bool)arg1;	// IMP=0x000000010007c33c
- (void)acousticIDRequestDidStart;	// IMP=0x000000010007c214
- (void)modalContainerViewControllerViewDidDisappear:(id)arg1;	// IMP=0x000000010007c1a4
- (void)modalContainerViewControllerViewWillDisappear:(id)arg1;	// IMP=0x000000010007c134
- (void)_dismissVideoPlayerViewController;	// IMP=0x000000010007c018
- (void)playbackDidFailForVideoPlayerViewController:(id)arg1;	// IMP=0x000000010007c00c
- (void)playbackDidFinishForVideoPlayerViewController:(id)arg1;	// IMP=0x000000010007c000
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x000000010007bff8
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x000000010007bff0
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x000000010007bfec
- (void)handlePlayContentCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007bc34
- (id)prepareUpdateViewsCommandForConversation:(id)arg1;	// IMP=0x000000010007bc24
- (id)prepareAddViewsCommandForConversation:(id)arg1;	// IMP=0x000000010007bc14
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x000000010007bac8
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x000000010007b984
- (void)speechRecordingDidDetectSpeechStartpoint;	// IMP=0x000000010007b944
- (void)speechRecordingDidFailForRequest:(id)arg1 onAVRecordRoute:(id)arg2 withError:(id)arg3;	// IMP=0x000000010007b938
- (void)speechRecordingDidCancelForRequest:(id)arg1 onAVRecordRoute:(id)arg2;	// IMP=0x000000010007b92c
- (void)speechRecordingDidEndForRequest:(id)arg1 onAVRecordRoute:(id)arg2;	// IMP=0x000000010007b920
- (void)didReceiveBugButtonLongPress;	// IMP=0x000000010007b8b4
- (void)didReceiveReportBugAction;	// IMP=0x000000010007b848
- (void)didReceiveHelpAction;	// IMP=0x000000010007b3c0
- (_Bool)supportsTextInput;	// IMP=0x000000010007b3b8
- (void)_dismissForLongIdling;	// IMP=0x000000010007b2c4
- (void)_cancelScheduledAutoDismissalForLongIdlingIfNeeded;	// IMP=0x000000010007b1f8
- (void)_scheduleAutoDismissalForLongIdling;	// IMP=0x000000010007b10c
- (void)siriRequestWillStartWithRequestOptions:(id)arg1;	// IMP=0x000000010007b0b8
- (id)configureOptionsForImminentRequest:(id)arg1;	// IMP=0x000000010007b02c
- (void)_logParsecEndSearchFeedback;	// IMP=0x000000010007aef4
- (void)_logParsecStartSearchFeedback;	// IMP=0x000000010007adc0
- (void)siriWillStartTextInputRequest;	// IMP=0x000000010007acf8
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x000000010007aadc
- (_Bool)siriIsShowingPasscodeUnlock;	// IMP=0x000000010007aacc
- (void)siriDidHidePasscodeUnlock;	// IMP=0x000000010007aa44
- (void)siriWillHidePasscodeUnlock;	// IMP=0x000000010007aa40
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;	// IMP=0x000000010007a9b8
- (void)siriWillShowPasscodeUnlock;	// IMP=0x000000010007a9a8
- (void)reloadData;	// IMP=0x000000010007a960
- (void)startNewConversation;	// IMP=0x000000010007a8f0
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x000000010007a880
- (void)conversation:(id)arg1 didChangePresentationStateForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010007a7f4
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x000000010007a728
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010007a69c
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010007a4f0
- (void)siriDidDeactivate;	// IMP=0x000000010007a38c
- (_Bool)currentSnippetContainsFooterButtons;	// IMP=0x000000010007a340
- (_Bool)_isUsingBuiltInSpeaker;	// IMP=0x000000010007a16c
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x0000000100079dcc
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x0000000100079c94
- (void)statusViewHeightDidChange;	// IMP=0x0000000100079c4c
- (void)statusBarFrameDidChange;	// IMP=0x0000000100079bc8
- (long long)options;	// IMP=0x0000000100079bc0
- (id)viewController;	// IMP=0x0000000100079bbc
- (void)_speakText:(id)arg1;	// IMP=0x0000000100079bac
- (void)_speakText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100079b20
- (void)_cancelRequest;	// IMP=0x0000000100079ad8
- (id)_conversationItemAtIndexPath:(id)arg1 forTranscriptStackViewController:(id)arg2;	// IMP=0x0000000100079a54
- (id)_createTranscriptStackViewController;	// IMP=0x0000000100079a18
- (id)_transcriptStackViewControllerForConversation:(id)arg1;	// IMP=0x0000000100079958
- (id)_freshTranscriptStackViewController;	// IMP=0x000000010007988c
- (id)_activeTranscriptStackViewController;	// IMP=0x0000000100079838
- (id)_previousTranscriptStackViewController;	// IMP=0x0000000100079774
- (id)_transcriptStackViewControllers;	// IMP=0x0000000100079720
- (id)_itemInCurrentConversationAtIndexPath:(id)arg1;	// IMP=0x00000001000796a0
- (id)_itemInPreviousConversationAtIndexPath:(id)arg1;	// IMP=0x0000000100079620
- (id)_activeConversation;	// IMP=0x0000000100079570
- (id)_previousConversation;	// IMP=0x00000001000794e0
- (id)_identifierOfPreviousConversation;	// IMP=0x0000000100079458
- (id)_conversationIdentifiers;	// IMP=0x00000001000793fc
- (void)_updatePreviousAndActiveConversation;	// IMP=0x000000010007923c
- (void)conversationListDidChange;	// IMP=0x0000000100079230
- (void)_performTransitionForEvent:(long long)arg1;	// IMP=0x0000000100079084
- (id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2;	// IMP=0x0000000100079058
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;	// IMP=0x0000000100078fd8
- (long long)_state;	// IMP=0x0000000100078f8c
- (id)_stateMachine;	// IMP=0x0000000100078df0
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x0000000100078d7c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100078d10
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100078bc8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100078b28
- (void)viewDidLoad;	// IMP=0x0000000100078998
- (void)loadView;	// IMP=0x0000000100078944
- (void)updateKeyboardInfo:(CDStruct_a82615c4)arg1;	// IMP=0x0000000100078874
- (_Bool)_isTextInputEnabled;	// IMP=0x0000000100078838
- (void)dealloc;	// IMP=0x000000010007875c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x000000010007847c
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000100078418
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000783b4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100078398

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRSirilandView *view; // @dynamic view;

@end

