/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HIDPreferences.framework/HIDPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HIDPreferencesProtocol <NSObject>
@required
-(void)set:(id)arg1 value:(id)arg2 user:(id)arg3 host:(id)arg4 domain:(id)arg5;
-(void)setMultiple:(id)arg1 keysToRemove:(id)arg2 user:(id)arg3 host:(id)arg4 domain:(id)arg5;
-(void)synchronize:(id)arg1 host:(id)arg2 domain:(id)arg3;
-(void)copy:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 reply:(/*^block*/id)arg5;
-(void)copyMultiple:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 reply:(/*^block*/id)arg5;
-(void)setDomain:(id)arg1 value:(id)arg2 domain:(id)arg3;
-(void)copyDomain:(id)arg1 domain:(id)arg2 reply:(/*^block*/id)arg3;

@end
