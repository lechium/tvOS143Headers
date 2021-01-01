/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNLocationRecorder <NSObject>
@required
-(void)recordLocation:(id)arg1 correctedLocation:(id)arg2;
-(void)recordLocation:(id)arg1 rawLocation:(id)arg2;
-(void)recordError:(id)arg1;
-(void)recordLocationUpdatePause;
-(void)recordLocationUpdateResume;
-(void)recordInitialCourse:(double)arg1;
-(void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2;
-(void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2;
-(void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4;

@end
