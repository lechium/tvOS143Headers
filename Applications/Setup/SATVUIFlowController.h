//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, TVSKNavigationController;
@protocol TVSKStep;

@interface SATVUIFlowController : NSObject
{
    TVSKNavigationController *_navigationController;	// 8 = 0x8
    NSArray *_flowStepClasses;	// 16 = 0x10
    NSMutableArray *_presentedSteps;	// 24 = 0x18
    NSMutableDictionary *_presentedStepClassesToViewControllers;	// 32 = 0x20
    id <TVSKStep> _lastPresentedStep;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x000000010004934c
- (void).cxx_destruct;	// IMP=0x000000010004a174
@property(retain, nonatomic) id <TVSKStep> lastPresentedStep; // @synthesize lastPresentedStep=_lastPresentedStep;
@property(retain, nonatomic) NSMutableDictionary *presentedStepClassesToViewControllers; // @synthesize presentedStepClassesToViewControllers=_presentedStepClassesToViewControllers;
@property(retain, nonatomic) NSMutableArray *presentedSteps; // @synthesize presentedSteps=_presentedSteps;
@property(copy, nonatomic) NSArray *flowStepClasses; // @synthesize flowStepClasses=_flowStepClasses;
@property(retain, nonatomic) TVSKNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (_Bool)_isPresentableStepAfterCurrentlyActiveStep:(id)arg1;	// IMP=0x0000000100049f40
- (id)_presentedStepClassesToSteps;	// IMP=0x0000000100049dec
- (void)_removeAllStepsTillStep:(id)arg1;	// IMP=0x0000000100049cec
- (_Bool)_wasStepPresented:(id)arg1;	// IMP=0x0000000100049bd0
- (void)_configurePresentableStep:(id)arg1 withViewController:(id)arg2;	// IMP=0x00000001000497e8
- (void)popToStepViewControllerForStep:(id)arg1;	// IMP=0x000000010004964c
- (void)presentStepViewController:(id)arg1 forStep:(id)arg2;	// IMP=0x00000001000494c4
- (id)viewControllerForStepClass:(Class)arg1;	// IMP=0x0000000100049490
- (id)initWithNavigationController:(id)arg1 flowStepClasses:(id)arg2;	// IMP=0x00000001000493b0

@end

