//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SRSiriViewController;

@interface SRViewController : UIViewController
{
    SRSiriViewController *_siriVC;	// 8 = 0x8
    int _expectedTeardownCounter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000990b0
- (void)willEnterForegroundHandler;	// IMP=0x0000000100099098
- (void)willResignActiveHandler;	// IMP=0x0000000100099080
- (void)didBecomeActiveHandler;	// IMP=0x0000000100099068
- (void)tearDownViews;	// IMP=0x0000000100098d84
- (void)_cleanupAllViews;	// IMP=0x00000001000989ec
- (void)setUpViews;	// IMP=0x0000000100098630
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010009862c
- (void)viewDidLoad;	// IMP=0x000000010009858c

@end

