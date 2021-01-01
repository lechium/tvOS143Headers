/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface InstalledAppsCache : NSObject {

	NSMutableDictionary* _appCache;
	NSMutableDictionary* _nameCache;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_rebuildCache;
-(id)_localizedNameForBundle:(id)arg1 ;
-(void)_logStatus;
-(id)_bundleForPid:(int)arg1 ;
-(id)pathForPid:(int)arg1 ;
-(id)_localizedNameForPath:(id)arg1 ;
-(id)_localizedNameFromInfoDict:(id)arg1 path:(id)arg2 ;
-(void)_appRegistrationChanged;
-(id)_nameForUUID:(id)arg1 fromDict:(id)arg2 bundleId:(id*)arg3 ;
-(void)_removeApplicationFromCache:(id)arg1 ;
-(id)appNameForPid:(int)arg1 bundleId:(id*)arg2 ;
-(id)bundlePathForPid:(int)arg1 stripXPCService:(BOOL)arg2 ;
-(id)_bundlePathForPid:(int)arg1 ;
@end
