/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNCommuteDestinationObserver <NSObject>
@optional
-(void)commuteDestination:(id)arg1 didChangeInvalid:(BOOL)arg2;
-(void)commuteDestination:(id)arg1 didChangeRoute:(id)arg2;
-(void)commuteDestination:(id)arg1 didUpdateTrafficForRoute:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeLastMatchedLocation:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeRemainingTime:(double)arg2;
-(void)commuteDestination:(id)arg1 didChangeRemainingDistance:(double)arg2;
-(void)commuteDestination:(id)arg1 didChangeRerouting:(BOOL)arg2;
-(void)commuteDestination:(id)arg1 didChangeLastLocation:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeScore:(long long)arg2;
-(void)commuteDestination:(id)arg1 didChangeScores:(id)arg2;

@end

