//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVAirplay2DataSourceObserver-Protocol.h"
#import "SATVAirplay2HomePickerViewControllerDelegate-Protocol.h"
#import "SATVAirplay2HomeTheaterSpeakerPickerViewControllerDelegate-Protocol.h"
#import "SATVAirplay2RoomPickerViewControllerDelegate-Protocol.h"
#import "SATVTextEntryViewControllerDelegate-Protocol.h"

@class NSObject, NSString, NSTimer, TVSStateMachine, UINavigationController;
@protocol SATVAirplay2DataSource;

@interface SATVAirplay2ViewController : TVSKViewController <SATVTextEntryViewControllerDelegate, SATVAirplay2DataSourceObserver, SATVAirplay2HomePickerViewControllerDelegate, SATVAirplay2HomeTheaterSpeakerPickerViewControllerDelegate, SATVAirplay2RoomPickerViewControllerDelegate>
{
    _Bool _updateFlow;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    TVSStateMachine *_dataSourceStateMachine;	// 24 = 0x18
    UINavigationController *_childNavigationController;	// 32 = 0x20
    CDUnknownBlockType _textEntryCompletionHandler;	// 40 = 0x28
    NSTimer *_loadingTimer;	// 48 = 0x30
    NSObject<SATVAirplay2DataSource> *_dataSource;	// 56 = 0x38
}

+ (id)_trimCustomRoomName:(id)arg1;	// IMP=0x000000010005e4f0
- (void).cxx_destruct;	// IMP=0x000000010005f38c
@property(readonly, nonatomic, getter=_dataSource) NSObject<SATVAirplay2DataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic, getter=_loadingTimer, setter=_setLoadingTimer:) NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(copy, nonatomic, getter=_textEntryCompletionHandler, setter=_setTextEntryCompletionHandler:) CDUnknownBlockType textEntryCompletionHandler; // @synthesize textEntryCompletionHandler=_textEntryCompletionHandler;
@property(nonatomic, getter=isInUpdateFlow) _Bool updateFlow; // @synthesize updateFlow=_updateFlow;
@property(retain, nonatomic, getter=_childNavigationController, setter=_setChildNavigationController:) UINavigationController *childNavigationController; // @synthesize childNavigationController=_childNavigationController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)airplay2HomePodPickerViewControllerWillDisappear;	// IMP=0x000000010005f2e0
- (void)didDeclineSetupForAirplay2HomeTheaterSpeakerPickerViewController:(id)arg1;	// IMP=0x000000010005f2d0
- (void)airplay2HomePodPickerViewController:(id)arg1 didSelectHomeTheaterSpeaker:(id)arg2;	// IMP=0x000000010005f2c0
- (void)textEntryViewController:(id)arg1 didEnterText:(id)arg2;	// IMP=0x000000010005f230
- (void)textEntryViewController:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000010005f180
- (void)textEntryViewControllerDidCancel:(id)arg1;	// IMP=0x000000010005f118
- (void)roomPickerViewControllerHomeHasBeenRemoved:(id)arg1;	// IMP=0x000000010005f0cc
- (void)roomPickerViewControllerWantsNewRoomViewController:(id)arg1;	// IMP=0x000000010005eb84
- (void)roomPickerViewController:(id)arg1 didSelectSuggestedRoom:(id)arg2;	// IMP=0x000000010005e998
- (void)roomPickerViewController:(id)arg1 didSelectExistingRoom:(id)arg2;	// IMP=0x000000010005e7ac
- (void)homePickerViewController:(id)arg1 didSelectHome:(id)arg2;	// IMP=0x000000010005e5cc
- (void)airplay2DataSourceDidUpdate:(id)arg1;	// IMP=0x000000010005e584
- (void)airplay2DataSource:(id)arg1 readyStateDidChange:(_Bool)arg2;	// IMP=0x000000010005e578
- (void)_presentCreateRoomFailedViewControllerWithError:(id)arg1;	// IMP=0x000000010005e358
- (void)_postDataSourceReadyStateDidChangeEvent;	// IMP=0x000000010005e2a8
- (void)_scheduleLoadingTimer;	// IMP=0x000000010005e210
- (void)_loadingTimerFired;	// IMP=0x000000010005e160
- (void)_showPickerViewControllers;	// IMP=0x000000010005e088
- (void)_showLoadingViewController;	// IMP=0x000000010005ded0
@property(readonly, nonatomic, getter=_dataSourceStateMachine) TVSStateMachine *dataSourceStateMachine; // @synthesize dataSourceStateMachine=_dataSourceStateMachine;
- (void)_moveOrAddLocalAccessoryToRoomNamed:(id)arg1 inHome:(id)arg2;	// IMP=0x000000010005d548
- (void)_updateLocalAccessoryAudioDestinationWithHomeTheaterSpeaker:(id)arg1;	// IMP=0x000000010005d470
- (void)_showHomeTheaterSpeakerPickerIfRequiredForRoomNamed:(id)arg1 inHome:(id)arg2;	// IMP=0x000000010005d0a4
- (void)_saveHomeTheaterSpeaker:(id)arg1;	// IMP=0x000000010005ced4
- (void)_saveRoomName:(id)arg1 inHomeNamed:(id)arg2;	// IMP=0x000000010005cd04
- (void)_sendCompletionWithDidSetupHomeTheater:(_Bool)arg1;	// IMP=0x000000010005cc64
- (id)_makeLoadingViewController;	// IMP=0x000000010005cb30
- (id)_makeRoomPickerViewControllerForHome:(id)arg1;	// IMP=0x000000010005c984
- (id)_makeHomePickerViewController;	// IMP=0x000000010005c7f4
- (id)_makePickerViewControllers;	// IMP=0x000000010005c3d4
- (void)didEnterStateBackwards;	// IMP=0x000000010005c38c
- (id)preferredFocusEnvironments;	// IMP=0x000000010005c2e0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010005c28c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010005c234
- (void)viewDidLoad;	// IMP=0x000000010005c0bc
- (id)initWithTapToSetupHomeKitInfo:(id)arg1;	// IMP=0x000000010005bee4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

