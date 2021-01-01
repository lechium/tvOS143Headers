/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, WLKInstallable;
@class NSObject, AMSLookupItemOffer, NSString;

@interface _WLKAppInstallSession : NSObject <LSApplicationWorkspaceObserverProtocol> {

	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _progressHandler;
	id<WLKInstallable> _installable;
	AMSLookupItemOffer* _offer;

}

@property (nonatomic,readonly) id<WLKInstallable> installable;              //@synthesize installable=_installable - In the implementation block
@property (nonatomic,readonly) AMSLookupItemOffer * offer;                  //@synthesize offer=_offer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_matchingAppProxyFromProxies:(id)arg1 forInstallable:(id)arg2 ;
-(void)dealloc;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(AMSLookupItemOffer *)offer;
-(id)initWithInstallable:(id)arg1 offer:(id)arg2 ;
-(void)beginInstallationWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_canOpenAppWithBundleID:(id)arg1 ;
-(void)_sendCompletionWithError:(id)arg1 ;
-(void)_doPurchaseWithAppAdamID:(id)arg1 offer:(id)arg2 ;
-(id<WLKInstallable>)installable;
@end
