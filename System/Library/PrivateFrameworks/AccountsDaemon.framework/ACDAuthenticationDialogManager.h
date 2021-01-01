/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACDAuthenticationDialogManagerProtocol.h>

@class NSXPCListener, ACDQueueDictionary, NSString;

@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol> {

	NSXPCListener* _authenticationDialogListener;
	ACDQueueDictionary* _dialogRequestQueues;
	NSString* _activeAccountID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)contextForAuthenticationDialog:(/*^block*/id)arg1 ;
-(void)authenticationDialogDidFinishWithSuccess:(BOOL)arg1 response:(id)arg2 ;
-(void)authenticationDialogCrashed;
-(void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1 ;
@end

