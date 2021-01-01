/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TSClockClient <NSObject>
@optional
-(void)didResetClock:(id)arg1;
-(void)didChangeClockMasterForClock:(id)arg1;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
-(void)didBeginClockGrandmasterChangeForClock:(id)arg1;
-(void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1;
-(void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didProcessSync:(id)arg1;
-(void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;

@end
