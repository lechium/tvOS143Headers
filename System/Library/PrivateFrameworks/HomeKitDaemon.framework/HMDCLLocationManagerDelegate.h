/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDCLLocationManagerDelegate <NSObject>
@required
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2;
-(void)locationManagerDidChangeAuthorization:(id)arg1;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;

@end
