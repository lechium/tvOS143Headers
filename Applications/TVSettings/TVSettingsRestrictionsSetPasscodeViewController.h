//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, TVDigitEntryViewController;

@interface TVSettingsRestrictionsSetPasscodeViewController : UIViewController
{
    TVDigitEntryViewController *_passcodeEntryViewController;	// 8 = 0x8
    NSString *_passcodeToConfirm;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000eba20
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *passcodeToConfirm; // @synthesize passcodeToConfirm=_passcodeToConfirm;
@property(retain, nonatomic) TVDigitEntryViewController *passcodeEntryViewController; // @synthesize passcodeEntryViewController=_passcodeEntryViewController;
- (void)_callCompletionHandlerWithPasscode:(id)arg1;	// IMP=0x00000001000eb958
- (void)_verifyPasscode:(id)arg1;	// IMP=0x00000001000eb50c
- (void)_promptForConfirmationOfPasscode:(id)arg1;	// IMP=0x00000001000eb3c4
- (void)_userDidCancel;	// IMP=0x00000001000eb3b4
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000eb2bc
- (void)viewDidLoad;	// IMP=0x00000001000eb078
- (id)preferredFocusEnvironments;	// IMP=0x00000001000eb024
- (id)initWithTitle:(id)arg1 prompt:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000eae00

@end

