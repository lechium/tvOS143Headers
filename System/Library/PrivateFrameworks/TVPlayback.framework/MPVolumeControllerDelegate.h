/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPVolumeControllerDelegate <NSObject>
@optional
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2;
-(void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned)arg2;
-(void)volumeController:(id)arg1 volumeControlLabelDidChange:(id)arg2;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
-(void)volumeController:(id)arg1 mutedStateDidChange:(BOOL)arg2;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
-(void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;

@end
