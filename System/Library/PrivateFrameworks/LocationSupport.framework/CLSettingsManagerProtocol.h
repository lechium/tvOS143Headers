/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CLSettingsManagerProtocol <CLIntersiloServiceProtocol>
@required
-(void)refresh;
-(void)flush;
-(id)syncgetSettingsAndRegisterForUpdates:(byref id)arg1;
-(void)unregisterForUpdates:(byref id)arg1;
-(id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;

@end

