/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANHomeManagerDelegate <NSObject>
@optional
-(void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;
-(void)home:(id)arg1 didAddAccessory:(id)arg2;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2;
-(void)accessoryDidUpdateControllable:(id)arg1;
-(void)didAddHome:(id)arg1;
-(void)didRemoveHome:(id)arg1;

@end

