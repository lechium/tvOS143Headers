//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

@class NSObject, SATVAuthenticationManager, TVSKActivityIndicatorViewController;
@protocol OS_dispatch_source;

@interface SATVAccountUpdationViewController : TVSKViewController
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    TVSKActivityIndicatorViewController *_activityIndicatorViewController;	// 16 = 0x10
    SATVAuthenticationManager *_authenticationManager;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100034a68
@property(retain, nonatomic) NSObject<OS_dispatch_source> *requestTimeoutTimer; // @synthesize requestTimeoutTimer=_requestTimeoutTimer;
@property(retain, nonatomic) SATVAuthenticationManager *authenticationManager; // @synthesize authenticationManager=_authenticationManager;
@property(retain, nonatomic) TVSKActivityIndicatorViewController *activityIndicatorViewController; // @synthesize activityIndicatorViewController=_activityIndicatorViewController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_startRequestTimeoutTimer;	// IMP=0x00000001000347e4
- (void)_cancelRequestTimeoutTimer;	// IMP=0x0000000100034708
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000344c4
- (void)viewDidLoad;	// IMP=0x00000001000343d4
- (id)init;	// IMP=0x0000000100034358

@end

