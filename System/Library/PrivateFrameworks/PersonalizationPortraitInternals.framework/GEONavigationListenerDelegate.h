/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEONavigationListenerDelegate <NSObject>
@optional
-(void)navigationListener:(id)arg1 didChangeNavigationState:(unsigned long long)arg2 transportType:(int)arg3;
-(void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateTransitSummary:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateActiveRouteData:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2;
-(void)navigationListener:(id)arg1 didUpdateStepNameInfo:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateRideSelections:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromSign:(SCD_Struct_PP28)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromManeuver:(SCD_Struct_PP28)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(SCD_Struct_PP28)arg2;
-(void)navigationListener:(id)arg1 didUpdateNavigationVoiceVolume:(int)arg2;

@end

