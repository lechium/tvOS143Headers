/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {

	NSUUID* _uuid;
	BOOL _isUsingTokenService;

}
+(void)initialize;
+(id)homeDirectoryURL;
+(id)secondaryConnection;
+(id)defaultConnectionIfExists;
+(id)secondaryConnectionIfExists;
+(id)defaultConnection;
+(id)mobileDocumentsURL;
+(id)syncedDesktopURL;
+(id)syncedDocumentsURL;
+(id)syncedRootURLs;
+(id)cloudDocsAppSupportURL;
+(id)cloudDocsCachesURL;
+(id)t_connectionForUUID:(id)arg1 ;
+(void)t_setDefaultConnection:(id)arg1 ;
+(void)t_setMobileDocumentsURL:(id)arg1 ;
+(void)invalidateCachedURLProperties;
-(id)initUsingUserLocalDaemonTokenService;
-(id)newSyncTokenProxy;
-(id)newSyncProxy;
-(void)_setupAndResume;
-(id)initUsingUserLocalDaemon;
@end

