//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBUserNotificationViewController-Protocol.h"
#import "TVSUITextEntryControllerDelegate-Protocol.h"
#import "TextEntryButtonViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSMutableArray, NSString, PBCFUserNotification, TVSStateMachine, UITapGestureRecognizer;
@protocol PBUserNotificationViewControllerDelegate;

@interface PBUserNotificationTextEntryViewController : UIViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, TextEntryButtonViewDelegate, TVSUITextEntryControllerDelegate, PBUserNotificationViewController>
{
    PBCFUserNotification *_notification;	// 8 = 0x8
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 16 = 0x10
    long long _preferredUserInterfaceStyle;	// 24 = 0x18
    UIViewController *_childViewController;	// 32 = 0x20
    UITapGestureRecognizer *_menuRecognizer;	// 40 = 0x28
    TVSStateMachine *_stateMachine;	// 48 = 0x30
    long long _currentTextField;	// 56 = 0x38
    NSMutableArray *_userValues;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010004ad64
@property(retain, nonatomic) NSMutableArray *userValues; // @synthesize userValues=_userValues;
@property(nonatomic) long long currentTextField; // @synthesize currentTextField=_currentTextField;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) long long preferredUserInterfaceStyle; // @synthesize preferredUserInterfaceStyle=_preferredUserInterfaceStyle;
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
- (id)_messageStringAttributes;	// IMP=0x000000010004a7f4
- (id)_titleStringAttributes;	// IMP=0x000000010004a564
- (void)_handleHomeButton:(id)arg1;	// IMP=0x000000010004a2fc
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x000000010004a184
- (void)textEntryControllerDidFinish:(id)arg1;	// IMP=0x000000010004a068
- (void)buttonView:(id)arg1 didSelectButton:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000100049ee4
- (id)textField;	// IMP=0x0000000100049dd8
- (void)_showChildViewController:(id)arg1;	// IMP=0x0000000100049b80
- (id)_buttonsForTextField:(long long)arg1 defaultButtonIndex:(long long *)arg2;	// IMP=0x00000001000495fc
- (void)_showTextEntryViewControllerForTextField:(long long)arg1;	// IMP=0x0000000100048d70
- (void)_configureStateMachine;	// IMP=0x0000000100047d78
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000100047c94
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000100047c0c
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000100047b28
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100047a6c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000479a0
- (void)loadView;	// IMP=0x00000001000477ec
- (id)init;	// IMP=0x00000001000475e8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010004749c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

