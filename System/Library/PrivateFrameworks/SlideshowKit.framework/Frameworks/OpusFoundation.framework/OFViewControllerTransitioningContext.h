/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OFViewControllerTransitioningContext <NSObject>
@property (assign,nonatomic) double progressVelocity; 
@required
-(double)progress;
-(BOOL)wasCancelled;
-(void)completeTransition:(BOOL)arg1;
-(id)containerView;
-(id)fromViewController;
-(id)toViewController;
-(BOOL)isInteractive;
-(void)updateInteractiveTransition:(double)arg1;
-(BOOL)isCompleting;
-(BOOL)isRubberBanding;
-(void)finishInteractiveTransitionWithVelocity:(double)arg1;
-(void)cancelInteractiveTransitionWithVelocity:(double)arg1;
-(BOOL)initiallyInteractive;
-(void)setProgressVelocity:(double)arg1;
-(double)progressVelocity;
-(void)updateNonInteractiveTransitionWithProgress:(double)arg1;
-(BOOL)doEaseIn;
-(BOOL)doEaseOut;
-(void)startInteractiveTransition;
-(void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(double)arg2;

@end

