/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNLocationProviderDelegate <NSObject>
@required
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
-(void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
-(void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
-(void)locationProvider:(id)arg1 didChangeCoarseMode:(BOOL)arg2;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;

@end

