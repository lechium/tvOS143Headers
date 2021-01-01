/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSUIWebJSPropertiesDelegate, OS_dispatch_queue;
@class AMSUIWebClientContext, NSDictionary, NSObject;

@interface AMSUIWebJSProperties : NSObject {

	id<AMSUIWebJSPropertiesDelegate> _delegate;
	AMSUIWebClientContext* _context;
	NSDictionary* _lastAccountsExport;
	NSObject*<OS_dispatch_queue> _telephonyQueue;

}

@property (assign,nonatomic,__weak) AMSUIWebClientContext * context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDictionary * lastAccountsExport;                             //@synthesize lastAccountsExport=_lastAccountsExport - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> telephonyQueue;                   //@synthesize telephonyQueue=_telephonyQueue - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIWebJSPropertiesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)_hasRequiredTelephonyEntitlement;
-(void)dealloc;
-(id<AMSUIWebJSPropertiesDelegate>)delegate;
-(void)setDelegate:(id<AMSUIWebJSPropertiesDelegate>)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(id)generateProperties;
-(id)_pluginProperties;
-(id)_clientOptionsProperties;
-(id)_deviceProperties;
-(id)_processProperties;
-(id)_accountsProperties;
-(void)setLastAccountsExport:(NSDictionary *)arg1 ;
-(NSDictionary *)lastAccountsExport;
-(id)_propertiesForClientInfo:(id)arg1 ;
-(BOOL)_setupTelephonyIfNeeded;
-(id)_hexStringFromColor:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)telephonyQueue;
-(void)setTelephonyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
